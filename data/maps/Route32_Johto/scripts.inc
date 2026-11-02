Route32_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route32_Johto_OnTransition
	.byte 0

Route32_Johto_OnTransition:
	call Route32_Johto_Route32FriedaCallback_Sub
	end

Route32_Johto_Route32CooltrainerMScript_Entry::
	lockall
	goto Route32_Johto_Route32CooltrainerMScript

Route32_Johto_SlowpokeTailSalesmanScript_Entry::
	lockall
	goto Route32_Johto_SlowpokeTailSalesmanScript

Route32_Johto_Route32RoarTMGuyScript_Entry::
	lockall
	goto Route32_Johto_Route32RoarTMGuyScript

Route32_Johto_FriedaScript_Entry::
	lockall
	goto Route32_Johto_FriedaScript

Route32_Johto_Route32Sign_Entry::
	lockall
	goto Route32_Johto_Route32Sign

Route32_Johto_Route32RuinsSign_Entry::
	lockall
	goto Route32_Johto_Route32RuinsSign

Route32_Johto_Route32UnionCaveSign_Entry::
	lockall
	goto Route32_Johto_Route32UnionCaveSign

Route32_Johto_Route32PokecenterSign_Entry::
	lockall
	goto Route32_Johto_Route32PokecenterSign

Route32_Johto_Route32CooltrainerMStopsYouScene_Entry::
	lockall
	goto Route32_Johto_Route32CooltrainerMStopsYouScene

Route32_Johto_Route32WannaBuyASlowpokeTailScript_Entry::
	lockall
	goto Route32_Johto_Route32WannaBuyASlowpokeTailScript


Route32_Johto_Route32CooltrainerMScript:
	faceplayer

Route32_Johto_Route32CooltrainerMContinueScene:
	goto_if_set FLAG_JOHTO_GOT_MIRACLE_SEED_IN_ROUTE_32, Route32_Johto_Route32CooltrainerMContinueScene_GotMiracleSeed
	goto_if_unset FLAG_JOHTO_ENGINE_ZEPHYRBADGE, Route32_Johto_Route32CooltrainerMContinueScene_DontHaveZephyrBadge
	goto_if_set FLAG_JOHTO_GOT_TOGEPI_EGG_FROM_ELMS_AIDE, Route32_Johto_Route32CooltrainerMContinueScene_GiveMiracleSeed
	message Route32_Johto_Route32CooltrainerMText_AideIsWaiting
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route32_Johto_Route32CooltrainerMContinueScene_GiveMiracleSeed:
	message Route32_Johto_Route32CooltrainerMText_HaveThisSeed
	waitmessage
	waitbuttonpress
	giveitem ITEM_MIRACLE_SEED
	goto_if_eq VAR_RESULT, 0, Route32_Johto_Route32CooltrainerMContinueScene_BagFull
	setflag FLAG_JOHTO_GOT_MIRACLE_SEED_IN_ROUTE_32
	goto Route32_Johto_Route32CooltrainerMContinueScene_GotMiracleSeed

Route32_Johto_Route32CooltrainerMContinueScene_DontHaveZephyrBadge:
	message Route32_Johto_Route32CooltrainerMText_VioletGym
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route32_Johto_Route32CooltrainerMContinueScene_GotMiracleSeed:
	message Route32_Johto_Route32CooltrainerMText_ExperiencesShouldBeUseful
	waitmessage
	waitbuttonpress

Route32_Johto_Route32CooltrainerMContinueScene_BagFull:
	closemessage
	releaseall
	end

Route32_Johto_Route32CooltrainerMStopsYouScene:
	applymovement 8, Johto_Movement_Face_Left
	waitmovement 8
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Right
	waitmovement OBJ_EVENT_ID_PLAYER
	message Route32_Johto_Route32CooltrainerMText_WhatsTheHurry
	waitmessage
	waitbuttonpress
	closemessage
	applymovement 8, Route32_Johto_Movement_Route32CooltrainerMPushesYouBackToViolet
	applymovement OBJ_EVENT_ID_PLAYER, Route32_Johto_Movement_Route32CooltrainerMPushesYouBackToViolet
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Down
	waitmovement OBJ_EVENT_ID_PLAYER
	call Route32_Johto_Route32CooltrainerMContinueScene_Sub
	applymovement 8, Route32_Johto_Movement_Route32CooltrainerMReset1
	waitmovement 8
	applymovement 8, Route32_Johto_Movement_Route32CooltrainerMReset2
	waitmovement 8
	releaseall
	end

