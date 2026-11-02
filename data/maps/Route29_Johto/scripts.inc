Route29_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route29_Johto_OnTransition
	.byte 0

Route29_Johto_OnTransition:
	call Route29_Johto_Route29TuscanyCallback_Sub
	end

Route29_Johto_CatchingTutorialDudeScript_Entry::
	lockall
	goto Route29_Johto_CatchingTutorialDudeScript

Route29_Johto_Route29YoungsterScript_Entry::
	lockall
	goto Route29_Johto_Route29YoungsterScript

Route29_Johto_Route29TeacherScript_Entry::
	lockall
	goto Route29_Johto_Route29TeacherScript

Route29_Johto_Route29FruitTree_Entry::
	lockall
	goto Route29_Johto_Route29FruitTree

Route29_Johto_Route29FisherScript_Entry::
	lockall
	goto Route29_Johto_Route29FisherScript

Route29_Johto_Route29CooltrainerMScript_Entry::
	lockall
	goto Route29_Johto_Route29CooltrainerMScript

Route29_Johto_TuscanyScript_Entry::
	lockall
	goto Route29_Johto_TuscanyScript

Route29_Johto_Route29Sign1_Entry::
	lockall
	goto Route29_Johto_Route29Sign1

Route29_Johto_Route29Sign2_Entry::
	lockall
	goto Route29_Johto_Route29Sign2

Route29_Johto_Route29Tutorial1_Entry::
	lockall
	goto Route29_Johto_Route29Tutorial1

Route29_Johto_Route29Tutorial2_Entry::
	lockall
	goto Route29_Johto_Route29Tutorial2


Route29_Johto_Route29Tutorial1:
	applymovement 1, Johto_Movement_Face_Up
	waitmovement 1
	applymovement 1, Johto_Movement_Emote_exclamation_mark
	waitmovement 1
	applymovement 1, Route29_Johto_DudeMovementData1a
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Left
	waitmovement OBJ_EVENT_ID_PLAYER
	setflag FLAG_JOHTO_DUDE_TALKED_TO_YOU
	message Route29_Johto_CatchingTutorialIntroText
	waitmessage
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, 0, Route29_Johto_Script_RefusedTutorial1
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route29_Johto_DudeMovementData1b
	applymovement 1, Route29_Johto_DudeMovementData1b
	waitmovement 1
	@ TODO unsupported: loadwildmon RATTATA, 5
	goto Johto_EventScript_Unimplemented

Route29_Johto_Route29Tutorial2:
	applymovement 1, Johto_Movement_Face_Up
	waitmovement 1
	applymovement 1, Johto_Movement_Emote_exclamation_mark
	waitmovement 1
	applymovement 1, Route29_Johto_DudeMovementData2a
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Left
	waitmovement OBJ_EVENT_ID_PLAYER
	setflag FLAG_JOHTO_DUDE_TALKED_TO_YOU
	message Route29_Johto_CatchingTutorialIntroText
	waitmessage
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, 0, Route29_Johto_Script_RefusedTutorial2
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route29_Johto_DudeMovementData2b
	applymovement 1, Route29_Johto_DudeMovementData2b
	waitmovement 1
	@ TODO unsupported: loadwildmon RATTATA, 5
	goto Johto_EventScript_Unimplemented

Route29_Johto_Script_RefusedTutorial1:
	message Route29_Johto_CatchingTutorialDeclinedText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement 1, Route29_Johto_DudeMovementData1b
	waitmovement 1
	setvar VAR_JOHTO_SCENE_ROUTE_29, 0
	releaseall
	end

Route29_Johto_Script_RefusedTutorial2:
	message Route29_Johto_CatchingTutorialDeclinedText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement 1, Route29_Johto_DudeMovementData2b
	waitmovement 1
	setvar VAR_JOHTO_SCENE_ROUTE_29, 0
	releaseall
	end

Route29_Johto_CatchingTutorialDudeScript:
	faceplayer
	@ TODO unsupported: readvar VAR_BOXSPACE
	goto Johto_EventScript_Unimplemented

