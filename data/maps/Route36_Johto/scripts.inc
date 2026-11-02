Route36_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route36_Johto_OnTransition
	.byte 0

Route36_Johto_OnTransition:
	call Route36_Johto_Route36ArthurCallback_Cb
	end

Route36_Johto_SudowoodoScript_Entry::
	lockall
	goto Route36_Johto_SudowoodoScript

Route36_Johto_Route36LassScript_Entry::
	lockall
	goto Route36_Johto_Route36LassScript

Route36_Johto_Route36RockSmashGuyScript_Entry::
	lockall
	goto Route36_Johto_Route36RockSmashGuyScript

Route36_Johto_Route36FruitTree_Entry::
	lockall
	goto Route36_Johto_Route36FruitTree

Route36_Johto_ArthurScript_Entry::
	lockall
	goto Route36_Johto_ArthurScript

Route36_Johto_Route36FloriaScript_Entry::
	lockall
	goto Route36_Johto_Route36FloriaScript

Route36_Johto_Route36TrainerTips2_Entry::
	lockall
	goto Route36_Johto_Route36TrainerTips2

Route36_Johto_RuinsOfAlphNorthSign_Entry::
	lockall
	goto Route36_Johto_RuinsOfAlphNorthSign

Route36_Johto_Route36Sign_Entry::
	lockall
	goto Route36_Johto_Route36Sign

Route36_Johto_Route36TrainerTips1_Entry::
	lockall
	goto Route36_Johto_Route36TrainerTips1

Route36_Johto_Route36SuicuneScript_Entry::
	lockall
	goto Route36_Johto_Route36SuicuneScript


Route36_Johto_Route36SuicuneScript:
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Emote_exclamation_mark
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 15
	@ TODO unsupported: playsound SFX_WARP_FROM
	goto Johto_EventScript_Unimplemented

Route36_Johto_SudowoodoScript:
	@ TODO unsupported: checkitem SQUIRTBOTTLE
	goto Johto_EventScript_Unimplemented

Route36_Johto_Route36FloriaScript:
	faceplayer
	goto_if_set FLAG_JOHTO_TALKED_TO_FLORIA_AT_FLOWER_SHOP, Route36_Johto_Route36FloriaScript_SecondTimeTalking
	setflag FLAG_JOHTO_MET_FLORIA
	message Route36_Johto_FloriaText1
	waitmessage
	waitbuttonpress
	closemessage
	clearflag FLAG_JOHTO_FLORIA_AT_FLOWER_SHOP
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_NORTH, Route36_Johto_Route36FloriaScript_Up
	applymovement 8, Route36_Johto_FloriaMovement1
	waitmovement 8
	removeobject 8
	releaseall
	end

Route36_Johto_Route36FloriaScript_Up:
	applymovement 8, Route36_Johto_FloriaMovement2
	waitmovement 8
	removeobject 8
	releaseall
	end

Route36_Johto_Route36FloriaScript_SecondTimeTalking:
	message Route36_Johto_FloriaText2
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route36_Johto_Route36RockSmashGuyScript:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_TM08_ROCK_SMASH, Route36_Johto_Route36RockSmashGuyScript_AlreadyGotRockSmash
	goto_if_set FLAG_JOHTO_FOUGHT_SUDOWOODO, Route36_Johto_Route36RockSmashGuyScript_ClearedSudowoodo
	message Route36_Johto_RockSmashGuyText1
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route36_Johto_Route36RockSmashGuyScript_ClearedSudowoodo:
	message Route36_Johto_RockSmashGuyText2
	waitmessage
	waitbuttonpress
	@ TODO unsupported: verbosegiveitem TM_ROCK_SMASH
	goto Johto_EventScript_Unimplemented

Route36_Johto_Route36RockSmashGuyScript_AlreadyGotRockSmash:
	message Route36_Johto_RockSmashGuyText3
	waitmessage
	waitbuttonpress

Route36_Johto_Route36RockSmashGuyScript_NoRoomForTM:
	closemessage
	releaseall
	end

Route36_Johto_Route36LassScript:
	faceplayer
	goto_if_set FLAG_JOHTO_FOUGHT_SUDOWOODO, Route36_Johto_Route36LassScript_ClearedSudowoodo
	message Route36_Johto_Route36LassText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route36_Johto_Route36LassScript_ClearedSudowoodo:
	message Route36_Johto_Route36LassText_ClearedSudowoodo
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route36_Johto_TrainerSchoolboyAlan1::
	trainerbattle_single TRAINER_JOHTO_SCHOOLBOY_ALAN1, Route36_Johto_SchoolboyAlan1SeenText, Route36_Johto_SchoolboyAlan1BeatenText
	setflag FLAG_JOHTO_BEAT_SCHOOLBOY_ALAN
	lock
	faceplayer
	goto Route36_Johto_TrainerSchoolboyAlan1_Script

Route36_Johto_TrainerSchoolboyAlan1_Script:
	@ TODO unsupported: loadvar VAR_CALLERID, PHONE_SCHOOLBOY_ALAN
	goto Johto_EventScript_Unimplemented

Route36_Johto_TrainerPsychicMark::
	trainerbattle_single TRAINER_JOHTO_PSYCHIC_T_MARK, Route36_Johto_PsychicMarkSeenText, Route36_Johto_PsychicMarkBeatenText
	setflag FLAG_JOHTO_BEAT_PSYCHIC_MARK
	lock
	faceplayer
	goto Route36_Johto_TrainerPsychicMark_Script