Route32_Johto_Route32RoarTMGuyScript:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_TM05_ROAR, Route32_Johto_Route32RoarTMGuyScript_AlreadyHaveRoar
	message Route32_Johto_Text_RoarIntro
	waitmessage
	waitbuttonpress
	@ TODO unsupported: verbosegiveitem TM_ROAR
	goto Johto_EventScript_Unimplemented

Route32_Johto_Route32RoarTMGuyScript_AlreadyHaveRoar:
	message Route32_Johto_Text_RoarOutro
	waitmessage
	waitbuttonpress

Route32_Johto_Route32RoarTMGuyScript_Finish:
	closemessage
	releaseall
	end

Route32_Johto_Route32WannaBuyASlowpokeTailScript:
	applymovement 10, Johto_Movement_Face_Down
	waitmovement 10
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Up
	waitmovement OBJ_EVENT_ID_PLAYER
	goto Route32_Johto__OfferToSellSlowpokeTail

Route32_Johto_SlowpokeTailSalesmanScript:
	faceplayer

Route32_Johto__OfferToSellSlowpokeTail:
	setvar VAR_JOHTO_SCENE_ROUTE_32, 2
	message Route32_Johto_Text_MillionDollarSlowpokeTail
	waitmessage
	yesnobox 20, 8
	@ TODO unsupported: iffalse .refused
	goto Johto_EventScript_Unimplemented

Route32_Johto_FriedaScript:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_POISON_BARB_FROM_FRIEDA, Route32_Johto_FriedaScript_Friday
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

Route32_Johto_FriedaScript_Friday:
	message Route32_Johto_FriedaFridayText
	waitmessage
	waitbuttonpress

Route32_Johto_FriedaScript_Done:
	closemessage
	releaseall
	end

Route32_Johto_Route32Sign:
	message Route32_Johto_Route32SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route32_Johto_Route32RuinsSign:
	message Route32_Johto_Route32RuinsSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route32_Johto_Route32UnionCaveSign:
	message Route32_Johto_Route32UnionCaveSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route32_Johto_Route32PokecenterSign:
	goto Johto_Std_PokecenterSignScript

Route32_Johto_Route32FriedaCallback_Sub:
	@ TODO unsupported: readvar VAR_WEEKDAY
	return

Route32_Johto_Route32CooltrainerMContinueScene_Sub:
	goto_if_set FLAG_JOHTO_GOT_MIRACLE_SEED_IN_ROUTE_32, Route32_Johto_Route32CooltrainerMContinueScene_GotMiracleSeed_Sub
	goto_if_unset FLAG_JOHTO_ENGINE_ZEPHYRBADGE, Route32_Johto_Route32CooltrainerMContinueScene_DontHaveZephyrBadge_Sub
	goto_if_set FLAG_JOHTO_GOT_TOGEPI_EGG_FROM_ELMS_AIDE, Route32_Johto_Route32CooltrainerMContinueScene_GiveMiracleSeed_Sub
	message Route32_Johto_Route32CooltrainerMText_AideIsWaiting
	waitmessage
	waitbuttonpress
	closemessage
	return

Route32_Johto_Route32CooltrainerMContinueScene_GiveMiracleSeed_Sub:
	message Route32_Johto_Route32CooltrainerMText_HaveThisSeed
	waitmessage
	waitbuttonpress
	giveitem ITEM_MIRACLE_SEED
	goto_if_eq VAR_RESULT, 0, Route32_Johto_Route32CooltrainerMContinueScene_BagFull_Sub
	setflag FLAG_JOHTO_GOT_MIRACLE_SEED_IN_ROUTE_32
	goto Route32_Johto_Route32CooltrainerMContinueScene_GotMiracleSeed_Sub

