Route43_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route43_Johto_OnTransition
	.byte 0

Route43_Johto_OnTransition:
	call Route43_Johto_Route43CheckIfRocketsScene_Cb
	end

Route43_Johto_Route43FruitTree_Entry::
	lockall
	goto Route43_Johto_Route43FruitTree

Route43_Johto_Route43Sign1_Entry::
	lockall
	goto Route43_Johto_Route43Sign1

Route43_Johto_Route43Sign2_Entry::
	lockall
	goto Route43_Johto_Route43Sign2

Route43_Johto_Route43TrainerTips_Entry::
	lockall
	goto Route43_Johto_Route43TrainerTips


Route43_Johto_TrainerCamperSpencer::
	trainerbattle_single TRAINER_JOHTO_CAMPER_SPENCER, Route43_Johto_CamperSpencerSeenText, Route43_Johto_CamperSpencerBeatenText
	setflag FLAG_JOHTO_BEAT_CAMPER_SPENCER
	lock
	faceplayer
	goto Route43_Johto_TrainerCamperSpencer_Script

Route43_Johto_TrainerCamperSpencer_Script:
	message Route43_Johto_CamperSpencerAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route43_Johto_TrainerPokemaniacBen::
	trainerbattle_single TRAINER_JOHTO_POKEMANIAC_BEN, Route43_Johto_PokemaniacBenSeenText, Route43_Johto_PokemaniacBenBeatenText
	setflag FLAG_JOHTO_BEAT_POKEMANIAC_BEN
	lock
	faceplayer
	goto Route43_Johto_TrainerPokemaniacBen_Script

Route43_Johto_TrainerPokemaniacBen_Script:
	message Route43_Johto_PokemaniacBenAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route43_Johto_TrainerPokemaniacBrent::
	trainerbattle_single TRAINER_JOHTO_POKEMANIAC_BRENT1, Route43_Johto_PokemaniacBrentSeenText, Route43_Johto_PokemaniacBrentBeatenText
	setflag FLAG_JOHTO_BEAT_POKEMANIAC_BRENT
	lock
	faceplayer
	goto Route43_Johto_TrainerPokemaniacBrent_Script

Route43_Johto_TrainerPokemaniacBrent_Script:
	@ TODO unsupported: loadvar VAR_CALLERID, PHONE_POKEMANIAC_BRENT
	goto Johto_EventScript_Unimplemented

Route43_Johto_TrainerPokemaniacRon::
	trainerbattle_single TRAINER_JOHTO_POKEMANIAC_RON, Route43_Johto_PokemaniacRonSeenText, Route43_Johto_PokemaniacRonBeatenText
	setflag FLAG_JOHTO_BEAT_POKEMANIAC_RON
	lock
	faceplayer
	goto Route43_Johto_TrainerPokemaniacRon_Script

Route43_Johto_TrainerPokemaniacRon_Script:
	message Route43_Johto_PokemaniacRonAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route43_Johto_TrainerFisherMarvin::
	trainerbattle_single TRAINER_JOHTO_FISHER_MARVIN, Route43_Johto_FisherMarvinSeenText, Route43_Johto_FisherMarvinBeatenText
	setflag FLAG_JOHTO_BEAT_FISHER_MARVIN
	lock
	faceplayer
	goto Route43_Johto_TrainerFisherMarvin_Script

Route43_Johto_TrainerFisherMarvin_Script:
	message Route43_Johto_FisherMarvinAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route43_Johto_TrainerPicnickerTiffany::
	trainerbattle_single TRAINER_JOHTO_PICNICKER_TIFFANY3, Route43_Johto_PicnickerTiffanySeenText, Route43_Johto_PicnickerTiffanyBeatenText
	setflag FLAG_JOHTO_BEAT_PICNICKER_TIFFANY
	lock
	faceplayer
	goto Route43_Johto_TrainerPicnickerTiffany_Script

Route43_Johto_TrainerPicnickerTiffany_Script:
	@ TODO unsupported: loadvar VAR_CALLERID, PHONE_PICNICKER_TIFFANY
	goto Johto_EventScript_Unimplemented

Route43_Johto_Route43Sign1:
	message Route43_Johto_Route43Sign1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route43_Johto_Route43Sign2:
	message Route43_Johto_Route43Sign2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route43_Johto_Route43TrainerTips:
	message Route43_Johto_Route43TrainerTipsText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route43_Johto_Route43FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_43
	goto Johto_EventScript_Unimplemented