Route29_Johto_Route29YoungsterScript:
	faceplayer
	message Route29_Johto_Route29YoungsterText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route29_Johto_Route29TeacherScript:
	faceplayer
	message Route29_Johto_Route29TeacherText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route29_Johto_Route29FisherScript:
	faceplayer
	message Route29_Johto_Route29FisherText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route29_Johto_Route29CooltrainerMScript:
	faceplayer
	setvar VAR_0x8004, 2
	special JohtoCheckTime
	@ TODO unsupported: iftrue .day_morn
	goto Johto_EventScript_Unimplemented

Route29_Johto_TuscanyScript:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_PINK_BOW_FROM_TUSCANY, Route29_Johto_TuscanyTuesdayScript
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

Route29_Johto_TuscanyTuesdayScript:
	message Route29_Johto_TuscanyTuesdayText
	waitmessage
	waitbuttonpress

Route29_Johto_TuscanyDoneScript:
	closemessage
	releaseall
	end

Route29_Johto_Route29Sign1:
	message Route29_Johto_Route29Sign1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route29_Johto_Route29Sign2:
	message Route29_Johto_Route29Sign2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route29_Johto_Route29FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_29
	goto Johto_EventScript_Unimplemented

Route29_Johto_Route29TuscanyCallback_Sub:
	goto_if_set FLAG_JOHTO_ENGINE_ZEPHYRBADGE, Route29_Johto_Route29TuscanyCallback_DoesTuscanyAppear_Sub

Route29_Johto_Route29TuscanyCallback_TuscanyDisappears_Sub:
	removeobject 7
	return

Route29_Johto_Route29TuscanyCallback_DoesTuscanyAppear_Sub:
	@ TODO unsupported: readvar VAR_WEEKDAY
	return

Route29_Johto_DudeMovementData1a:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

Route29_Johto_DudeMovementData2a:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

Route29_Johto_DudeMovementData1b:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route29_Johto_DudeMovementData2b:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

Route29_Johto_CatchingTutorialIntroText:
	.string "I've seen you a\n"
	.string "couple times. How"
	.string "\pmany POKéMON have\n"
	.string "you caught?"
	.string "\pWould you like me\n"
	.string "to show you how to\l"
	.string "catch POKéMON?$"

Route29_Johto_CatchingTutorialDeclinedText:
	.string "Oh. Fine, then."
	.string "\pAnyway, if you\n"
	.string "want to catch"
	.string "\pPOKéMON, you have\n"
	.string "to walk a lot.$"

Route29_Johto_Route29YoungsterText:
	.string "Yo. How are your\n"
	.string "POKéMON?"
	.string "\pIf they're weak\n"
	.string "and not ready for"
	.string "\pbattle, keep out\n"
	.string "of the grass.$"

Route29_Johto_Route29TeacherText:
	.string "See those ledges?\n"
	.string "It's scary to jump\l"
	.string "off them."
	.string "\pBut you can go to\n"
	.string "NEW BARK without"
	.string "\pwalking through\n"
	.string "the grass.$"

Route29_Johto_Route29FisherText:
	.string "I wanted to take a\n"
	.string "break, so I saved"
	.string "\pto record my\n"
	.string "progress.$"

Route29_Johto_TuscanyTuesdayText:
	.string "TUSCANY: Have you\n"
	.string "met MONICA, my\l"
	.string "older sister?"
	.string "\pOr my younger\n"
	.string "brother, WESLEY?"
	.string "\pI am the second of\n"
	.string "seven children.$"

Route29_Johto_Route29Sign1Text:
	.string "ROUTE 29"
	.string "\pCHERRYGROVE CITY -\n"
	.string "NEW BARK TOWN$"

Route29_Johto_Route29Sign2Text:
	.string "ROUTE 29"
	.string "\pCHERRYGROVE CITY -\n"
	.string "NEW BARK TOWN$"
