CherrygroveCity_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CherrygroveCity_Johto_OnTransition
	.byte 0

CherrygroveCity_Johto_OnTransition:
	call CherrygroveCity_Johto_CherrygroveCityFlypointCallback_Cb
	end

CherrygroveCity_Johto_CherrygroveCityGuideGent_Entry::
	lockall
	goto CherrygroveCity_Johto_CherrygroveCityGuideGent

CherrygroveCity_Johto_CherrygroveTeacherScript_Entry::
	lockall
	goto CherrygroveCity_Johto_CherrygroveTeacherScript

CherrygroveCity_Johto_CherrygroveYoungsterScript_Entry::
	lockall
	goto CherrygroveCity_Johto_CherrygroveYoungsterScript

CherrygroveCity_Johto_MysticWaterGuy_Entry::
	lockall
	goto CherrygroveCity_Johto_MysticWaterGuy

CherrygroveCity_Johto_CherrygroveCitySign_Entry::
	lockall
	goto CherrygroveCity_Johto_CherrygroveCitySign

CherrygroveCity_Johto_GuideGentsHouseSign_Entry::
	lockall
	goto CherrygroveCity_Johto_GuideGentsHouseSign

CherrygroveCity_Johto_CherrygroveCityMartSign_Entry::
	lockall
	goto CherrygroveCity_Johto_CherrygroveCityMartSign

CherrygroveCity_Johto_CherrygroveCityPokecenterSign_Entry::
	lockall
	goto CherrygroveCity_Johto_CherrygroveCityPokecenterSign

CherrygroveCity_Johto_CherrygroveRivalSceneNorth_Entry::
	lockall
	goto CherrygroveCity_Johto_CherrygroveRivalSceneNorth

CherrygroveCity_Johto_CherrygroveRivalSceneSouth_Entry::
	lockall
	goto CherrygroveCity_Johto_CherrygroveRivalSceneSouth


CherrygroveCity_Johto_CherrygroveCityGuideGent:
	faceplayer
	message CherrygroveCity_Johto_GuideGentIntroText
	waitmessage
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, 0, CherrygroveCity_Johto_CherrygroveCityGuideGent_No
	goto CherrygroveCity_Johto_CherrygroveCityGuideGent_Yes

CherrygroveCity_Johto_CherrygroveCityGuideGent_Yes:
	message CherrygroveCity_Johto_GuideGentTourText1
	waitmessage
	waitbuttonpress
	closemessage
	playbgm MUS_DUMMY, FALSE
	applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Johto_GuideGentMovement1
	applymovement 1, CherrygroveCity_Johto_GuideGentMovement1
	waitmovement 1
	message CherrygroveCity_Johto_GuideGentPokecenterText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Johto_GuideGentMovement2
	applymovement 1, CherrygroveCity_Johto_GuideGentMovement2
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Up
	waitmovement OBJ_EVENT_ID_PLAYER
	message CherrygroveCity_Johto_GuideGentMartText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Johto_GuideGentMovement3
	applymovement 1, CherrygroveCity_Johto_GuideGentMovement3
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Up
	waitmovement OBJ_EVENT_ID_PLAYER
	message CherrygroveCity_Johto_GuideGentRoute30Text
	waitmessage
	waitbuttonpress
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Johto_GuideGentMovement4
	applymovement 1, CherrygroveCity_Johto_GuideGentMovement4
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Left
	waitmovement OBJ_EVENT_ID_PLAYER
	message CherrygroveCity_Johto_GuideGentSeaText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Johto_GuideGentMovement5
	applymovement 1, CherrygroveCity_Johto_GuideGentMovement5
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Up
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 60
	applymovement 1, Johto_Movement_Face_Left
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Right
	waitmovement OBJ_EVENT_ID_PLAYER
	message CherrygroveCity_Johto_GuideGentGiftText
	waitmessage
	waitbuttonpress
	@ TODO unsupported: getstring STRING_BUFFER_4, .mapcardname
	goto Johto_EventScript_Unimplemented

CherrygroveCity_Johto_CherrygroveCityGuideGent_No:
	message CherrygroveCity_Johto_GuideGentNoText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CherrygroveCity_Johto_CherrygroveRivalSceneSouth:
	setobjectxyperm 2, 39, 7