Route43_Johto_Route43CheckIfRocketsScene_Cb:
	goto_if_set FLAG_JOHTO_CLEARED_ROCKET_HIDEOUT, Route43_Johto_Route43CheckIfRocketsScene_NoRockets_Cb
	setvar VAR_JOHTO_SCENE_ROUTE_43_GATE, 0
	return

Route43_Johto_Route43CheckIfRocketsScene_NoRockets_Cb:
	setvar VAR_JOHTO_SCENE_ROUTE_43_GATE, 1
	return

Route43_Johto_PokemaniacBenSeenText:
	.string "I love POKéMON!"
	.string "\pThat's why I\n"
	.string "started--and why"
	.string "\pI'll keep on col-\n"
	.string "lecting POKéMON!$"

Route43_Johto_PokemaniacBenBeatenText:
	.string "How could you do\n"
	.string "this to me?$"

Route43_Johto_PokemaniacBenAfterBattleText:
	.string "What else do I\n"
	.string "like besides\l"
	.string "POKéMON?"
	.string "\pMARY on the radio.\n"
	.string "I bet she's cute!$"

Route43_Johto_PokemaniacBrentSeenText:
	.string "Hey! Do you have\n"
	.string "any rare POKéMON?$"

Route43_Johto_PokemaniacBrentBeatenText:
	.string "Oh, my poor POKé-\n"
	.string "MON! Darlings!$"

Route43_Johto_PokemaniacRonSeenText:
	.string "Would you get\n"
	.string "this?"
	.string "\pSome SILVER guy\n"
	.string "made fun of my\l"
	.string "POKéMON!"
	.string "\pDarn it! My POKé-\n"
	.string "MON's great!$"

Route43_Johto_PokemaniacRonBeatenText:
	.string "My NIDOKING did\n"
	.string "pretty right on!$"

Route43_Johto_PokemaniacRonAfterBattleText:
	.string "It's okay for\n"
	.string "people to like"
	.string "\pdifferent types\n"
	.string "of POKéMON."
	.string "\pPOKéMON isn't just\n"
	.string "about having the\l"
	.string "most powerful one.$"

Route43_Johto_FisherMarvinSeenText:
	.string "I'm in a slump."
	.string "\pMaybe it's the\n"
	.string "gear I'm using."
	.string "\pLet's battle for a\n"
	.string "change of pace!$"

Route43_Johto_FisherMarvinBeatenText:
	.string "I lost, but I feel\n"
	.string "better anyway.$"

Route43_Johto_FisherMarvinAfterBattleText:
	.string "KURT's LURE BALL\n"
	.string "is the best for"
	.string "\pcatching hooked\n"
	.string "POKéMON."
	.string "\pIt's much more\n"
	.string "effective than a\l"
	.string "ULTRA BALL.$"

Route43_Johto_CamperSpencerSeenText:
	.string "I can do so much\n"
	.string "with my POKéMON--\l"
	.string "it's super-fun!$"

Route43_Johto_CamperSpencerBeatenText:
	.string "Losing isn't fun\n"
	.string "at all…$"

Route43_Johto_CamperSpencerAfterBattleText:
	.string "What is going on\n"
	.string "at LAKE OF RAGE?"
	.string "\pWe were planning\n"
	.string "to camp there.$"

Route43_Johto_PicnickerTiffanySeenText:
	.string "Are you going to\n"
	.string "LAKE OF RAGE too?"
	.string "\pLet's play for a \n"
	.string "little while!$"

Route43_Johto_PicnickerTiffanyBeatenText:
	.string "I played too much!$"

Route43_Johto_Route43Sign1Text:
	.string "ROUTE 43"
	.string "\pLAKE OF RAGE -\n"
	.string "MAHOGANY TOWN$"

Route43_Johto_Route43Sign2Text:
	.string "ROUTE 43"
	.string "\pLAKE OF RAGE -\n"
	.string "MAHOGANY TOWN$"

Route43_Johto_Route43TrainerTipsText:
	.string "TRAINER TIPS"
	.string "\pAll POKéMON have\n"
	.string "pros and cons"
	.string "\pdepending on their\n"
	.string "types."
	.string "\pIf their types\n"
	.string "differ, a higher-"
	.string "\plevel POKéMON may\n"
	.string "lose in battle."
	.string "\pLearn which types\n"
	.string "are strong and"
	.string "\pweak against your\n"
	.string "POKéMON's type.$"
