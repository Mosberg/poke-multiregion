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


Route35_Johto_TrainerBirdKeeperBryan::
	trainerbattle_single TRAINER_JOHTO_BIRD_KEEPER_BRYAN, Route35_Johto_BirdKeeperBryanSeenText, Route35_Johto_BirdKeeperBryanBeatenText
	setflag FLAG_JOHTO_BEAT_BIRD_KEEPER_BRYAN
	lock
	faceplayer
	goto Route35_Johto_TrainerBirdKeeperBryan_Script

Route35_Johto_TrainerBirdKeeperBryan_Script:
	message Route35_Johto_BirdKeeperBryanAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35_Johto_TrainerJugglerIrwin::
	trainerbattle_single TRAINER_JOHTO_JUGGLER_IRWIN1, Route35_Johto_JugglerIrwin1SeenText, Route35_Johto_JugglerIrwin1BeatenText
	setflag FLAG_JOHTO_BEAT_JUGGLER_IRWIN
	lock
	faceplayer
	goto Route35_Johto_TrainerJugglerIrwin_Script

Route35_Johto_TrainerJugglerIrwin_Script:
	@ TODO unsupported: checkcellnum PHONE_JUGGLER_IRWIN
	goto Johto_EventScript_Unimplemented

Route35_Johto_TrainerCamperIvan::
	trainerbattle_single TRAINER_JOHTO_CAMPER_IVAN, Route35_Johto_CamperIvanSeenText, Route35_Johto_CamperIvanBeatenText
	setflag FLAG_JOHTO_BEAT_CAMPER_IVAN
	lock
	faceplayer
	goto Route35_Johto_TrainerCamperIvan_Script

Route35_Johto_TrainerCamperIvan_Script:
	message Route35_Johto_CamperIvanAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35_Johto_TrainerCamperElliot::
	trainerbattle_single TRAINER_JOHTO_CAMPER_ELLIOT, Route35_Johto_CamperElliotSeenText, Route35_Johto_CamperElliotBeatenText
	setflag FLAG_JOHTO_BEAT_CAMPER_ELLIOT
	lock
	faceplayer
	goto Route35_Johto_TrainerCamperElliot_Script

Route35_Johto_TrainerCamperElliot_Script:
	message Route35_Johto_CamperElliotAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35_Johto_TrainerPicnickerBrooke::
	trainerbattle_single TRAINER_JOHTO_PICNICKER_BROOKE, Route35_Johto_PicnickerBrookeSeenText, Route35_Johto_PicnickerBrookeBeatenText
	setflag FLAG_JOHTO_BEAT_PICNICKER_BROOKE
	lock
	faceplayer
	goto Route35_Johto_TrainerPicnickerBrooke_Script

Route35_Johto_TrainerPicnickerBrooke_Script:
	message Route35_Johto_PicnickerBrookeAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35_Johto_TrainerPicnickerKim::
	trainerbattle_single TRAINER_JOHTO_PICNICKER_KIM, Route35_Johto_PicnickerKimSeenText, Route35_Johto_PicnickerKimBeatenText
	setflag FLAG_JOHTO_BEAT_PICNICKER_KIM
	lock
	faceplayer
	goto Route35_Johto_TrainerPicnickerKim_Script

Route35_Johto_TrainerPicnickerKim_Script:
	message Route35_Johto_PicnickerKimAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35_Johto_TrainerBugCatcherArnie::
	trainerbattle_single TRAINER_JOHTO_BUG_CATCHER_ARNIE1, Route35_Johto_BugCatcherArnieSeenText, Route35_Johto_BugCatcherArnieBeatenText
	setflag FLAG_JOHTO_BEAT_BUG_CATCHER_ARNIE
	lock
	faceplayer
	goto Route35_Johto_TrainerBugCatcherArnie_Script

Route35_Johto_TrainerBugCatcherArnie_Script:
	goto_if_set FLAG_JOHTO_ENGINE_ARNIE_READY_FOR_REMATCH, Route35_Johto_TrainerBugCatcherArnie_WantsBattle
	goto_if_set FLAG_JOHTO_ENGINE_YANMA_SWARM, Route35_Johto_TrainerBugCatcherArnie_YanmaSwarming
	@ TODO unsupported: checkcellnum PHONE_BUG_CATCHER_ARNIE
	goto Johto_EventScript_Unimplemented

Route35_Johto_TrainerBugCatcherArnie_WantsBattle:
	call Route35_Johto_Route35RematchM_Sub
	@ TODO unsupported: readmem wArnieFightCount
	goto Johto_EventScript_Unimplemented

Route35_Johto_TrainerBugCatcherArnie_YanmaSwarming:
	message Route35_Johto_BugCatcherArnieYanmaText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35_Johto_TrainerFirebreatherWalt::
	trainerbattle_single TRAINER_JOHTO_FIREBREATHER_WALT, Route35_Johto_FirebreatherWaltSeenText, Route35_Johto_FirebreatherWaltBeatenText
	setflag FLAG_JOHTO_BEAT_FIREBREATHER_WALT
	lock
	faceplayer
	goto Route35_Johto_TrainerFirebreatherWalt_Script

