#ifndef GUARD_REGIONS_H
#define GUARD_REGIONS_H

#include "global.h"
#include "constants/regions.h"

enum KantoSubRegion GetKantoSubregion(u32 mapSecId);

static inline enum Region GetRegionForSectionId(u32 sectionId)
{
    if (sectionId >= KANTO_MAPSEC_START && sectionId < MAPSEC_SPECIAL_AREA)
        return REGION_KANTO;
    return REGION_HOENN;
}

static inline enum Region GetCurrentRegion(void)
{
    return GetRegionForSectionId(gMapHeader.regionMapSectionId);
}

// POKE-MULTIREGION: behaviour that FireRed implements with a compile-time IS_FRLG (first-battle tutorial, old man) must
// also apply to battles fought in Kanto when the ROM is built as Emerald.
#define IS_FRLG_CTX (IS_FRLG || GetCurrentRegion() == REGION_KANTO)

#endif // GUARD_REGIONS_H