CherrygroveCity_Johto_CherrygroveRivalSceneNorth:
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Right
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Emote_exclamation_mark
	waitmovement OBJ_EVENT_ID_PLAYER
	fadeoutbgm 4
	delay 15
	clearflag FLAG_JOHTO_RIVAL_CHERRYGROVE_CITY
	addobject 2
	applymovement 2, CherrygroveCity_Johto_CherrygroveCity_RivalWalksToYou
	waitmovement 2
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Right
	waitmovement OBJ_EVENT_ID_PLAYER
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
	message CherrygroveCity_Johto_CherrygroveRivalText_Seen
	waitmessage
	waitbuttonpress
	closemessage
	goto_if_set FLAG_JOHTO_GOT_TOTODILE_FROM_ELM, CherrygroveCity_Johto_CherrygroveRivalSceneNorth_Totodile
	goto_if_set FLAG_JOHTO_GOT_CHIKORITA_FROM_ELM, CherrygroveCity_Johto_CherrygroveRivalSceneNorth_Chikorita
	@ TODO unsupported: setlasttalked CHERRYGROVECITY_RIVAL
	goto Johto_EventScript_Unimplemented

CherrygroveCity_Johto_CherrygroveRivalSceneNorth_Totodile:
	@ TODO unsupported: setlasttalked CHERRYGROVECITY_RIVAL
	goto Johto_EventScript_Unimplemented

CherrygroveCity_Johto_CherrygroveRivalSceneNorth_Chikorita:
	@ TODO unsupported: setlasttalked CHERRYGROVECITY_RIVAL
	goto Johto_EventScript_Unimplemented

CherrygroveCity_Johto_CherrygroveTeacherScript:
	faceplayer
	goto_if_set FLAG_JOHTO_ENGINE_MAP_CARD, CherrygroveCity_Johto_CherrygroveTeacherScript_HaveMapCard
	message CherrygroveCity_Johto_CherrygroveTeacherText_NoMapCard
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CherrygroveCity_Johto_CherrygroveTeacherScript_HaveMapCard:
	message CherrygroveCity_Johto_CherrygroveTeacherText_HaveMapCard
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CherrygroveCity_Johto_CherrygroveYoungsterScript:
	faceplayer
	goto_if_set FLAG_JOHTO_ENGINE_POKEDEX, CherrygroveCity_Johto_CherrygroveYoungsterScript_HavePokedex
	message CherrygroveCity_Johto_CherrygroveYoungsterText_NoPokedex
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CherrygroveCity_Johto_CherrygroveYoungsterScript_HavePokedex:
	message CherrygroveCity_Johto_CherrygroveYoungsterText_HavePokedex
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CherrygroveCity_Johto_MysticWaterGuy:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_MYSTIC_WATER_IN_CHERRYGROVE, CherrygroveCity_Johto_MysticWaterGuy_After
	message CherrygroveCity_Johto_MysticWaterGuyTextBefore
	waitmessage
	waitbuttonpress
	giveitem ITEM_MYSTIC_WATER
	goto_if_eq VAR_RESULT, 0, CherrygroveCity_Johto_MysticWaterGuy_Exit
	setflag FLAG_JOHTO_GOT_MYSTIC_WATER_IN_CHERRYGROVE

CherrygroveCity_Johto_MysticWaterGuy_After:
	message CherrygroveCity_Johto_MysticWaterGuyTextAfter
	waitmessage
	waitbuttonpress

CherrygroveCity_Johto_MysticWaterGuy_Exit:
	closemessage
	releaseall
	end

CherrygroveCity_Johto_CherrygroveCitySign:
	message CherrygroveCity_Johto_CherrygroveCitySignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CherrygroveCity_Johto_GuideGentsHouseSign:
	message CherrygroveCity_Johto_GuideGentsHouseSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CherrygroveCity_Johto_CherrygroveCityPokecenterSign:
	goto Johto_Std_PokecenterSignScript

CherrygroveCity_Johto_CherrygroveCityMartSign:
	goto Johto_Std_MartSignScript

CherrygroveCity_Johto_CherrygroveCityFlypointCallback_Cb:
	setflag FLAG_JOHTO_ENGINE_FLYPOINT_CHERRYGROVE
	return

CherrygroveCity_Johto_GuideGentMovement1:
	walk_left
	walk_left
	walk_up
	walk_left
	face_up
	step_end

CherrygroveCity_Johto_GuideGentMovement2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

CherrygroveCity_Johto_GuideGentMovement3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

CherrygroveCity_Johto_GuideGentMovement4:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	face_left
	step_end

CherrygroveCity_Johto_GuideGentMovement5:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

CherrygroveCity_Johto_CherrygroveCity_RivalWalksToYou:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

