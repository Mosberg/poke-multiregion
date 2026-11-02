GoldenrodUndergroundWarehouse_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodUndergroundWarehouse_Johto_OnTransition
	.byte 0

GoldenrodUndergroundWarehouse_Johto_OnTransition:
	call GoldenrodUndergroundWarehouse_Johto_GoldenrodUndergroundWarehouseResetSwitchesCallback_Sub
	end

GoldenrodUndergroundWarehouse_Johto_GoldenrodUndergroundWarehouseDirectorScript_Entry::
	lockall
	goto GoldenrodUndergroundWarehouse_Johto_GoldenrodUndergroundWarehouseDirectorScript


GoldenrodUndergroundWarehouse_Johto_GoldenrodUndergroundWarehouseDirectorScript:
	faceplayer
	goto_if_set FLAG_JOHTO_RECEIVED_CARD_KEY, GoldenrodUndergroundWarehouse_Johto_GoldenrodUndergroundWarehouseDirectorScript_GotCardKey
	message GoldenrodUndergroundWarehouse_Johto_DirectorIntroText
	waitmessage
	waitbuttonpress
	giveitem ITEM_CARD_KEY
	setflag FLAG_JOHTO_RECEIVED_CARD_KEY
	setflag FLAG_JOHTO_GOLDENROD_DEPT_STORE_B1F_LAYOUT_1
	clearflag FLAG_JOHTO_GOLDENROD_DEPT_STORE_B1F_LAYOUT_2
	clearflag FLAG_JOHTO_GOLDENROD_DEPT_STORE_B1F_LAYOUT_3
	message GoldenrodUndergroundWarehouse_Johto_DirectorCardKeyText
	waitmessage
	waitbuttonpress

GoldenrodUndergroundWarehouse_Johto_GoldenrodUndergroundWarehouseDirectorScript_GotCardKey:
	message GoldenrodUndergroundWarehouse_Johto_DirectorAfterText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodUndergroundWarehouse_Johto_GoldenrodUndergroundWarehouseResetSwitchesCallback_Sub:
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

GoldenrodUndergroundWarehouse_Johto_DirectorIntroText:
	.string "DIRECTOR: Who?\n"
	.string "What? You came to\l"
	.string "rescue me?"
	.string "\pThank you!"
	.string "\pThe RADIO TOWER!"
	.string "\pWhat's happening\n"
	.string "there?"
	.string "\pTaken over by TEAM\n"
	.string "ROCKET?"
	.string "\pHere. Take this\n"
	.string "CARD KEY.$"

GoldenrodUndergroundWarehouse_Johto_DirectorCardKeyText:
	.string "DIRECTOR: Use that\n"
	.string "to open the shut-\l"
	.string "ters on 3F.$"

GoldenrodUndergroundWarehouse_Johto_DirectorAfterText:
	.string "I'm begging you to\n"
	.string "help."
	.string "\pThere's no telling\n"
	.string "what they'll do if"
	.string "\pthey control the\n"
	.string "transmitter."
	.string "\pThey may even be\n"
	.string "able to control"
	.string "\pPOKéMON using a\n"
	.string "special signal!"
	.string "\pYou're the only\n"
	.string "one I can call on."
	.string "\pPlease save the\n"
	.string "RADIO TOWER…"
	.string "\pAnd all the POKé-\n"
	.string "MON nationwide!$"
