GoldenrodUnderground_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodUnderground_Johto_OnTransition
	.byte 0

GoldenrodUnderground_Johto_OnTransition:
	call GoldenrodUnderground_Johto_GoldenrodUndergroundResetSwitchesCallback_Cb
	call GoldenrodUnderground_Johto_GoldenrodUndergroundCheckDayOfWeekCallback_Cb
	end

GoldenrodUnderground_Johto_BargainMerchantScript_Entry::
	lockall
	goto GoldenrodUnderground_Johto_BargainMerchantScript

GoldenrodUnderground_Johto_OlderHaircutBrotherScript_Entry::
	lockall
	goto GoldenrodUnderground_Johto_OlderHaircutBrotherScript

GoldenrodUnderground_Johto_YoungerHaircutBrotherScript_Entry::
	lockall
	goto GoldenrodUnderground_Johto_YoungerHaircutBrotherScript

GoldenrodUnderground_Johto_BitterMerchantScript_Entry::
	lockall
	goto GoldenrodUnderground_Johto_BitterMerchantScript

GoldenrodUnderground_Johto_BasementDoorScript_Entry::
	lockall
	goto GoldenrodUnderground_Johto_BasementDoorScript

GoldenrodUnderground_Johto_GoldenrodUndergroundNoEntrySign_Entry::
	lockall
	goto GoldenrodUnderground_Johto_GoldenrodUndergroundNoEntrySign


GoldenrodUnderground_Johto_TrainerSupernerdEric::
	trainerbattle_single TRAINER_JOHTO_SUPER_NERD_ERIC, GoldenrodUnderground_Johto_SupernerdEricSeenText, GoldenrodUnderground_Johto_SupernerdEricBeatenText
	setflag FLAG_JOHTO_BEAT_SUPER_NERD_ERIC
	lock
	faceplayer
	goto GoldenrodUnderground_Johto_TrainerSupernerdEric_Script

GoldenrodUnderground_Johto_TrainerSupernerdEric_Script:
	message GoldenrodUnderground_Johto_SupernerdEricAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodUnderground_Johto_TrainerSupernerdTeru::
	trainerbattle_single TRAINER_JOHTO_SUPER_NERD_TERU, GoldenrodUnderground_Johto_SupernerdTeruSeenText, GoldenrodUnderground_Johto_SupernerdTeruBeatenText
	setflag FLAG_JOHTO_BEAT_SUPER_NERD_TERU
	lock
	faceplayer
	goto GoldenrodUnderground_Johto_TrainerSupernerdTeru_Script

GoldenrodUnderground_Johto_TrainerSupernerdTeru_Script:
	message GoldenrodUnderground_Johto_SupernerdTeruAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodUnderground_Johto_TrainerPokemaniacIssac::
	trainerbattle_single TRAINER_JOHTO_POKEMANIAC_ISSAC, GoldenrodUnderground_Johto_PokemaniacIssacSeenText, GoldenrodUnderground_Johto_PokemaniacIssacBeatenText
	setflag FLAG_JOHTO_BEAT_POKEMANIAC_ISSAC
	lock
	faceplayer
	goto GoldenrodUnderground_Johto_TrainerPokemaniacIssac_Script

GoldenrodUnderground_Johto_TrainerPokemaniacIssac_Script:
	message GoldenrodUnderground_Johto_PokemaniacIssacAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodUnderground_Johto_TrainerPokemaniacDonald::
	trainerbattle_single TRAINER_JOHTO_POKEMANIAC_DONALD, GoldenrodUnderground_Johto_PokemaniacDonaldSeenText, GoldenrodUnderground_Johto_PokemaniacDonaldBeatenText
	setflag FLAG_JOHTO_BEAT_POKEMANIAC_DONALD
	lock
	faceplayer
	goto GoldenrodUnderground_Johto_TrainerPokemaniacDonald_Script

GoldenrodUnderground_Johto_TrainerPokemaniacDonald_Script:
	message GoldenrodUnderground_Johto_PokemaniacDonaldAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodUnderground_Johto_BitterMerchantScript:
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

GoldenrodUnderground_Johto_BargainMerchantScript:
	goto_if_set FLAG_JOHTO_ENGINE_GOLDENROD_UNDERGROUND_MERCHANT_CLOSED, GoldenrodUnderground_Johto_GoldenrodUndergroundScript_ShopClosed
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

GoldenrodUnderground_Johto_OlderHaircutBrotherScript:
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

GoldenrodUnderground_Johto_YoungerHaircutBrotherScript:
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

GoldenrodUnderground_Johto_BasementDoorScript:
	goto_if_set FLAG_JOHTO_USED_BASEMENT_KEY, GoldenrodUnderground_Johto_BasementDoorScript_Open
	checkitem ITEM_BASEMENT_KEY, 1
	goto_if_ne VAR_RESULT, 0, GoldenrodUnderground_Johto_BasementDoorScript_Unlock
	message GoldenrodUnderground_Johto_GoldenrodUndergroundTheDoorsLockedText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodUnderground_Johto_BasementDoorScript_Unlock:
	@ TODO unsupported: playsound SFX_TRANSACTION
	goto Johto_EventScript_Unimplemented

