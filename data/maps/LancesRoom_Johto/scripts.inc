LancesRoom_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LancesRoom_Johto_OnFrame
	.byte 0

LancesRoom_Johto_OnFrame:
	map_script_2 VAR_JOHTO_SCENE_LANCES_ROOM, 0, LancesRoom_Johto_LancesRoomDoorLocksBehindYouScript_Entry
	.2byte 0

LancesRoom_Johto_LancesRoomLanceScript_Entry::
	lockall
	goto LancesRoom_Johto_LancesRoomLanceScript

LancesRoom_Johto_Script_ApproachLanceFromLeft_Entry::
	lockall
	goto LancesRoom_Johto_Script_ApproachLanceFromLeft

LancesRoom_Johto_Script_ApproachLanceFromRight_Entry::
	lockall
	goto LancesRoom_Johto_Script_ApproachLanceFromRight

LancesRoom_Johto_LancesRoomDoorLocksBehindYouScript_Entry::
	lockall
	goto LancesRoom_Johto_LancesRoomDoorLocksBehindYouScript


LancesRoom_Johto_LancesRoomDoorLocksBehindYouScript:
	applymovement OBJ_EVENT_ID_PLAYER, LancesRoom_Johto_LancesRoom_EnterMovement
	waitmovement OBJ_EVENT_ID_PLAYER
	@ TODO unsupported: playsound SFX_STRENGTH
	goto Johto_EventScript_Unimplemented

LancesRoom_Johto_Script_ApproachLanceFromLeft:
	fadeoutbgm 4
	applymovement OBJ_EVENT_ID_PLAYER, LancesRoom_Johto_MovementData_ApproachLanceFromLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	goto LancesRoom_Johto_LancesRoomLanceScript

LancesRoom_Johto_Script_ApproachLanceFromRight:
	fadeoutbgm 4
	applymovement OBJ_EVENT_ID_PLAYER, LancesRoom_Johto_MovementData_ApproachLanceFromRight
	waitmovement OBJ_EVENT_ID_PLAYER

LancesRoom_Johto_LancesRoomLanceScript:
	applymovement 1, Johto_Movement_Face_Left
	waitmovement 1
	message LancesRoom_Johto_LanceBattleIntroText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: setlasttalked LANCESROOM_LANCE
	goto Johto_EventScript_Unimplemented

LancesRoom_Johto_LancesRoom_EnterMovement:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LancesRoom_Johto_MovementData_ApproachLanceFromLeft:
	walk_up
	walk_up
	face_right
	step_end

LancesRoom_Johto_MovementData_ApproachLanceFromRight:
	walk_up
	walk_left
	walk_up
	face_right
	step_end

LancesRoom_Johto_LanceBattleIntroText:
	.string "LANCE: I've been\n"
	.string "waiting for you."
	.string "\p{PLAYER}!"
	.string "\pI knew that you,\n"
	.string "with your skills,"
	.string "\pwould eventually\n"
	.string "reach me here."
	.string "\pThere's no need\n"
	.string "for words now."
	.string "\pWe will battle to\n"
	.string "determine who is"
	.string "\pthe stronger of\n"
	.string "the two of us."
	.string "\pAs the most power-\n"
	.string "ful trainer and as"
	.string "\pthe POKéMON LEAGUE\n"
	.string "CHAMPION…"
	.string "\pI, LANCE the drag-\n"
	.string "on master, accept\l"
	.string "your challenge!$"

LancesRoom_Johto_LanceBattleWinText:
	.string "…It's over."
	.string "\pBut it's an odd\n"
	.string "feeling."
	.string "\pI'm not angry that\n"
	.string "I lost. In fact, I\l"
	.string "feel happy."
	.string "\pHappy that I\n"
	.string "witnessed the rise"
	.string "\pof a great new\n"
	.string "CHAMPION!$"
