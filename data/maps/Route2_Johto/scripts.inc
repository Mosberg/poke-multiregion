Route2_Johto_MapScripts::
	.byte 0

Route2_Johto_Route2FruitTree_Entry::
	lockall
	goto Route2_Johto_Route2FruitTree

Route2_Johto_Route2Sign_Entry::
	lockall
	goto Route2_Johto_Route2Sign

Route2_Johto_Route2DiglettsCaveSign_Entry::
	lockall
	goto Route2_Johto_Route2DiglettsCaveSign


Route2_Johto_TrainerBugCatcherRob::
	trainerbattle_single TRAINER_JOHTO_BUG_CATCHER_ROB, Route2_Johto_BugCatcherRobSeenText, Route2_Johto_BugCatcherRobBeatenText
	setflag FLAG_JOHTO_BEAT_BUG_CATCHER_ROB
	lock
	faceplayer
	goto Route2_Johto_TrainerBugCatcherRob_Script

Route2_Johto_TrainerBugCatcherRob_Script:
	message Route2_Johto_BugCatcherRobAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route2_Johto_TrainerBugCatcherEd::
	trainerbattle_single TRAINER_JOHTO_BUG_CATCHER_ED, Route2_Johto_BugCatcherEdSeenText, Route2_Johto_BugCatcherEdBeatenText
	setflag FLAG_JOHTO_BEAT_BUG_CATCHER_ED
	lock
	faceplayer
	goto Route2_Johto_TrainerBugCatcherEd_Script

Route2_Johto_TrainerBugCatcherEd_Script:
	message Route2_Johto_BugCatcherEdAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route2_Johto_TrainerBugCatcherDoug::
	trainerbattle_single TRAINER_JOHTO_BUG_CATCHER_DOUG, Route2_Johto_BugCatcherDougSeenText, Route2_Johto_BugCatcherDougBeatenText
	setflag FLAG_JOHTO_BEAT_BUG_CATCHER_DOUG
	lock
	faceplayer
	goto Route2_Johto_TrainerBugCatcherDoug_Script

Route2_Johto_TrainerBugCatcherDoug_Script:
	message Route2_Johto_BugCatcherDougAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route2_Johto_Route2Sign:
	message Route2_Johto_Route2SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route2_Johto_Route2DiglettsCaveSign:
	message Route2_Johto_Route2DiglettsCaveSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route2_Johto_Route2FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_2
	goto Johto_EventScript_Unimplemented

Route2_Johto_BugCatcherRobSeenText:
	.string "My bug POKéMON are\n"
	.string "tough. Prepare to\l"
	.string "lose!$"

Route2_Johto_BugCatcherRobBeatenText:
	.string "I was whipped…$"

Route2_Johto_BugCatcherRobAfterBattleText:
	.string "I'm going to look\n"
	.string "for stronger bug\l"
	.string "POKéMON.$"

Route2_Johto_BugCatcherEdSeenText:
	.string "If you walk in\n"
	.string "tall grass wearing"
	.string "\pshorts, do you get\n"
	.string "nicks and cuts?$"

Route2_Johto_BugCatcherEdBeatenText:
	.string "Ouch, ouch, ouch!$"

Route2_Johto_BugCatcherEdAfterBattleText:
	.string "They'll really\n"
	.string "sting when you\l"
	.string "take a bath.$"

Route2_Johto_BugCatcherDougSeenText:
	.string "Why don't girls\n"
	.string "like bug POKéMON?$"

Route2_Johto_BugCatcherDougBeatenText:
	.string "No good!$"

Route2_Johto_BugCatcherDougAfterBattleText:
	.string "Bug POKéMON squish\n"
	.string "like plush toys"
	.string "\pwhen you squeeze\n"
	.string "their bellies."
	.string "\pI love how they\n"
	.string "feel!$"

Route2_Johto_Route2SignText:
	.string "ROUTE 2"
	.string "\pVIRIDIAN CITY -\n"
	.string "PEWTER CITY$"

Route2_Johto_Route2DiglettsCaveSignText:
	.string "DIGLETT'S CAVE$"
