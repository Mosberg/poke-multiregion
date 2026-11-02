VictoryRoad_Johto_MapScripts::
	.byte 0

VictoryRoad_Johto_VictoryRoadRivalLeft_Entry::
	lockall
	goto VictoryRoad_Johto_VictoryRoadRivalLeft

VictoryRoad_Johto_VictoryRoadRivalRight_Entry::
	lockall
	goto VictoryRoad_Johto_VictoryRoadRivalRight


VictoryRoad_Johto_VictoryRoadRivalLeft:
	setobjectxyperm 1, 18, 11
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Down
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Emote_exclamation_mark
	waitmovement OBJ_EVENT_ID_PLAYER
	fadeoutbgm 4
	delay 15
	clearflag FLAG_JOHTO_RIVAL_VICTORY_ROAD
	addobject 1
	applymovement 1, VictoryRoad_Johto_VictoryRoadRivalBattleApproachMovement1
	waitmovement 1
	call VictoryRoad_Johto_VictoryRoadRivalNext_Sub
	applymovement 1, VictoryRoad_Johto_VictoryRoadRivalBattleExitMovement1
	waitmovement 1
	removeobject 1
	setvar VAR_JOHTO_SCENE_VICTORY_ROAD, 1
	fadedefaultbgm
	releaseall
	end

VictoryRoad_Johto_VictoryRoadRivalRight:
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Down
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Emote_exclamation_mark
	waitmovement OBJ_EVENT_ID_PLAYER
	fadeoutbgm 4
	delay 15
	clearflag FLAG_JOHTO_RIVAL_VICTORY_ROAD
	addobject 1
	applymovement 1, VictoryRoad_Johto_VictoryRoadRivalBattleApproachMovement2
	waitmovement 1
	call VictoryRoad_Johto_VictoryRoadRivalNext_Sub
	applymovement 1, VictoryRoad_Johto_VictoryRoadRivalBattleExitMovement2
	waitmovement 1
	removeobject 1
	setvar VAR_JOHTO_SCENE_VICTORY_ROAD, 1
	fadedefaultbgm
	releaseall
	end

VictoryRoad_Johto_VictoryRoadRivalNext_Sub:
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Down
	waitmovement OBJ_EVENT_ID_PLAYER
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
	message VictoryRoad_Johto_VictoryRoadRivalBeforeText
	waitmessage
	waitbuttonpress
	closemessage
	setflag FLAG_JOHTO_RIVAL_VICTORY_ROAD
	goto_if_set FLAG_JOHTO_GOT_TOTODILE_FROM_ELM, VictoryRoad_Johto_VictoryRoadRivalNext_GotTotodile_Sub
	goto_if_set FLAG_JOHTO_GOT_CHIKORITA_FROM_ELM, VictoryRoad_Johto_VictoryRoadRivalNext_GotChikorita_Sub
	@ TODO unsupported: winlosstext VictoryRoadRivalDefeatText, VictoryRoadRivalVictoryText
	return

VictoryRoad_Johto_VictoryRoadRivalNext_GotTotodile_Sub:
	@ TODO unsupported: winlosstext VictoryRoadRivalDefeatText, VictoryRoadRivalVictoryText
	return

VictoryRoad_Johto_VictoryRoadRivalNext_GotChikorita_Sub:
	@ TODO unsupported: winlosstext VictoryRoadRivalDefeatText, VictoryRoadRivalVictoryText
	return

VictoryRoad_Johto_VictoryRoadRivalBattleApproachMovement1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

VictoryRoad_Johto_VictoryRoadRivalBattleApproachMovement2:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

VictoryRoad_Johto_VictoryRoadRivalBattleExitMovement1:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

VictoryRoad_Johto_VictoryRoadRivalBattleExitMovement2:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

VictoryRoad_Johto_VictoryRoadRivalBeforeText:
	.string "Hold it."
	.string "\p…Are you going to\n"
	.string "take the POKéMON\l"
	.string "LEAGUE challenge?"
	.string "\p…Don't make me\n"
	.string "laugh."
	.string "\pYou're so much\n"
	.string "weaker than I am."
	.string "\pI'm not like I was\n"
	.string "before."
	.string "\pI now have the\n"
	.string "best and strongest"
	.string "\pPOKéMON with me.\n"
	.string "I'm invincible!"
	.string "\p{PLAYER}!\n"
	.string "I challenge you!$"
