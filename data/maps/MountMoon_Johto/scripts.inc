MountMoon_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MountMoon_Johto_OnFrame
	.byte 0

MountMoon_Johto_OnFrame:
	map_script_2 VAR_JOHTO_SCENE_MOUNT_MOON, 0, MountMoon_Johto_MountMoonRivalBattleScript_Entry
	.2byte 0

MountMoon_Johto_MountMoonRivalBattleScript_Entry::
	lockall
	goto MountMoon_Johto_MountMoonRivalBattleScript


MountMoon_Johto_MountMoonRivalBattleScript:
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Right
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Emote_exclamation_mark
	waitmovement OBJ_EVENT_ID_PLAYER
	fadeoutbgm 4
	delay 15
	applymovement 1, MountMoon_Johto_MountMoonRivalMovementBefore
	waitmovement 1
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
	message MountMoon_Johto_MountMoonRivalTextBefore
	waitmessage
	waitbuttonpress
	closemessage
	goto_if_set FLAG_JOHTO_GOT_TOTODILE_FROM_ELM, MountMoon_Johto_MountMoonRivalBattleScript_Totodile
	goto_if_set FLAG_JOHTO_GOT_CHIKORITA_FROM_ELM, MountMoon_Johto_MountMoonRivalBattleScript_Chikorita
	@ TODO unsupported: setlasttalked MOUNTMOON_RIVAL
	goto Johto_EventScript_Unimplemented

MountMoon_Johto_MountMoonRivalBattleScript_Totodile:
	@ TODO unsupported: setlasttalked MOUNTMOON_RIVAL
	goto Johto_EventScript_Unimplemented

MountMoon_Johto_MountMoonRivalBattleScript_Chikorita:
	@ TODO unsupported: setlasttalked MOUNTMOON_RIVAL
	goto Johto_EventScript_Unimplemented

MountMoon_Johto_MountMoonRivalMovementBefore:
	walk_left
	walk_left
	walk_left
	step_end

MountMoon_Johto_MountMoonRivalTextBefore:
	.string "<……> <……> <……>"
	.string "\pIt's been a while,\n"
	.string "{PLAYER}."
	.string "\p…Since I lost to\n"
	.string "you, I thought"
	.string "\pabout what I was\n"
	.string "lacking with my\l"
	.string "POKéMON…"
	.string "\pAnd we came up\n"
	.string "with an answer."
	.string "\p{PLAYER}, now we'll\n"
	.string "show you!$"

MountMoon_Johto_MountMoonRivalTextWin:
	.string "<……> <……> <……>"
	.string "\pI thought I raised\n"
	.string "my POKéMON to be"
	.string "\pthe best they\n"
	.string "could be…"
	.string "\p…But it still \n"
	.string "wasn't enough…$"
