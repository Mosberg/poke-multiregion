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