Route36_Johto_TrainerPsychicMark_Script:
	message Route36_Johto_PsychicMarkAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route36_Johto_ArthurScript:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_HARD_STONE_FROM_ARTHUR, Route36_Johto_ArthurScript_AlreadyGotStone
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

Route36_Johto_ArthurScript_AlreadyGotStone:
	message Route36_Johto_ArthurThursdayText
	waitmessage
	waitbuttonpress

Route36_Johto_ArthurScript_BagFull:
	closemessage
	releaseall
	end

Route36_Johto_Route36Sign:
	message Route36_Johto_Route36SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route36_Johto_RuinsOfAlphNorthSign:
	message Route36_Johto_RuinsOfAlphNorthSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route36_Johto_Route36TrainerTips1:
	message Route36_Johto_Route36TrainerTips1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route36_Johto_Route36TrainerTips2:
	message Route36_Johto_Route36TrainerTips2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route36_Johto_Route36FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_36
	goto Johto_EventScript_Unimplemented

Route36_Johto_Route36ArthurCallback_Cb:
	@ TODO unsupported: readvar VAR_WEEKDAY
	return

Route36_Johto_FloriaMovement1:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route36_Johto_FloriaMovement2:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route36_Johto_FloriaText1:
	.string "I'm the FLOWER\n"
	.string "SHOP's FLORIA!"
	.string "\pListen, listen!"
	.string "\pWhen I sprinkled\n"
	.string "water on that"
	.string "\pwiggly tree, it\n"
	.string "jumped right up!"
	.string "\pIt just has to be\n"
	.string "a POKéMON."
	.string "\pI bet it would be\n"
	.string "shocked out of its"
	.string "\pdisguise if you\n"
	.string "soaked it!"
	.string "\pI know! I'll tell\n"
	.string "my sis and borrow\l"
	.string "her water bottle!$"

Route36_Johto_FloriaText2:
	.string "When I told my sis\n"
	.string "about the jiggly"
	.string "\ptree, she said\n"
	.string "it's dangerous."
	.string "\pIf I beat WHITNEY,\n"
	.string "I wonder if she'll"
	.string "\plend me her water\n"
	.string "bottle…$"

Route36_Johto_RockSmashGuyText1:
	.string "Wa-hey!"
	.string "\pI was going to\n"
	.string "snap that tree"
	.string "\pwith my straight-\n"
	.string "arm punch."
	.string "\pBut I couldn't!\n"
	.string "I'm a failure!$"

Route36_Johto_RockSmashGuyText2:
	.string "Did you clear that\n"
	.string "wretched tree?"
	.string "\pI'm impressed!\n"
	.string "I want you to\l"
	.string "have this.$"

Route36_Johto_RockSmashGuyText3:
	.string "That happens to be\n"
	.string "ROCK SMASH."
	.string "\pYou can shatter\n"
	.string "rocks with just a"
	.string "\psingle well-aimed\n"
	.string "smack."
	.string "\pIf any rocks are\n"
	.string "in your way, just\l"
	.string "smash 'em up!$"

Route36_Johto_Route36LassText:
	.string "An odd tree is\n"
	.string "blocking the way\l"
	.string "to GOLDENROD CITY."
	.string "\pIt's preventing\n"
	.string "me from shopping."
	.string "\pSomething should\n"
	.string "be done about it.$"

Route36_Johto_Route36LassText_ClearedSudowoodo:
	.string "That odd tree dis-\n"
	.string "appeared without a\l"
	.string "trace."
	.string "\pOh! That tree was\n"
	.string "really a POKéMON?$"

Route36_Johto_PsychicMarkSeenText:
	.string "I'm going to read\n"
	.string "your thoughts!$"

Route36_Johto_PsychicMarkBeatenText:
	.string "I misread you!$"

Route36_Johto_PsychicMarkAfterBattleText:
	.string "I'd be strong if\n"
	.string "only I could tell"
	.string "\pwhat my opponent\n"
	.string "was thinking.$"

Route36_Johto_SchoolboyAlan1SeenText:
	.string "Thanks to my stud-\n"
	.string "ies, I'm ready for\l"
	.string "any POKéMON!$"

Route36_Johto_SchoolboyAlan1BeatenText:
	.string "Oops! Computation\n"
	.string "error?$"

Route36_Johto_ArthurThursdayText:
	.string "ARTHUR: I'm ARTHUR\n"
	.string "of Thursday. I'm"
	.string "\pthe second son out\n"
	.string "of seven children.$"

Route36_Johto_Route36SignText:
	.string "ROUTE 36$"

Route36_Johto_RuinsOfAlphNorthSignText:
	.string "RUINS OF ALPH\n"
	.string "NORTH ENTRANCE$"

Route36_Johto_Route36TrainerTips1Text:
	.string "TRAINER TIPS"
	.string "\pPOKéMON stats\n"
	.string "vary--even within\l"
	.string "the same species."
	.string "\pTheir stats may be\n"
	.string "similar at first."
	.string "\pHowever, differ-\n"
	.string "ences will become"
	.string "\ppronounced as the\n"
	.string "POKéMON grow.$"

Route36_Johto_Route36TrainerTips2Text:
	.string "TRAINER TIPS"
	.string "\pUse DIG to return\n"
	.string "to the entrance of\l"
	.string "any place."
	.string "\pIt is convenient\n"
	.string "for exploring"
	.string "\pcaves and other\n"
	.string "landmarks.$"