Route35_Johto_TrainerFirebreatherWalt_Script:
	message Route35_Johto_FirebreatherWaltAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

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
	trainerbattle_no_intro TRAINER_JOHTO_OFFICER_DIRK, Route35_Johto_OfficerDirkBeatenText
	setflag FLAG_JOHTO_BEAT_OFFICER_DIRK
	closemessage
	releaseall
	end

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
	goto_if_set FLAG_JOHTO_FRUITTREE_ROUTE_35, Johto_Std_FruitTreeEmpty
	giveitem ITEM_LEPPA_BERRY
	setflag FLAG_JOHTO_FRUITTREE_ROUTE_35
	releaseall
	end

Route35_Johto_Route35RematchM_Sub:
	goto Johto_Std_RematchMScript_Sub

Route35_Johto_CamperIvanSeenText:
	.string "I've been getting\n"
	.string "POKéMON data off"
	.string "\pmy radio. I think\n"
	.string "I'm good.$"

Route35_Johto_CamperIvanBeatenText:
	.string "I give!$"

Route35_Johto_CamperIvanAfterBattleText:
	.string "Music on the radio\n"
	.string "changes the moods\l"
	.string "of wild POKéMON.$"

Route35_Johto_CamperElliotSeenText:
	.string "I'm gonna show my\n"
	.string "girlfriend I'm hot\l"
	.string "stuff!$"

Route35_Johto_CamperElliotBeatenText:
	.string "I wish you would\n"
	.string "have lost for me…$"

Route35_Johto_CamperElliotAfterBattleText:
	.string "I was humiliated\n"
	.string "in front of my\l"
	.string "girlfriend…$"

Route35_Johto_PicnickerBrookeSeenText:
	.string "My boyfriend's\n"
	.string "weak, so I can't\l"
	.string "rely on him.$"

Route35_Johto_PicnickerBrookeBeatenText:
	.string "Oh, my! You're so\n"
	.string "strong!$"

Route35_Johto_PicnickerBrookeAfterBattleText:
	.string "I can count on my\n"
	.string "POKéMON more than\l"
	.string "my boyfriend.$"

Route35_Johto_PicnickerKimSeenText:
	.string "Are you going to\n"
	.string "the GYM? Me too!$"

Route35_Johto_PicnickerKimBeatenText:
	.string "Oh. I couldn't\n"
	.string "win…$"

Route35_Johto_PicnickerKimAfterBattleText:
	.string "The GYM BADGES are\n"
	.string "pretty. I collect\l"
	.string "them.$"

Route35_Johto_BirdKeeperBryanSeenText:
	.string "What kinds of\n"
	.string "BALLS do you use?$"

Route35_Johto_BirdKeeperBryanBeatenText:
	.string "Yikes! Not fast\n"
	.string "enough!$"

Route35_Johto_BirdKeeperBryanAfterBattleText:
	.string "Some POKéMON flee\n"
	.string "right away."
	.string "\pTry catching them\n"
	.string "with KURT's FAST\l"
	.string "BALL."
	.string "\pWhenever I find a\n"
	.string "WHT APRICORN, I\l"
	.string "take it to KURT."
	.string "\pHe turns it into a\n"
	.string "custom BALL.$"

Route35_Johto_JugglerIrwin1SeenText:
	.string "Behold my graceful\n"
	.string "BALL dexterity!$"

Route35_Johto_JugglerIrwin1BeatenText:
	.string "Whew! That was a\n"
	.string "jolt!$"

Route35_Johto_BugCatcherArnieSeenText:
	.string "I'll go anywhere\n"
	.string "if bug POKéMON\l"
	.string "appear there.$"

Route35_Johto_BugCatcherArnieBeatenText:
	.string "Huh? I shouldn't\n"
	.string "have lost that…$"

Route35_Johto_BugCatcherArnieYanmaText:
	.string "Wow… Look at all\n"
	.string "those YANMA!"
	.string "\pI'm so blown away,\n"
	.string "I can't move.$"

Route35_Johto_FirebreatherWaltSeenText:
	.string "I'm practicing my\n"
	.string "fire breathing.$"

Route35_Johto_FirebreatherWaltBeatenText:
	.string "Ow! I scorched the\n"
	.string "tip of my nose!$"

Route35_Johto_FirebreatherWaltAfterBattleText:
	.string "The POKéMON March\n"
	.string "on the radio lures\l"
	.string "wild POKéMON.$"

Route35_Johto_OfficerDirkSeenText:
	.string "Danger lurks in\n"
	.string "the night!$"

Route35_Johto_OfficerDirkBeatenText:
	.string "Whoops!$"

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
