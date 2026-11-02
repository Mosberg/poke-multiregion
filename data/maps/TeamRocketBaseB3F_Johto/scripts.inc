TeamRocketBaseB3F_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TeamRocketBaseB3F_Johto_OnFrame
	.byte 0

TeamRocketBaseB3F_Johto_OnFrame:
	map_script_2 VAR_JOHTO_SCENE_TEAM_ROCKET_BASE_B3F, 0, TeamRocketBaseB3F_Johto_LanceGetPasswordScript_Entry
	.2byte 0

TeamRocketBaseB3F_Johto_LanceGetPasswordScript_Entry::
	lockall
	goto TeamRocketBaseB3F_Johto_LanceGetPasswordScript

TeamRocketBaseB3F_Johto_RocketBaseMurkrow_Entry::
	lockall
	goto TeamRocketBaseB3F_Johto_RocketBaseMurkrow

TeamRocketBaseB3F_Johto_TeamRocketBaseB3FRocketScript_Entry::
	lockall
	goto TeamRocketBaseB3F_Johto_TeamRocketBaseB3FRocketScript

TeamRocketBaseB3F_Johto_TeamRocketBaseB3FOathScript_Entry::
	lockall
	goto TeamRocketBaseB3F_Johto_TeamRocketBaseB3FOathScript

TeamRocketBaseB3F_Johto_RocketBaseBossLeft_Entry::
	lockall
	goto TeamRocketBaseB3F_Johto_RocketBaseBossLeft

TeamRocketBaseB3F_Johto_RocketBaseBossRight_Entry::
	lockall
	goto TeamRocketBaseB3F_Johto_RocketBaseBossRight

TeamRocketBaseB3F_Johto_RocketBaseRival_Entry::
	lockall
	goto TeamRocketBaseB3F_Johto_RocketBaseRival


TeamRocketBaseB3F_Johto_LanceGetPasswordScript:
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Left
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 5
	applymovement 3, Johto_Movement_Face_Right
	waitmovement 3
	delay 20
	applymovement 1, TeamRocketBaseB3F_Johto_RocketBaseLanceApproachesPlayerMovement
	waitmovement 1
	message TeamRocketBaseB3F_Johto_LanceGetPasswordText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement 1, TeamRocketBaseB3F_Johto_RocketBaseLanceLeavesMovement
	waitmovement 1
	removeobject 1
	setvar VAR_JOHTO_SCENE_TEAM_ROCKET_BASE_B3F, 1
	releaseall
	end

TeamRocketBaseB3F_Johto_RocketBaseRival:
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Left
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Emote_exclamation_mark
	waitmovement OBJ_EVENT_ID_PLAYER
	fadeoutbgm 4
	clearflag FLAG_JOHTO_RIVAL_TEAM_ROCKET_BASE
	addobject 9
	applymovement 9, TeamRocketBaseB3F_Johto_RocketBaseRivalEnterMovement
	waitmovement 9
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Left
	waitmovement OBJ_EVENT_ID_PLAYER
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
	message TeamRocketBaseB3F_Johto_RocketBaseRivalText
	waitmessage
	waitbuttonpress
	closemessage
	playse SE_M_TAIL_WHIP
	applymovement OBJ_EVENT_ID_PLAYER, TeamRocketBaseB3F_Johto_RocketBaseRivalShovesPlayerMovement
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 9, TeamRocketBaseB3F_Johto_RocketBaseRivalLeavesMovement
	waitmovement 9
	removeobject 9
	setvar VAR_JOHTO_SCENE_TEAM_ROCKET_BASE_B3F, 2
	fadedefaultbgm
	releaseall
	end

TeamRocketBaseB3F_Johto_TeamRocketBaseB3FRocketScript:
	faceplayer
	message TeamRocketBaseB3F_Johto_TeamRocketBaseB3FRocketText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

TeamRocketBaseB3F_Johto_RocketBaseBossLeft:
	applymovement OBJ_EVENT_ID_PLAYER, TeamRocketBaseB3F_Johto_RocketBasePlayerApproachesBossLeftMovement
	waitmovement OBJ_EVENT_ID_PLAYER
	goto TeamRocketBaseB3F_Johto_RocketBaseBoss

TeamRocketBaseB3F_Johto_RocketBaseBossRight:
	applymovement OBJ_EVENT_ID_PLAYER, TeamRocketBaseB3F_Johto_RocketBasePlayerApproachesBossRightMovement
	waitmovement OBJ_EVENT_ID_PLAYER

