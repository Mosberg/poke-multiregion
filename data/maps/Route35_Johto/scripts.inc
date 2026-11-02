Route35_Johto_MapScripts::
	.byte 0

Route35_Johto_TrainerOfficerDirk_Entry::
	lockall
	goto Route35_Johto_TrainerOfficerDirk

Route35_Johto_Route35FruitTree_Entry::
	lockall
	goto Route35_Johto_Route35FruitTree

Route35_Johto_Route35Sign_Entry::
	lockall
	goto Route35_Johto_Route35Sign


Route35_Johto_TrainerOfficerDirk:
	faceplayer
	setvar VAR_0x8004, 4
	special JohtoCheckTime
	goto_if_eq VAR_RESULT, 0, Route35_Johto_TrainerOfficerDirk_NotNight
	goto_if_set FLAG_JOHTO_BEAT_OFFICER_DIRK, Route35_Johto_TrainerOfficerDirk_AfterBattle
	playbgm MUS_DUMMY, FALSE
	message Route35_Johto_OfficerDirkSeenText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext OfficerDirkBeatenText, 0
	goto Johto_EventScript_Unimplemented

Route35_Johto_TrainerOfficerDirk_AfterBattle:
	message Route35_Johto_OfficerDirkAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35_Johto_TrainerOfficerDirk_NotNight:
	message Route35_Johto_OfficerDirkPrettyToughText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35_Johto_Route35Sign:
	message Route35_Johto_Route35SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35_Johto_Route35FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_35
	goto Johto_EventScript_Unimplemented

Route35_Johto_OfficerDirkSeenText:
	.string "Danger lurks in\n"
	.string "the night!$"

Route35_Johto_OfficerDirkAfterBattleText:
	.string "You know, night-\n"
	.string "time is fun in its\l"
	.string "own ways."
	.string "\pBut don't overdo\n"
	.string "it, OK?$"

Route35_Johto_OfficerDirkPrettyToughText:
	.string "Your POKéMON look\n"
	.string "pretty tough."
	.string "\pYou could go any-\n"
	.string "where safely.$"

Route35_Johto_Route35SignText:
	.string "ROUTE 35$"
