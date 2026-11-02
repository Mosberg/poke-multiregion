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
	@ TODO unsupported: trainer BIRD_KEEPER, TOBY, EVENT_BEAT_BIRD_KEEPER_TOBY, BirdKeeperTobySeenText, BirdKeeperTobyBeatenText, 0, .Script
	goto Johto_EventScript_Unimplemented

Route38_Johto_TrainerSailorHarry::
	@ TODO unsupported: trainer SAILOR, HARRY, EVENT_BEAT_SAILOR_HARRY, SailorHarrySeenText, SailorHarryBeatenText, 0, .Script
	goto Johto_EventScript_Unimplemented

Route38_Johto_TrainerLassDana1::
	@ TODO unsupported: trainer LASS, DANA1, EVENT_BEAT_LASS_DANA, LassDana1SeenText, LassDana1BeatenText, 0, .Script
	goto Johto_EventScript_Unimplemented

Route38_Johto_TrainerSchoolboyChad1::
	@ TODO unsupported: trainer SCHOOLBOY, CHAD1, EVENT_BEAT_SCHOOLBOY_CHAD, SchoolboyChad1SeenText, SchoolboyChad1BeatenText, 0, .Script
	goto Johto_EventScript_Unimplemented

Route38_Johto_TrainerBeautyValerie::
	@ TODO unsupported: trainer BEAUTY, VALERIE, EVENT_BEAT_BEAUTY_VALERIE, BeautyValerieSeenText, BeautyValerieBeatenText, 0, .Script
	goto Johto_EventScript_Unimplemented

Route38_Johto_TrainerBeautyOlivia::
	@ TODO unsupported: trainer BEAUTY, OLIVIA, EVENT_BEAT_BEAUTY_OLIVIA, BeautyOliviaSeenText, BeautyOliviaBeatenText, 0, .Script
	goto Johto_EventScript_Unimplemented

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

Route38_Johto_SailorHarrySeenText:
	.string "I've been over-\n"
	.string "seas, so I know"
	.string "\pabout all sorts of\n"
	.string "POKéMON!$"

Route38_Johto_SailorHarryBeatenText:
	.string "Your skill is\n"
	.string "world class!$"

Route38_Johto_BeautyOliviaSeenText:
	.string "Don't you think my\n"
	.string "POKéMON and I are\l"
	.string "beautiful?$"

Route38_Johto_BeautyOliviaBeatenText:
	.string "We drink MOOMOO\n"
	.string "MILK every day.$"

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
