Route39_Johto_MapScripts::
	.byte 0

Route39_Johto_Route39Miltank_Entry::
	lockall
	goto Route39_Johto_Route39Miltank

Route39_Johto_Route39FruitTree_Entry::
	lockall
	goto Route39_Johto_Route39FruitTree

Route39_Johto_TrainerPokefanfJaime_Entry::
	lockall
	goto Route39_Johto_TrainerPokefanfJaime

Route39_Johto_Route39TrainerTips_Entry::
	lockall
	goto Route39_Johto_Route39TrainerTips

Route39_Johto_MoomooFarmSign_Entry::
	lockall
	goto Route39_Johto_MoomooFarmSign

Route39_Johto_Route39Sign_Entry::
	lockall
	goto Route39_Johto_Route39Sign


Route39_Johto_Route39Miltank:
	message Route39_Johto_Route39MiltankText
	waitmessage
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	waitmoncry
	waitbuttonpress
	closemessage
	releaseall
	end

Route39_Johto_TrainerPokefanfJaime:
	faceplayer
	setvar VAR_0x8004, 4
	special JohtoCheckTime
	goto_if_eq VAR_RESULT, 0, Route39_Johto_TrainerPokefanfJaime_NotNight
	goto_if_set FLAG_JOHTO_BEAT_POKEFANF_JAIME, Route39_Johto_TrainerPokefanfJaime_Beaten
	message Route39_Johto_PokefanfJaimeSeenText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext PokefanfJaimeBeatenText, 0
	goto Johto_EventScript_Unimplemented

Route39_Johto_TrainerPokefanfJaime_Beaten:
	message Route39_Johto_PokefanfJaimeAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route39_Johto_TrainerPokefanfJaime_NotNight:
	message Route39_Johto_PokefanfJaimeHopeItGetsDarkText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route39_Johto_Route39Sign:
	message Route39_Johto_Route39SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route39_Johto_MoomooFarmSign:
	message Route39_Johto_MoomooFarmSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route39_Johto_Route39TrainerTips:
	message Route39_Johto_Route39TrainerTipsText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route39_Johto_Route39FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_39
	goto Johto_EventScript_Unimplemented

Route39_Johto_Route39MiltankText:
	.string "MILTANK: Mooo!$"

Route39_Johto_PokefanfJaimeHopeItGetsDarkText:
	.string "Ufufufu… I hope it\n"
	.string "gets dark soon.$"

Route39_Johto_PokefanfJaimeSeenText:
	.string "You came at just\n"
	.string "the right time."
	.string "\pLet's battle.$"

Route39_Johto_PokefanfJaimeAfterBattleText:
	.string "I met my MEOWTH at\n"
	.string "night, right here\l"
	.string "on ROUTE 39."
	.string "\pI'm not sure why,\n"
	.string "but it seems to"
	.string "\plike it when I\n"
	.string "train here."
	.string "\pIt seems to become\n"
	.string "friendlier by"
	.string "\ptraining here than\n"
	.string "anywhere else.$"

Route39_Johto_Route39SignText:
	.string "ROUTE 39"
	.string "\pOLIVINE CITY -\n"
	.string "ECRUTEAK CITY$"

Route39_Johto_MoomooFarmSignText:
	.string "MOOMOO FARM"
	.string "\pEnjoy Our Fresh\n"
	.string "and Tasty Milk$"

Route39_Johto_Route39TrainerTipsText:
	.string "TRAINER TIPS"
	.string "\pUse HEADBUTT on\n"
	.string "trees to shake\l"
	.string "POKéMON out."
	.string "\pDifferent kinds of\n"
	.string "POKéMON drop out\l"
	.string "of trees."
	.string "\pUse HEADBUTT on\n"
	.string "any tree you see!$"
