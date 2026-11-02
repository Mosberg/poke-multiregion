Route38_Johto_MapScripts::
	.byte 0

Route38_Johto_Route38FruitTree_Entry::
	lockall
	goto Route38_Johto_Route38FruitTree

Route38_Johto_Route38Sign_Entry::
	lockall
	goto Route38_Johto_Route38Sign

Route38_Johto_Route38TrainerTips_Entry::
	lockall
	goto Route38_Johto_Route38TrainerTips


Route38_Johto_TrainerBirdKeeperToby::
	trainerbattle_single TRAINER_JOHTO_BIRD_KEEPER_TOBY, Route38_Johto_BirdKeeperTobySeenText, Route38_Johto_BirdKeeperTobyBeatenText
	setflag FLAG_JOHTO_BEAT_BIRD_KEEPER_TOBY
	lock
	faceplayer
	goto Route38_Johto_TrainerBirdKeeperToby_Script

Route38_Johto_TrainerBirdKeeperToby_Script:
	message Route38_Johto_BirdKeeperTobyAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route38_Johto_TrainerSailorHarry::
	trainerbattle_single TRAINER_JOHTO_SAILOR_HARRY, Route38_Johto_SailorHarrySeenText, Route38_Johto_SailorHarryBeatenText
	setflag FLAG_JOHTO_BEAT_SAILOR_HARRY
	lock
	faceplayer
	goto Route38_Johto_TrainerSailorHarry_Script

Route38_Johto_TrainerSailorHarry_Script:
	message Route38_Johto_SailorHarryAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route38_Johto_TrainerLassDana1::
	trainerbattle_single TRAINER_JOHTO_LASS_DANA1, Route38_Johto_LassDana1SeenText, Route38_Johto_LassDana1BeatenText
	setflag FLAG_JOHTO_BEAT_LASS_DANA
	lock
	faceplayer
	goto Route38_Johto_TrainerLassDana1_Script

Route38_Johto_TrainerLassDana1_Script:
	@ TODO unsupported: loadvar VAR_CALLERID, PHONE_LASS_DANA
	goto Johto_EventScript_Unimplemented

Route38_Johto_TrainerSchoolboyChad1::
	trainerbattle_single TRAINER_JOHTO_SCHOOLBOY_CHAD1, Route38_Johto_SchoolboyChad1SeenText, Route38_Johto_SchoolboyChad1BeatenText
	setflag FLAG_JOHTO_BEAT_SCHOOLBOY_CHAD
	lock
	faceplayer
	goto Route38_Johto_TrainerSchoolboyChad1_Script

Route38_Johto_TrainerSchoolboyChad1_Script:
	@ TODO unsupported: loadvar VAR_CALLERID, PHONE_SCHOOLBOY_CHAD
	goto Johto_EventScript_Unimplemented

Route38_Johto_TrainerBeautyValerie::
	trainerbattle_single TRAINER_JOHTO_BEAUTY_VALERIE, Route38_Johto_BeautyValerieSeenText, Route38_Johto_BeautyValerieBeatenText
	setflag FLAG_JOHTO_BEAT_BEAUTY_VALERIE
	lock
	faceplayer
	goto Route38_Johto_TrainerBeautyValerie_Script

Route38_Johto_TrainerBeautyValerie_Script:
	message Route38_Johto_BeautyValerieAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route38_Johto_TrainerBeautyOlivia::
	trainerbattle_single TRAINER_JOHTO_BEAUTY_OLIVIA, Route38_Johto_BeautyOliviaSeenText, Route38_Johto_BeautyOliviaBeatenText
	setflag FLAG_JOHTO_BEAT_BEAUTY_OLIVIA
	lock
	faceplayer
	goto Route38_Johto_TrainerBeautyOlivia_Script

Route38_Johto_TrainerBeautyOlivia_Script:
	message Route38_Johto_BeautyOliviaAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route38_Johto_Route38Sign:
	message Route38_Johto_Route38SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route38_Johto_Route38TrainerTips:
	message Route38_Johto_Route38TrainerTipsText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route38_Johto_Route38FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_38
	goto Johto_EventScript_Unimplemented

Route38_Johto_BirdKeeperTobySeenText:
	.string "Fly high into the\n"
	.string "sky, my beloved\l"
	.string "bird POKéMON!$"

Route38_Johto_BirdKeeperTobyBeatenText:
	.string "I feel like just\n"
	.string "flying away now.$"

Route38_Johto_BirdKeeperTobyAfterBattleText:
	.string "I plan to train in\n"
	.string "CIANWOOD CITY to"
	.string "\pteach my POKéMON\n"
	.string "how to FLY.$"

Route38_Johto_SchoolboyChad1SeenText:
	.string "Let me try some-\n"
	.string "thing I learned\l"
	.string "today.$"

Route38_Johto_SchoolboyChad1BeatenText:
	.string "I didn't study\n"
	.string "enough, I guess.$"

Route38_Johto_LassDana1SeenText:
	.string "You seem to be\n"
	.string "good at POKéMON."
	.string "\pIf you are, how\n"
	.string "about giving me\l"
	.string "some advice?$"

Route38_Johto_LassDana1BeatenText:
	.string "I see. So you can\n"
	.string "battle that way.$"

Route38_Johto_BeautyValerieSeenText:
	.string "Hi! Aren't you a\n"
	.string "cute trainer!"
	.string "\pMay I see your\n"
	.string "POKéMON?$"

Route38_Johto_BeautyValerieBeatenText:
	.string "I'm glad I got to\n"
	.string "see your POKéMON!$"

Route38_Johto_BeautyValerieAfterBattleText:
	.string "When I see POKé-\n"
	.string "MON, it seems to\l"
	.string "soothe my nerves.$"

Route38_Johto_SailorHarrySeenText:
	.string "I've been over-\n"
	.string "seas, so I know"
	.string "\pabout all sorts of\n"
	.string "POKéMON!$"

Route38_Johto_SailorHarryBeatenText:
	.string "Your skill is\n"
	.string "world class!$"

Route38_Johto_SailorHarryAfterBattleText:
	.string "All kinds of peo-\n"
	.string "ple around the"
	.string "\pworld live happily\n"
	.string "with POKéMON.$"

Route38_Johto_BeautyOliviaSeenText:
	.string "Don't you think my\n"
	.string "POKéMON and I are\l"
	.string "beautiful?$"

Route38_Johto_BeautyOliviaBeatenText:
	.string "We drink MOOMOO\n"
	.string "MILK every day.$"

Route38_Johto_BeautyOliviaAfterBattleText:
	.string "MOOMOO MILK is\n"
	.string "good for beauty"
	.string "\pand health, but\n"
	.string "inconveniently,"
	.string "\pthey only sell a\n"
	.string "bottle at a time.$"

Route38_Johto_Route38SignText:
	.string "ROUTE 38"
	.string "\pOLIVINE CITY -\n"
	.string "ECRUTEAK CITY$"

Route38_Johto_Route38TrainerTipsText:
	.string "TRAINER TIPS"
	.string "\pIf a POKéMON is\n"
	.string "trying to evolve,\l"
	.string "you can stop it."
	.string "\pPress the B But-\n"
	.string "ton during evolu-\l"
	.string "tion."
	.string "\pThat startles the\n"
	.string "POKéMON and stops\l"
	.string "its evolution.$"