GoldenrodUnderground_Johto_BasementDoorScript_Open:
	message GoldenrodUnderground_Johto_GoldenrodUndergroundTheDoorIsOpenText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodUnderground_Johto_GoldenrodUndergroundScript_ShopClosed:
	message GoldenrodUnderground_Johto_GoldenrodUndergroundWeAreNotOpenTodayText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodUnderground_Johto_GoldenrodUndergroundNoEntrySign:
	message GoldenrodUnderground_Johto_GoldenrodUndergroundNoEntryText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodUnderground_Johto_GoldenrodUndergroundResetSwitchesCallback_Cb:
	clearflag FLAG_JOHTO_SWITCH_1
	clearflag FLAG_JOHTO_SWITCH_2
	clearflag FLAG_JOHTO_SWITCH_3
	clearflag FLAG_JOHTO_EMERGENCY_SWITCH
	clearflag FLAG_JOHTO_DOOR_1_OPEN
	clearflag FLAG_JOHTO_DOOR_2_OPEN
	clearflag FLAG_JOHTO_DOOR_3_OPEN
	clearflag FLAG_JOHTO_DOOR_4_OPEN
	clearflag FLAG_JOHTO_DOOR_5_OPEN
	clearflag FLAG_JOHTO_DOOR_6_OPEN
	clearflag FLAG_JOHTO_DOOR_7_OPEN
	clearflag FLAG_JOHTO_DOOR_8_OPEN
	clearflag FLAG_JOHTO_DOOR_9_OPEN
	clearflag FLAG_JOHTO_DOOR_10_OPEN
	clearflag FLAG_JOHTO_DOOR_11_OPEN
	setvar VAR_RESULT, 0
	@ TODO unsupported: writemem wUndergroundSwitchPositions
	return

GoldenrodUnderground_Johto_GoldenrodUndergroundCheckDayOfWeekCallback_Cb:
	@ TODO unsupported: readvar VAR_WEEKDAY
	return

GoldenrodUnderground_Johto_SupernerdEricSeenText:
	.string "I got booted out\n"
	.string "of the GAME COR-\l"
	.string "NER."
	.string "\pI was trying to\n"
	.string "cheat using my\l"
	.string "POKéMON…$"

GoldenrodUnderground_Johto_SupernerdEricBeatenText:
	.string "…Grumble…$"

GoldenrodUnderground_Johto_SupernerdEricAfterBattleText:
	.string "I guess I have to\n"
	.string "do things fair and\l"
	.string "square…$"

GoldenrodUnderground_Johto_SupernerdTeruSeenText:
	.string "Do you consider\n"
	.string "type alignments in\l"
	.string "battle?"
	.string "\pIf you know your\n"
	.string "type advantages,"
	.string "\pyou'll do better\n"
	.string "in battle.$"

GoldenrodUnderground_Johto_SupernerdTeruBeatenText:
	.string "Ow, ow, ow!$"

GoldenrodUnderground_Johto_SupernerdTeruAfterBattleText:
	.string "I know my POKéMON\n"
	.string "type alignments."
	.string "\pBut I only use one\n"
	.string "type of POKéMON.$"

GoldenrodUnderground_Johto_PokemaniacIssacSeenText:
	.string "My POKéMON just\n"
	.string "got a haircut!"
	.string "\pI'll show you how\n"
	.string "strong it is!$"

GoldenrodUnderground_Johto_PokemaniacIssacBeatenText:
	.string "Aiyeeee!$"

GoldenrodUnderground_Johto_PokemaniacIssacAfterBattleText:
	.string "Your POKéMON will\n"
	.string "like you more if"
	.string "\pyou give them\n"
	.string "haircuts.$"

GoldenrodUnderground_Johto_PokemaniacDonaldSeenText:
	.string "I think you have\n"
	.string "some rare POKéMON\l"
	.string "with you."
	.string "\pLet me see them!$"

GoldenrodUnderground_Johto_PokemaniacDonaldBeatenText:
	.string "Gaah! I lost!\n"
	.string "That makes me mad!$"

GoldenrodUnderground_Johto_PokemaniacDonaldAfterBattleText:
	.string "Are you making a\n"
	.string "POKéDEX? Here's a\l"
	.string "hot tip."
	.string "\pThe HIKER on ROUTE\n"
	.string "33, ANTHONY, is a\l"
	.string "good guy."
	.string "\pHe'll phone you if\n"
	.string "he sees any rare\l"
	.string "POKéMON.$"

GoldenrodUnderground_Johto_GoldenrodUndergroundTheDoorsLockedText:
	.string "The door's locked…$"

GoldenrodUnderground_Johto_GoldenrodUndergroundTheDoorIsOpenText:
	.string "The door is open.$"

GoldenrodUnderground_Johto_GoldenrodUndergroundWeAreNotOpenTodayText:
	.string "We're not open\n"
	.string "today.$"

GoldenrodUnderground_Johto_GoldenrodUndergroundNoEntryText:
	.string "NO ENTRY BEYOND\n"
	.string "THIS POINT$"