TeamRocketBaseB3F_Johto_RocketBaseBoss:
	delay 30
	applymovement 2, Johto_Movement_Emote_exclamation_mark
	waitmovement 2
	playbgm MUS_DUMMY, FALSE
	applymovement 2, Johto_Movement_Face_Down
	waitmovement 2
	message TeamRocketBaseB3F_Johto_ExecutiveM4BeforeText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement 2, TeamRocketBaseB3F_Johto_RocketBaseBossApproachesPlayerMovement
	waitmovement 2
	@ TODO unsupported: winlosstext ExecutiveM4BeatenText, 0
	goto Johto_EventScript_Unimplemented

TeamRocketBaseB3F_Johto_RocketBaseMurkrow:
	message TeamRocketBaseB3F_Johto_RocketBaseMurkrowText
	waitmessage
	waitbuttonpress
	closemessage
	setflag FLAG_JOHTO_LEARNED_HAIL_GIOVANNI
	releaseall
	end

TeamRocketBaseB3F_Johto_TeamRocketBaseB3FOathScript:
	goto Johto_Std_TeamRocketOathScript

TeamRocketBaseB3F_Johto_RocketBaseLanceApproachesPlayerMovement:
	walk_right
	step_end

TeamRocketBaseB3F_Johto_RocketBaseLanceLeavesMovement:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

TeamRocketBaseB3F_Johto_RocketBasePlayerApproachesBossLeftMovement:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	face_up
	step_end

TeamRocketBaseB3F_Johto_RocketBasePlayerApproachesBossRightMovement:
	walk_up
	walk_up
	walk_left
	walk_up
	walk_left
	walk_left
	face_up
	step_end

TeamRocketBaseB3F_Johto_RocketBaseBossApproachesPlayerMovement:
	walk_down
	step_end

TeamRocketBaseB3F_Johto_RocketBaseRivalEnterMovement:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

TeamRocketBaseB3F_Johto_RocketBaseRivalLeavesMovement:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

TeamRocketBaseB3F_Johto_RocketBaseRivalShovesPlayerMovement:
	lock_facing_direction
	walk_fast_right
	unlock_facing_direction
	step_end

TeamRocketBaseB3F_Johto_LanceGetPasswordText:
	.string "LANCE: It takes\n"
	.string "two passwords to"
	.string "\pget into the\n"
	.string "boss's quarters."
	.string "\pThose passwords\n"
	.string "are known only to\l"
	.string "a few ROCKETS."
	.string "\pThat ROCKET there\n"
	.string "very graciously\l"
	.string "told me so."
	.string "\p{PLAYER}, let's go\n"
	.string "get the passwords.$"

TeamRocketBaseB3F_Johto_TeamRocketBaseB3FRocketText:
	.string "Urrggh… The guy\n"
	.string "in the cape is\l"
	.string "incredibly tough…$"

TeamRocketBaseB3F_Johto_RocketBaseRivalText:
	.string "…"
	.string "\pDidn't I tell you\n"
	.string "that I was going"
	.string "\pto destroy TEAM\n"
	.string "ROCKET?"
	.string "\p…Tell me, who was\n"
	.string "the guy in the"
	.string "\pcape who used\n"
	.string "dragon POKéMON?"
	.string "\pMy POKéMON were no\n"
	.string "match at all."
	.string "\pI don't care that\n"
	.string "I lost. I can beat"
	.string "\phim by getting\n"
	.string "stronger POKéMON."
	.string "\pIt's what he said\n"
	.string "that bothers me…"
	.string "\pHe told me that\n"
	.string "I don't love and"
	.string "\ptrust my POKéMON\n"
	.string "enough."
	.string "\pI'm furious that I\n"
	.string "lost to a bleeding\l"
	.string "heart like him."
	.string "\p…Humph! I don't\n"
	.string "have the time for\l"
	.string "the likes of you!$"

TeamRocketBaseB3F_Johto_ExecutiveM4BeforeText:
	.string "What? Who are you?\n"
	.string "This is the office"
	.string "\pof our leader,\n"
	.string "GIOVANNI."
	.string "\pSince disbanding\n"
	.string "TEAM ROCKET three"
	.string "\pyears ago, he has\n"
	.string "been in training."
	.string "\pBut we're certain\n"
	.string "he will be back"
	.string "\psome day to assume\n"
	.string "command again."
	.string "\pThat's why we're\n"
	.string "standing guard."
	.string "\pI won't let any-\n"
	.string "one disturb this\l"
	.string "place!$"

TeamRocketBaseB3F_Johto_RocketBaseMurkrowText:
	.string "MURKROW: The\n"
	.string "password is…"
	.string "\pHAIL GIOVANNI.$"
