DragonsDenB1F_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DragonsDenB1F_Johto_OnTransition
	.byte 0

DragonsDenB1F_Johto_OnTransition:
	call DragonsDenB1F_Johto_DragonsDenB1FCheckRivalCallback_Sub
	end

DragonsDenB1F_Johto_DragonsDenB1FDragonFangScript_Entry::
	lockall
	goto DragonsDenB1F_Johto_DragonsDenB1FDragonFangScript

DragonsDenB1F_Johto_DragonsDenB1FRivalScript_Entry::
	lockall
	goto DragonsDenB1F_Johto_DragonsDenB1FRivalScript

DragonsDenB1F_Johto_DragonShrineSignpost_Entry::
	lockall
	goto DragonsDenB1F_Johto_DragonShrineSignpost

DragonsDenB1F_Johto_DragonsDenB1F_ClairScene_Entry::
	lockall
	goto DragonsDenB1F_Johto_DragonsDenB1F_ClairScene


DragonsDenB1F_Johto_DragonsDenB1F_ClairScene:
	clearflag FLAG_JOHTO_DRAGONS_DEN_CLAIR
	addobject 2
	message DragonsDenB1F_Johto_ClairText_Wait
	waitmessage
	delay 30
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Emote_exclamation_mark
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Left
	waitmovement OBJ_EVENT_ID_PLAYER
	playbgm MUS_DUMMY, FALSE
	applymovement 2, DragonsDenB1F_Johto_MovementDragonsDen_ClairWalksToYou
	waitmovement 2
	message DragonsDenB1F_Johto_ClairText_GiveDragonbreathDragonDen
	waitmessage
	waitbuttonpress
	@ TODO unsupported: giveitem TM_DRAGONBREATH
	goto Johto_EventScript_Unimplemented

DragonsDenB1F_Johto_DragonsDenB1FDragonFangScript:
	additem ITEM_DRAGON_FANG
	goto_if_eq VAR_RESULT, 0, DragonsDenB1F_Johto_DragonsDenB1FDragonFangScript_BagFull
	removeobject 1
	bufferitemname STR_VAR_1, ITEM_DRAGON_FANG
	message DragonsDenB1F_Johto_Text_FoundDragonFang
	waitmessage
	playse SE_PIN
	waitse
	@ TODO unsupported: itemnotify 
	goto Johto_EventScript_Unimplemented

DragonsDenB1F_Johto_DragonsDenB1FDragonFangScript_BagFull:
	bufferitemname STR_VAR_1, ITEM_DRAGON_FANG
	message DragonsDenB1F_Johto_Text_FoundDragonFang
	waitmessage
	waitbuttonpress
	message DragonsDenB1F_Johto_Text_NoRoomForDragonFang
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

DragonsDenB1F_Johto_DragonsDenB1FRivalScript:
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
	faceplayer
	goto_if_set FLAG_TEMP_11, DragonsDenB1F_Johto_DragonsDenB1FRivalScript_RivalTalkAgain
	message DragonsDenB1F_Johto_RivalText_Training1
	waitmessage
	waitbuttonpress
	closemessage
	setflag FLAG_TEMP_11
	fadedefaultbgm
	releaseall
	end

DragonsDenB1F_Johto_DragonsDenB1FRivalScript_RivalTalkAgain:
	message DragonsDenB1F_Johto_RivalText_Training2
	waitmessage
	waitbuttonpress
	closemessage
	fadedefaultbgm
	releaseall
	end

DragonsDenB1F_Johto_DragonShrineSignpost:
	message DragonsDenB1F_Johto_DragonShrineSignpostText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

DragonsDenB1F_Johto_DragonsDenB1FCheckRivalCallback_Sub:
	goto_if_set FLAG_JOHTO_BEAT_RIVAL_IN_MT_MOON, DragonsDenB1F_Johto_DragonsDenB1FCheckRivalCallback_CheckDay_Sub
	removeobject 3
	return

DragonsDenB1F_Johto_DragonsDenB1FCheckRivalCallback_CheckDay_Sub:
	@ TODO unsupported: readvar VAR_WEEKDAY
	return

DragonsDenB1F_Johto_MovementDragonsDen_ClairWalksToYou:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

DragonsDenB1F_Johto_ClairText_Wait:
	.string "Wait!$"

DragonsDenB1F_Johto_ClairText_GiveDragonbreathDragonDen:
	.string "CLAIR: I'm sorry\n"
	.string "about this."
	.string "\pHere, take this as\n"
	.string "my apology.$"

DragonsDenB1F_Johto_DragonShrineSignpostText:
	.string "DRAGON SHRINE"
	.string "\pA shrine honoring\n"
	.string "the dragon POKéMON"
	.string "\psaid to have lived\n"
	.string "in DRAGON'S DEN.$"

DragonsDenB1F_Johto_RivalText_Training1:
	.string "…\n"
	.string "What? {PLAYER}?"
	.string "\p…No, I won't\n"
	.string "battle you now…"
	.string "\pMy POKéMON aren't\n"
	.string "ready to beat you."
	.string "\pI can't push them\n"
	.string "too hard now."
	.string "\pI have to be dis-\n"
	.string "ciplined to become"
	.string "\pthe greatest POKé-\n"
	.string "MON trainer…$"

DragonsDenB1F_Johto_RivalText_Training2:
	.string "…"
	.string "\pWhew…"
	.string "\pLearn to stay out\n"
	.string "of my way…$"

DragonsDenB1F_Johto_Text_FoundDragonFang:
	.string "{PLAYER} found\n"
	.string "{STR_VAR_1}!$"

DragonsDenB1F_Johto_Text_NoRoomForDragonFang:
	.string "But {PLAYER} can't\n"
	.string "carry any more\l"
	.string "items.$"