CherrygroveCity_Johto_GuideGentIntroText:
	.string "You're a rookie\n"
	.string "trainer, aren't\l"
	.string "you? I can tell!"
	.string "\pThat's OK! Every-\n"
	.string "one is a rookie\l"
	.string "at some point!"
	.string "\pIf you'd like, I\n"
	.string "can teach you a\l"
	.string "few things.$"

CherrygroveCity_Johto_GuideGentTourText1:
	.string "OK, then!\n"
	.string "Follow me!$"

CherrygroveCity_Johto_GuideGentPokecenterText:
	.string "This is a POKéMON\n"
	.string "CENTER. They heal"
	.string "\pyour POKéMON in no\n"
	.string "time at all."
	.string "\pYou'll be relying\n"
	.string "on them a lot, so"
	.string "\pyou better learn\n"
	.string "about them.$"

CherrygroveCity_Johto_GuideGentMartText:
	.string "This is a POKéMON\n"
	.string "MART."
	.string "\pThey sell BALLS\n"
	.string "for catching wild"
	.string "\pPOKéMON and other\n"
	.string "useful items.$"

CherrygroveCity_Johto_GuideGentRoute30Text:
	.string "ROUTE 30 is out\n"
	.string "this way."
	.string "\pTrainers will be\n"
	.string "battling their"
	.string "\pprized POKéMON\n"
	.string "there.$"

CherrygroveCity_Johto_GuideGentSeaText:
	.string "This is the sea,\n"
	.string "as you can see."
	.string "\pSome POKéMON are\n"
	.string "found only in\l"
	.string "water.$"

CherrygroveCity_Johto_GuideGentGiftText:
	.string "Here…"
	.string "\pIt's my house!\n"
	.string "Thanks for your\l"
	.string "company."
	.string "\pLet me give you a\n"
	.string "small gift.$"

CherrygroveCity_Johto_GuideGentNoText:
	.string "Oh… It's something\n"
	.string "I enjoy doing…"
	.string "\pFine. Come see me\n"
	.string "when you like.$"

CherrygroveCity_Johto_CherrygroveRivalText_Seen:
	.string "<……> <……> <……>"
	.string "\pYou got a POKéMON\n"
	.string "at the LAB."
	.string "\pWhat a waste.\n"
	.string "A wimp like you."
	.string "\p<……> <……> <……>"
	.string "\pDon't you get what\n"
	.string "I'm saying?"
	.string "\pWell, I too, have\n"
	.string "a good POKéMON."
	.string "\pI'll show you\n"
	.string "what I mean!$"

CherrygroveCity_Johto_RivalCherrygroveWinText:
	.string "Humph. Are you\n"
	.string "happy you won?$"

CherrygroveCity_Johto_CherrygroveTeacherText_NoMapCard:
	.string "Did you talk to\n"
	.string "the old man by the\l"
	.string "POKéMON CENTER?"
	.string "\pHe'll put a MAP of\n"
	.string "JOHTO on your\l"
	.string "POKéGEAR.$"

CherrygroveCity_Johto_CherrygroveTeacherText_HaveMapCard:
	.string "When you're with\n"
	.string "POKéMON, going\l"
	.string "anywhere is fun.$"

CherrygroveCity_Johto_CherrygroveYoungsterText_NoPokedex:
	.string "MR.POKéMON's house\n"
	.string "is still farther\l"
	.string "up ahead.$"

CherrygroveCity_Johto_CherrygroveYoungsterText_HavePokedex:
	.string "I battled the\n"
	.string "trainers on the\l"
	.string "road."
	.string "\pMy POKéMON lost.\n"
	.string "They're a mess! I"
	.string "\pmust take them to\n"
	.string "a POKéMON CENTER.$"

CherrygroveCity_Johto_MysticWaterGuyTextBefore:
	.string "A POKéMON I caught\n"
	.string "had an item."
	.string "\pI think it's\n"
	.string "MYSTIC WATER."
	.string "\pI don't need it,\n"
	.string "so do you want it?$"

CherrygroveCity_Johto_MysticWaterGuyTextAfter:
	.string "Back to fishing\n"
	.string "for me, then.$"

CherrygroveCity_Johto_CherrygroveCitySignText:
	.string "CHERRYGROVE CITY"
	.string "\pThe City of Cute,\n"
	.string "Fragrant Flowers$"

CherrygroveCity_Johto_GuideGentsHouseSignText:
	.string "GUIDE GENT'S HOUSE$"
