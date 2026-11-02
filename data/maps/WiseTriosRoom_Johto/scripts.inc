WiseTriosRoom_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WiseTriosRoom_Johto_OnTransition
	.byte 0

WiseTriosRoom_Johto_OnTransition:
	call WiseTriosRoom_Johto_WiseTriosRoomWiseTrioCallback_Sub
	end

WiseTriosRoom_Johto_WiseTriosRoomSage1Script_Entry::
	lockall
	goto WiseTriosRoom_Johto_WiseTriosRoomSage1Script

WiseTriosRoom_Johto_WiseTriosRoomSage2Script_Entry::
	lockall
	goto WiseTriosRoom_Johto_WiseTriosRoomSage2Script

WiseTriosRoom_Johto_WiseTriosRoomSage3Script_Entry::
	lockall
	goto WiseTriosRoom_Johto_WiseTriosRoomSage3Script

WiseTriosRoom_Johto_WiseTriosRoom_CannotEnterTinTowerScript_Entry::
	lockall
	goto WiseTriosRoom_Johto_WiseTriosRoom_CannotEnterTinTowerScript


WiseTriosRoom_Johto_WiseTriosRoomSage1Script:
	faceplayer
	message WiseTriosRoom_Johto_WiseTriosRoomSage1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

WiseTriosRoom_Johto_WiseTriosRoomSage2Script:
	faceplayer
	message WiseTriosRoom_Johto_WiseTriosRoomSage2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

WiseTriosRoom_Johto_WiseTriosRoomSage3Script:
	faceplayer
	message WiseTriosRoom_Johto_WiseTriosRoomSage3Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

WiseTriosRoom_Johto_WiseTriosRoom_CannotEnterTinTowerScript:
	applymovement 3, Johto_Movement_Face_Up
	waitmovement 3
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Down
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 3, Johto_Movement_Emote_exclamation_mark
	waitmovement 3
	applymovement 3, WiseTriosRoom_Johto_WiseTriosRoomSageBlocksPlayerMovement
	applymovement OBJ_EVENT_ID_PLAYER, WiseTriosRoom_Johto_WiseTriosRoomSageBlocksPlayerMovement
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Right
	waitmovement OBJ_EVENT_ID_PLAYER
	message WiseTriosRoom_Johto_WiseTriosRoomSage3BlocksExitText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement 3, WiseTriosRoom_Johto_WiseTriosRoomSageReturnsMovement
	waitmovement 3
	applymovement 3, Johto_Movement_Face_Left
	waitmovement 3
	releaseall
	end

WiseTriosRoom_Johto_WiseTriosRoomWiseTrioCallback_Sub:
	goto_if_set FLAG_JOHTO_FOUGHT_SUICUNE, WiseTriosRoom_Johto_WiseTriosRoomWiseTrioCallback_NoWiseTrio_Sub
	goto_if_set FLAG_JOHTO_KOJI_ALLOWS_YOU_PASSAGE_TO_TIN_TOWER, WiseTriosRoom_Johto_WiseTriosRoomWiseTrioCallback_WiseTrio2_Sub
	@ TODO unsupported: checkitem CLEAR_BELL
	return

WiseTriosRoom_Johto_WiseTriosRoomWiseTrioCallback_WiseTrio2_Sub:
	setflag FLAG_JOHTO_WISE_TRIOS_ROOM_WISE_TRIO_1
	clearflag FLAG_JOHTO_WISE_TRIOS_ROOM_WISE_TRIO_2
	return

WiseTriosRoom_Johto_WiseTriosRoomWiseTrioCallback_NoWiseTrio_Sub:
	setflag FLAG_JOHTO_WISE_TRIOS_ROOM_WISE_TRIO_1
	setflag FLAG_JOHTO_WISE_TRIOS_ROOM_WISE_TRIO_2
	return

WiseTriosRoom_Johto_WiseTriosRoomSageBlocksPlayerMovement:
	walk_left
	walk_left
	step_end

WiseTriosRoom_Johto_WiseTriosRoomSageReturnsMovement:
	walk_right
	walk_down
	step_end

WiseTriosRoom_Johto_WiseTriosRoomSage1Text:
	.string "Astounding…"
	.string "\pSUICUNE, ENTEI and\n"
	.string "RAIKOU have arisen\l"
	.string "from their sleep…"
	.string "\pIs the legend\n"
	.string "coming true?$"

WiseTriosRoom_Johto_WiseTriosRoomSage2Text:
	.string "We train at the\n"
	.string "BURNED TOWER, but"
	.string "\pwe've never heard\n"
	.string "of a hole opening"
	.string "\pup there before.\n"
	.string "It must have been"
	.string "\pdeliberately made\n"
	.string "by someone.$"

WiseTriosRoom_Johto_WiseTriosRoomSage3BlocksExitText:
	.string "TIN TOWER may be\n"
	.string "entered by those"
	.string "\pbearing ECRUTEAK's\n"
	.string "GYM BADGE."
	.string "\pHowever, now that\n"
	.string "SUICUNE, RAIKOU"
	.string "\pand ENTEI have\n"
	.string "arisen, I ask you"
	.string "\pto refrain from\n"
	.string "entering!$"

WiseTriosRoom_Johto_WiseTriosRoomSage3Text:
	.string "We, the WISE TRIO,\n"
	.string "are the protectors"
	.string "\pof the legendary\n"
	.string "POKéMON.$"
