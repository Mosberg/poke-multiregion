Route37_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route37_Johto_OnTransition
	.byte 0

Route37_Johto_OnTransition:
	call Route37_Johto_Route37SunnyCallback_Cb
	end

Route37_Johto_Route37FruitTree1_Entry::
	lockall
	goto Route37_Johto_Route37FruitTree1

Route37_Johto_SunnyScript_Entry::
	lockall
	goto Route37_Johto_SunnyScript

Route37_Johto_Route37FruitTree2_Entry::
	lockall
	goto Route37_Johto_Route37FruitTree2

Route37_Johto_Route37FruitTree3_Entry::
	lockall
	goto Route37_Johto_Route37FruitTree3

Route37_Johto_Route37Sign_Entry::
	lockall
	goto Route37_Johto_Route37Sign


Route37_Johto_TrainerTwinsAnnandanne1::
	trainerbattle_single TRAINER_JOHTO_TWINS_ANNANDANNE1, Route37_Johto_TwinsAnnandanne1SeenText, Route37_Johto_TwinsAnnandanne1BeatenText
	setflag FLAG_JOHTO_BEAT_TWINS_ANN_AND_ANNE
	lock
	faceplayer
	goto Route37_Johto_TrainerTwinsAnnandanne1_Script

Route37_Johto_TrainerTwinsAnnandanne1_Script:
	message Route37_Johto_TwinsAnnandanne1AfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route37_Johto_TrainerTwinsAnnandanne2::
	trainerbattle_single TRAINER_JOHTO_TWINS_ANNANDANNE2, Route37_Johto_TwinsAnnandanne2SeenText, Route37_Johto_TwinsAnnandanne2BeatenText
	setflag FLAG_JOHTO_BEAT_TWINS_ANN_AND_ANNE
	lock
	faceplayer
	goto Route37_Johto_TrainerTwinsAnnandanne2_Script

Route37_Johto_TrainerTwinsAnnandanne2_Script:
	message Route37_Johto_TwinsAnnandanne2AfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route37_Johto_TrainerPsychicGreg::
	trainerbattle_single TRAINER_JOHTO_PSYCHIC_T_GREG, Route37_Johto_PsychicGregSeenText, Route37_Johto_PsychicGregBeatenText
	setflag FLAG_JOHTO_BEAT_PSYCHIC_GREG
	lock
	faceplayer
	goto Route37_Johto_TrainerPsychicGreg_Script

Route37_Johto_TrainerPsychicGreg_Script:
	message Route37_Johto_PsychicGregAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route37_Johto_SunnyScript:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_MAGNET_FROM_SUNNY, Route37_Johto_SunnySundayScript
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

Route37_Johto_SunnySundayScript:
	message Route37_Johto_SunnySundayText
	waitmessage
	waitbuttonpress

Route37_Johto_SunnyDoneScript:
	closemessage
	releaseall
	end

Route37_Johto_Route37Sign:
	message Route37_Johto_Route37SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route37_Johto_Route37FruitTree1:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_37_1
	goto Johto_EventScript_Unimplemented

Route37_Johto_Route37FruitTree2:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_37_2
	goto Johto_EventScript_Unimplemented

Route37_Johto_Route37FruitTree3:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_37_3
	goto Johto_EventScript_Unimplemented

Route37_Johto_Route37SunnyCallback_Cb:
	@ TODO unsupported: readvar VAR_WEEKDAY
	return

Route37_Johto_TwinsAnnandanne1SeenText:
	.string "ANN: ANNE and I\n"
	.string "are in this to-\l"
	.string "gether!$"

Route37_Johto_TwinsAnnandanne1BeatenText:
	.string "ANN & ANNE: Nnn… A\n"
	.string "little too strong.$"

Route37_Johto_TwinsAnnandanne1AfterBattleText:
	.string "ANN: I can tell\n"
	.string "what my sister and"
	.string "\pmy POKéMON are\n"
	.string "thinking.$"

Route37_Johto_TwinsAnnandanne2SeenText:
	.string "ANNE: ANN and I\n"
	.string "are in this to-\l"
	.string "gether!$"

Route37_Johto_TwinsAnnandanne2BeatenText:
	.string "ANN & ANNE: Nnn… A\n"
	.string "little too strong.$"

Route37_Johto_TwinsAnnandanne2AfterBattleText:
	.string "ANNE: We share the\n"
	.string "same feelings as\l"
	.string "our POKéMON.$"

Route37_Johto_PsychicGregSeenText:
	.string "POKéMON can't do a\n"
	.string "thing if they are\l"
	.string "asleep."
	.string "\pI'll show you how\n"
	.string "scary that is!$"

Route37_Johto_PsychicGregBeatenText:
	.string "I lost. That's\n"
	.string "pretty sad…$"

Route37_Johto_PsychicGregAfterBattleText:
	.string "Putting POKéMON to\n"
	.string "sleep or paralyz-\l"
	.string "ing them are good\l"
	.string "battle techniques.$"

Route37_Johto_SunnySundayText:
	.string "SUNNY: My sisters\n"
	.string "and brothers are\l"
	.string "MONICA, TUSCANY,\l"
	.string "WESLEY, ARTHUR,\l"
	.string "FRIEDA and SANTOS."
	.string "\pThey're all older\n"
	.string "than me!$"

Route37_Johto_Route37SignText:
	.string "ROUTE 37$"
