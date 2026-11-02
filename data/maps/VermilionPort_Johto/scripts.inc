VermilionPort_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionPort_Johto_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VermilionPort_Johto_OnFrame
	.byte 0

VermilionPort_Johto_OnTransition:
	call VermilionPort_Johto_VermilionPortFlypointCallback_Sub
	end

VermilionPort_Johto_OnFrame:
	map_script_2 VAR_JOHTO_SCENE_VERMILION_PORT, 1, VermilionPort_Johto_VermilionPortLeaveShipScript_Entry
	.2byte 0

VermilionPort_Johto_VermilionPortSailorAtGangwayScript_Entry::
	lockall
	goto VermilionPort_Johto_VermilionPortSailorAtGangwayScript

VermilionPort_Johto_VermilionPortSailorScript_Entry::
	lockall
	goto VermilionPort_Johto_VermilionPortSailorScript

VermilionPort_Johto_VermilionPortSuperNerdScript_Entry::
	lockall
	goto VermilionPort_Johto_VermilionPortSuperNerdScript

VermilionPort_Johto_VermilionPortWalkUpToShipScript_Entry::
	lockall
	goto VermilionPort_Johto_VermilionPortWalkUpToShipScript

VermilionPort_Johto_VermilionPortLeaveShipScript_Entry::
	lockall
	goto VermilionPort_Johto_VermilionPortLeaveShipScript


VermilionPort_Johto_VermilionPortLeaveShipScript:
	applymovement OBJ_EVENT_ID_PLAYER, VermilionPort_Johto_VermilionPortLeaveFastShipMovement
	waitmovement OBJ_EVENT_ID_PLAYER
	clearflag FLAG_JOHTO_VERMILION_PORT_SAILOR_AT_GANGWAY
	addobject 1
	setvar VAR_JOHTO_SCENE_VERMILION_PORT, 0
	setflag FLAG_JOHTO_FAST_SHIP_CABINS_SE_SSE_CAPTAINS_CABIN_TWIN_1
	setflag FLAG_JOHTO_FAST_SHIP_CABINS_SE_SSE_GENTLEMAN
	setflag FLAG_JOHTO_FAST_SHIP_PASSENGERS_FIRST_TRIP
	clearflag FLAG_JOHTO_OLIVINE_PORT_PASSAGE_POKEFAN_M
	setflag FLAG_JOHTO_FAST_SHIP_FIRST_TIME
	setflag FLAG_TEMP_11
	@ TODO unsupported: blackoutmod VERMILION_CITY
	goto Johto_EventScript_Unimplemented

VermilionPort_Johto_VermilionPortSailorAtGangwayScript:
	faceplayer
	goto_if_set FLAG_TEMP_11, VermilionPort_Johto_VermilionPortAlreadyRodeScript
	message VermilionPort_Johto_VermilionPortDepartingText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement 1, Johto_Movement_Face_Down
	waitmovement 1
	delay 10
	playse SE_EXIT
	removeobject 1
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, VermilionPort_Johto_VermilionPortEnterFastShipMovement
	waitmovement OBJ_EVENT_ID_PLAYER
	playse SE_EXIT
	@ TODO unsupported: special FadeOutToWhite
	goto Johto_EventScript_Unimplemented

VermilionPort_Johto_VermilionPortAlreadyRodeScript:
	message VermilionPort_Johto_VermilionPortCantBoardText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionPort_Johto_VermilionPortWalkUpToShipScript:
	applymovement 2, Johto_Movement_Face_Right
	waitmovement 2
	goto_if_set FLAG_TEMP_11, VermilionPort_Johto_VermilionPortWalkUpToShipScript_skip
	goto_if_set FLAG_TEMP_12, VermilionPort_Johto_VermilionPortWalkUpToShipScript_skip
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Left
	waitmovement OBJ_EVENT_ID_PLAYER
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

VermilionPort_Johto_VermilionPortWalkUpToShipScript_skip:
	releaseall
	end

VermilionPort_Johto_VermilionPortSailorScript:
	faceplayer
	goto_if_set FLAG_TEMP_11, VermilionPort_Johto_VermilionPortAlreadyRodeScript
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

VermilionPort_Johto_VermilionPortSuperNerdScript:
	faceplayer
	message VermilionPort_Johto_VermilionPortSuperNerdText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionPort_Johto_VermilionPortFlypointCallback_Sub:
	setflag FLAG_JOHTO_ENGINE_FLYPOINT_VERMILION
	return

VermilionPort_Johto_VermilionPortEnterFastShipMovement:
	walk_down
	step_end

VermilionPort_Johto_VermilionPortLeaveFastShipMovement:
	walk_up
	step_end

VermilionPort_Johto_VermilionPortDepartingText:
	.string "We're departing\n"
	.string "soon. Please get\l"
	.string "on board.$"

VermilionPort_Johto_VermilionPortCantBoardText:
	.string "Sorry. You can't\n"
	.string "board now.$"

VermilionPort_Johto_VermilionPortSuperNerdText:
	.string "You came from\n"
	.string "JOHTO?"
	.string "\pI hear many rare\n"
	.string "POKéMON live over\l"
	.string "there.$"