Route32_Johto_Route32CooltrainerMContinueScene_DontHaveZephyrBadge_Sub:
	message Route32_Johto_Route32CooltrainerMText_VioletGym
	waitmessage
	waitbuttonpress
	closemessage
	return

Route32_Johto_Route32CooltrainerMContinueScene_GotMiracleSeed_Sub:
	message Route32_Johto_Route32CooltrainerMText_ExperiencesShouldBeUseful
	waitmessage
	waitbuttonpress

Route32_Johto_Route32CooltrainerMContinueScene_BagFull_Sub:
	closemessage
	return

Route32_Johto_Movement_Route32CooltrainerMPushesYouBackToViolet:
	walk_up
	walk_up
	step_end

Route32_Johto_Movement_Route32CooltrainerMReset1:
	walk_down
	step_end

Route32_Johto_Movement_Route32CooltrainerMReset2:
	walk_right
	step_end

Route32_Johto_Route32CooltrainerMText_WhatsTheHurry:
	.string "Wait up!\n"
	.string "What's the hurry?$"

Route32_Johto_Route32CooltrainerMText_AideIsWaiting:
	.string "{PLAYER}, right?\n"
	.string "Some guy wearing"
	.string "\pglasses was look-\n"
	.string "ing for you."
	.string "\pSee for yourself.\n"
	.string "He's waiting for"
	.string "\pyou at the POKéMON\n"
	.string "CENTER.$"

Route32_Johto_Route32CooltrainerMText_VioletGym:
	.string "Have you gone to\n"
	.string "the POKéMON GYM?"
	.string "\pYou can test your\n"
	.string "POKéMON and your-\l"
	.string "self there."
	.string "\pIt's a rite of\n"
	.string "passage for all\l"
	.string "trainers!$"

Route32_Johto_Route32CooltrainerMText_HaveThisSeed:
	.string "You have some good\n"
	.string "POKéMON there."
	.string "\pIt must be from\n"
	.string "the training you"
	.string "\pgave them around\n"
	.string "VIOLET CITY."
	.string "\pThe training at\n"
	.string "the GYM must have"
	.string "\pbeen especially\n"
	.string "helpful."
	.string "\pAs a souvenir of\n"
	.string "VIOLET CITY, take\l"
	.string "this."
	.string "\pIt increases the\n"
	.string "power of grass-\l"
	.string "type moves.$"

Route32_Johto_Route32CooltrainerMText_ExperiencesShouldBeUseful:
	.string "Your experiences\n"
	.string "in VIOLET CITY"
	.string "\pshould be useful\n"
	.string "for your journey.$"

Route32_Johto_Text_MillionDollarSlowpokeTail:
	.string "How would you like\n"
	.string "to have this"
	.string "\ptasty, nutritious\n"
	.string "SLOWPOKETAIL?"
	.string "\pFor you right now,\n"
	.string "just ¥1,000,000!"
	.string "\pYou'll want this!$"

Route32_Johto_Text_RoarIntro:
	.string "WROOOOAR!\n"
	.string "PEOPLE RUN WHEN I"
	.string "\pROAR! BUT YOU\n"
	.string "CAME LOOKING!"
	.string "\pTHAT PLEASES ME!\n"
	.string "NOW TAKE THIS!$"

Route32_Johto_Text_RoarOutro:
	.string "WROOOAR!\n"
	.string "IT'S ROAR!"
	.string "\pEVEN POKéMON RUN\n"
	.string "FROM A GOOD ROAR!$"

Route32_Johto_FriedaFridayText:
	.string "FRIEDA: Hiya! What\n"
	.string "day do you like?"
	.string "\pI love Friday. No\n"
	.string "doubt about it!"
	.string "\pDon't you think\n"
	.string "it's great too?$"

Route32_Johto_Route32SignText:
	.string "ROUTE 32"
	.string "\pVIOLET CITY -\n"
	.string "AZALEA TOWN$"

Route32_Johto_Route32RuinsSignText:
	.string "RUINS OF ALPH\n"
	.string "EAST ENTRANCE$"

Route32_Johto_Route32UnionCaveSignText:
	.string "UNION CAVE\n"
	.string "AHEAD$"
