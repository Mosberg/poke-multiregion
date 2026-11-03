#include "global.h"
#include "rtc.h"
#include "event_data.h"
#include "regions.h"

// Crystal's time-of-day slots: MORN 4-9, DAY 10-17, NITE 18-3. VAR_0x8004 holds a mask (1 MORN, 2 DAY, 4 NITE);
// VAR_RESULT is TRUE when the current slot is one of them.
void JohtoCheckTime(void)
{
    u16 mask = gSpecialVar_0x8004;
    u8 hour;
    u8 slot;

    RtcCalcLocalTime();
    hour = gLocalTime.hours;
    if (hour >= 4 && hour < 10)
        slot = 1;
    else if (hour >= 10 && hour < 18)
        slot = 2;
    else
        slot = 4;
    gSpecialVar_Result = (mask & slot) != 0;
}

// Crystal's VAR_WEEKDAY: 0 = Sunday ... 6 = Saturday.
void JohtoGetWeekday(void)
{
    gSpecialVar_Result = GetDayOfWeek();
}

// Crystal's VAR_BADGES: number of Johto gym badges.
void JohtoCountBadges(void)
{
    u32 i, count = 0;

    for (i = 0; i < 8; i++)
    {
        if (FlagGet(GetBadgeFlagForRegion(REGION_JOHTO, i)))
            count++;
    }
    gSpecialVar_Result = count;
}
