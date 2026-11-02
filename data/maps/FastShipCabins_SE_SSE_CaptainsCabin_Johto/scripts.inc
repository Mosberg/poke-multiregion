FastShipCabins_SE_SSE_CaptainsCabin_Johto_MapScripts::
	.byte 0

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaCaptain_Entry::
	lockall
	goto FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaCaptain

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGrandpa_Entry::
	lockall
	goto FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGrandpa

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGranddaughterAfter_Entry::
	lockall
	goto FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGranddaughterAfter

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGranddaughterBefore_Entry::
	lockall
	goto FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGranddaughterBefore

FastShipCabins_SE_SSE_CaptainsCabin_Johto_FastShipCaptainsCabinTrashcan_Entry::
	lockall
	goto FastShipCabins_SE_SSE_CaptainsCabin_Johto_FastShipCaptainsCabinTrashcan


FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaCaptain:
	faceplayer
	goto_if_set FLAG_JOHTO_FAST_SHIP_FIRST_TIME, FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaCaptain_LaterTrip
	message FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaCaptainExhaustingText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaCaptain_LaterTrip:
	message FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaCaptainHowDoYouLikeText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGranddaughterBefore:
	applymovement 4, Johto_Movement_Face_Right
	waitmovement 4
	message FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGranddaughterCaptainPlayWithMeText
	waitmessage
	waitbuttonpress
	closemessage
	faceplayer
	message FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGranddaughterHasToFindGrandpaText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: special FadeOutToBlack
	goto Johto_EventScript_Unimplemented

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGrandpa:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_METAL_COAT_FROM_GRANDPA_ON_SS_AQUA, FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGotMetalCoat
	goto_if_set FLAG_JOHTO_FAST_SHIP_CABINS_SE_SSE_CAPTAINS_CABIN_TWIN_2, FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaFoundGranddaughter
	message FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaCantFindGranddaughterText
	waitmessage
	waitbuttonpress
	closemessage
	setvar VAR_JOHTO_SCENE_FAST_SHIP_1F, 0
	releaseall
	end

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaFoundGranddaughter:
	message FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGrandpaHaveThisText
	waitmessage
	waitbuttonpress
	giveitem ITEM_METAL_COAT
	goto_if_eq VAR_RESULT, 0, FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaFoundGranddaughter_NoRoom
	setflag FLAG_JOHTO_GOT_METAL_COAT_FROM_GRANDPA_ON_SS_AQUA

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaFoundGranddaughter_NoRoom:
	closemessage
	releaseall
	end

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGotMetalCoat:
	message FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGrandpaTravellingText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGranddaughterAfter:
	faceplayer
	message FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGranddaughterHadFunText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FastShipCabins_SE_SSE_CaptainsCabin_Johto_FastShipCaptainsCabinTrashcan:
	goto Johto_Std_TrashCanScript

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaCaptainExhaustingText:
	.string "Whew! Thanks for\n"
	.string "coming along."
	.string "\pKeeping that lit-\n"
	.string "tle girl amused\l"
	.string "was exhausting.$"

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaCaptainHowDoYouLikeText:
	.string "How do you like\n"
	.string "S.S.AQUA's ride?"
	.string "\pShe practically\n"
	.string "skates across the\l"
	.string "waves.$"

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaCantFindGranddaughterText:
	.string "Oh, hello…"
	.string "\pI still can't find\n"
	.string "my granddaughter."
	.string "\pIf she's on the\n"
	.string "ship, that's OK."
	.string "\pShe's an energetic\n"
	.string "child, so she may"
	.string "\pbe bugging some-\n"
	.string "one. I'm worried…$"

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGrandpaHaveThisText:
	.string "I know! I'd like\n"
	.string "you to have this!$"

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGrandpaTravellingText:
	.string "We're traveling\n"
	.string "around the world.$"

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGranddaughterCaptainPlayWithMeText:
	.string "CAPTAIN, play with\n"
	.string "me, please?"
	.string "\pI'm bored! I want\n"
	.string "to play more!$"

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGranddaughterHasToFindGrandpaText:
	.string "Hi! Will you play\n"
	.string "with me?"
	.string "\p…Oh!"
	.string "\pGrandpa's worried\n"
	.string "about me?"
	.string "\pI have to go!"
	.string "\pI have to go find\n"
	.string "Grandpa!$"

FastShipCabins_SE_SSE_CaptainsCabin_Johto_SSAquaGranddaughterHadFunText:
	.string "I had lots of fun\n"
	.string "playing!$"
