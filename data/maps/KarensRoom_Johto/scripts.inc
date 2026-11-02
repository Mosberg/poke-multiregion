KarensRoom_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KarensRoom_Johto_OnFrame
	.byte 0

KarensRoom_Johto_OnFrame:
	map_script_2 VAR_JOHTO_SCENE_KARENS_ROOM, 0, KarensRoom_Johto_KarensRoomDoorLocksBehindYouScript_Entry
	.2byte 0

KarensRoom_Johto_KarenScript_Battle_Entry::
	lockall
	goto KarensRoom_Johto_KarenScript_Battle

KarensRoom_Johto_KarensRoomDoorLocksBehindYouScript_Entry::
	lockall
	goto KarensRoom_Johto_KarensRoomDoorLocksBehindYouScript


KarensRoom_Johto_KarensRoomDoorLocksBehindYouScript:
	applymovement OBJ_EVENT_ID_PLAYER, KarensRoom_Johto_KarensRoom_EnterMovement
	waitmovement OBJ_EVENT_ID_PLAYER
	@ TODO unsupported: playsound SFX_STRENGTH
	goto Johto_EventScript_Unimplemented

KarensRoom_Johto_KarenScript_Battle:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_ELITE_4_KAREN, KarensRoom_Johto_KarenScript_AfterBattle
	message KarensRoom_Johto_KarenScript_KarenBeforeText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext KarenScript_KarenBeatenText, 0
	goto Johto_EventScript_Unimplemented

KarensRoom_Johto_KarenScript_AfterBattle:
	message KarensRoom_Johto_KarenScript_KarenDefeatText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

KarensRoom_Johto_KarensRoom_EnterMovement:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

KarensRoom_Johto_KarenScript_KarenBeforeText:
	.string "I am KAREN of the\n"
	.string "ELITE FOUR."
	.string "\pYou're {PLAYER}?\n"
	.string "How amusing."
	.string "\pI love dark-type\n"
	.string "POKéMON."
	.string "\pI find their wild,\n"
	.string "tough image to be"
	.string "\pso appealing. And\n"
	.string "they're so strong."
	.string "\pThink you can take\n"
	.string "them? Just try to\l"
	.string "entertain me."
	.string "\pLet's go.$"

KarensRoom_Johto_KarenScript_KarenDefeatText:
	.string "Strong POKéMON."
	.string "\pWeak POKéMON."
	.string "\pThat is only the\n"
	.string "selfish perception\l"
	.string "of people."
	.string "\pTruly skilled\n"
	.string "trainers should"
	.string "\ptry to win with\n"
	.string "their favorites."
	.string "\pI like your style.\n"
	.string "You understand\l"
	.string "what's important."
	.string "\pGo on--the CHAM-\n"
	.string "PION is waiting.$"
