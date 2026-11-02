Route34_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route34_Johto_OnTransition
	.byte 0

Route34_Johto_OnTransition:
	call Route34_Johto_Route34EggCheckCallback_Sub
	end

Route34_Johto_OfficerKeithScript_Entry::
	lockall
	goto Route34_Johto_OfficerKeithScript

Route34_Johto_DayCareManScript_Outside_Entry::
	lockall
	goto Route34_Johto_DayCareManScript_Outside

Route34_Johto_DayCareMon1Script_Entry::
	lockall
	goto Route34_Johto_DayCareMon1Script

Route34_Johto_DayCareMon2Script_Entry::
	lockall
	goto Route34_Johto_DayCareMon2Script

Route34_Johto_Route34Sign_Entry::
	lockall
	goto Route34_Johto_Route34Sign

Route34_Johto_Route34TrainerTips_Entry::
	lockall
	goto Route34_Johto_Route34TrainerTips

Route34_Johto_DayCareSign_Entry::
	lockall
	goto Route34_Johto_DayCareSign


Route34_Johto_DayCareManScript_Outside:
	faceplayer
	@ TODO unsupported: special DayCareManOutside
	goto Johto_EventScript_Unimplemented

Route34_Johto_DayCareMon1Script:
	@ TODO unsupported: special DayCareMon1
	goto Johto_EventScript_Unimplemented

Route34_Johto_DayCareMon2Script:
	@ TODO unsupported: special DayCareMon2
	goto Johto_EventScript_Unimplemented

Route34_Johto_OfficerKeithScript:
	faceplayer
	setvar VAR_0x8004, 4
	special JohtoCheckTime
	goto_if_eq VAR_RESULT, 0, Route34_Johto_OfficerKeithScript_NoFight
	goto_if_set FLAG_JOHTO_BEAT_OFFICER_KEITH, Route34_Johto_OfficerKeithScript_AfterScript
	playbgm MUS_DUMMY, FALSE
	message Route34_Johto_OfficerKeithSeenText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext OfficerKeithWinText, 0
	goto Johto_EventScript_Unimplemented

Route34_Johto_OfficerKeithScript_AfterScript:
	message Route34_Johto_OfficerKeithAfterText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route34_Johto_OfficerKeithScript_NoFight:
	message Route34_Johto_OfficerKeithDaytimeText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route34_Johto_Route34Sign:
	message Route34_Johto_Route34SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route34_Johto_Route34TrainerTips:
	message Route34_Johto_Route34TrainerTipsText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route34_Johto_DayCareSign:
	message Route34_Johto_DayCareSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route34_Johto_Route34EggCheckCallback_Sub:
	goto_if_set FLAG_JOHTO_ENGINE_DAY_CARE_MAN_HAS_EGG, Route34_Johto_Route34EggCheckCallback_PutDayCareManOutside_Sub
	clearflag FLAG_JOHTO_DAY_CARE_MAN_IN_DAY_CARE
	setflag FLAG_JOHTO_DAY_CARE_MAN_ON_ROUTE_34
	goto Route34_Johto_Route34EggCheckCallback_CheckMon1_Sub

Route34_Johto_Route34EggCheckCallback_PutDayCareManOutside_Sub:
	setflag FLAG_JOHTO_DAY_CARE_MAN_IN_DAY_CARE
	clearflag FLAG_JOHTO_DAY_CARE_MAN_ON_ROUTE_34
	goto Route34_Johto_Route34EggCheckCallback_CheckMon1_Sub

Route34_Johto_Route34EggCheckCallback_CheckMon1_Sub:
	goto_if_unset FLAG_JOHTO_ENGINE_DAY_CARE_MAN_HAS_MON, Route34_Johto_Route34EggCheckCallback_HideMon1_Sub
	clearflag FLAG_JOHTO_DAY_CARE_MON_1
	goto Route34_Johto_Route34EggCheckCallback_CheckMon2_Sub

Route34_Johto_Route34EggCheckCallback_HideMon1_Sub:
	setflag FLAG_JOHTO_DAY_CARE_MON_1
	goto Route34_Johto_Route34EggCheckCallback_CheckMon2_Sub

Route34_Johto_Route34EggCheckCallback_CheckMon2_Sub:
	goto_if_unset FLAG_JOHTO_ENGINE_DAY_CARE_LADY_HAS_MON, Route34_Johto_Route34EggCheckCallback_HideMon2_Sub
	clearflag FLAG_JOHTO_DAY_CARE_MON_2
	return

Route34_Johto_Route34EggCheckCallback_HideMon2_Sub:
	setflag FLAG_JOHTO_DAY_CARE_MON_2
	return

Route34_Johto_OfficerKeithSeenText:
	.string "Who goes there?\n"
	.string "What are you up\l"
	.string "to?$"

Route34_Johto_OfficerKeithAfterText:
	.string "Yep, I see nothing\n"
	.string "wrong today. You"
	.string "\pbe good and stay\n"
	.string "out of trouble.$"

Route34_Johto_OfficerKeithDaytimeText:
	.string "I'm on patrol for\n"
	.string "suspicious indi-\l"
	.string "viduals.$"

Route34_Johto_Route34SignText:
	.string "ROUTE 34"
	.string "\pGOLDENROD CITY -\n"
	.string "AZALEA TOWN"
	.string "\pILEX FOREST\n"
	.string "SOMEWHERE BETWEEN$"

Route34_Johto_Route34TrainerTipsText:
	.string "TRAINER TIPS"
	.string "\pBERRY trees grow\n"
	.string "new BERRIES\l"
	.string "every day."
	.string "\pMake a note of\n"
	.string "which trees bear\l"
	.string "which BERRIES.$"

Route34_Johto_DayCareSignText:
	.string "DAY-CARE"
	.string "\pLET US RAISE YOUR\n"
	.string "POKéMON FOR YOU!$"
