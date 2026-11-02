CianwoodCity_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CianwoodCity_Johto_OnTransition
	.byte 0

CianwoodCity_Johto_OnTransition:
	call CianwoodCity_Johto_CianwoodCityFlypointAndSuicuneCallback_Sub
	end

CianwoodCity_Johto_CianwoodCityYoungster_Entry::
	lockall
	goto CianwoodCity_Johto_CianwoodCityYoungster

CianwoodCity_Johto_CianwoodCityPokefanM_Entry::
	lockall
	goto CianwoodCity_Johto_CianwoodCityPokefanM

CianwoodCity_Johto_CianwoodCityLass_Entry::
	lockall
	goto CianwoodCity_Johto_CianwoodCityLass

CianwoodCity_Johto_CianwoodCityRock_Entry::
	lockall
	goto CianwoodCity_Johto_CianwoodCityRock

CianwoodCity_Johto_CianwoodCityChucksWife_Entry::
	lockall
	goto CianwoodCity_Johto_CianwoodCityChucksWife

CianwoodCity_Johto_CianwoodCitySign_Entry::
	lockall
	goto CianwoodCity_Johto_CianwoodCitySign

CianwoodCity_Johto_CianwoodGymSign_Entry::
	lockall
	goto CianwoodCity_Johto_CianwoodGymSign

CianwoodCity_Johto_CianwoodPokecenterSign_Entry::
	lockall
	goto CianwoodCity_Johto_CianwoodPokecenterSign

CianwoodCity_Johto_CianwoodPharmacySign_Entry::
	lockall
	goto CianwoodCity_Johto_CianwoodPharmacySign

CianwoodCity_Johto_CianwoodPhotoStudioSign_Entry::
	lockall
	goto CianwoodCity_Johto_CianwoodPhotoStudioSign

CianwoodCity_Johto_CianwoodPokeSeerSign_Entry::
	lockall
	goto CianwoodCity_Johto_CianwoodPokeSeerSign

CianwoodCity_Johto_CianwoodCitySuicuneAndEusine_Entry::
	lockall
	goto CianwoodCity_Johto_CianwoodCitySuicuneAndEusine


CianwoodCity_Johto_CianwoodCitySuicuneAndEusine:
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Up
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Emote_exclamation_mark
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 15
	@ TODO unsupported: playsound SFX_WARP_FROM
	goto Johto_EventScript_Unimplemented

CianwoodCity_Johto_CianwoodCityChucksWife:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_HM02_FLY, CianwoodCity_Johto_CianwoodCityChucksWife_GotFly
	message CianwoodCity_Johto_ChucksWifeEasierToFlyText
	waitmessage
	waitbuttonpress
	goto_if_set FLAG_JOHTO_BEAT_CHUCK, CianwoodCity_Johto_CianwoodCityChucksWife_BeatChuck
	message CianwoodCity_Johto_ChucksWifeBeatChuckText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CianwoodCity_Johto_CianwoodCityChucksWife_BeatChuck:
	message CianwoodCity_Johto_ChucksWifeGiveHMText
	waitmessage
	waitbuttonpress
	@ TODO unsupported: verbosegiveitem HM_FLY
	goto Johto_EventScript_Unimplemented

CianwoodCity_Johto_CianwoodCityChucksWife_GotFly:
	message CianwoodCity_Johto_ChucksWifeChubbyText
	waitmessage
	waitbuttonpress

CianwoodCity_Johto_CianwoodCityChucksWife_Done:
	closemessage
	releaseall
	end

CianwoodCity_Johto_CianwoodCityYoungster:
	faceplayer
	message CianwoodCity_Johto_CianwoodCityYoungsterText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CianwoodCity_Johto_CianwoodCityPokefanM:
	faceplayer
	message CianwoodCity_Johto_CianwoodCityPokefanMText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CianwoodCity_Johto_CianwoodCityLass:
	faceplayer
	message CianwoodCity_Johto_CianwoodCityLassText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CianwoodCity_Johto_CianwoodCitySign:
	message CianwoodCity_Johto_CianwoodCitySignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CianwoodCity_Johto_CianwoodGymSign:
	message CianwoodCity_Johto_CianwoodGymSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CianwoodCity_Johto_CianwoodPharmacySign:
	message CianwoodCity_Johto_CianwoodPharmacySignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CianwoodCity_Johto_CianwoodPhotoStudioSign:
	message CianwoodCity_Johto_CianwoodPhotoStudioSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CianwoodCity_Johto_CianwoodPokeSeerSign:
	message CianwoodCity_Johto_CianwoodPokeSeerSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CianwoodCity_Johto_CianwoodPokecenterSign:
	goto Johto_Std_PokecenterSignScript

CianwoodCity_Johto_CianwoodCityRock:
	goto Johto_Std_SmashRockScript

CianwoodCity_Johto_CianwoodCityFlypointAndSuicuneCallback_Sub:
	setflag FLAG_JOHTO_ENGINE_FLYPOINT_CIANWOOD
	setflag FLAG_JOHTO_EUSINE_IN_BURNED_TOWER
	goto_if_unset FLAG_JOHTO_FOUGHT_EUSINE, CianwoodCity_Johto_CianwoodCityFlypointAndSuicuneCallback_Done_Sub
	removeobject 11

CianwoodCity_Johto_CianwoodCityFlypointAndSuicuneCallback_Done_Sub:
	return

CianwoodCity_Johto_ChucksWifeEasierToFlyText:
	.string "You crossed the\n"
	.string "sea to get here?"
	.string "\pThat must have\n"
	.string "been hard."
	.string "\pIt would be much\n"
	.string "easier if your"
	.string "\pPOKéMON knew how\n"
	.string "to FLY…$"

CianwoodCity_Johto_ChucksWifeBeatChuckText:
	.string "But you can't use\n"
	.string "FLY without this\l"
	.string "city's GYM BADGE."
	.string "\pIf you beat the\n"
	.string "GYM LEADER here,\l"
	.string "come see me."
	.string "\pI'll have a nice\n"
	.string "gift for you.$"

CianwoodCity_Johto_ChucksWifeGiveHMText:
	.string "That's CIANWOOD's\n"
	.string "GYM BADGE!"
	.string "\pThen you should\n"
	.string "take this HM.$"

CianwoodCity_Johto_ChucksWifeChubbyText:
	.string "My husband lost to\n"
	.string "you, so he needs\l"
	.string "to train harder."
	.string "\pThat's good, since\n"
	.string "he was getting a\l"
	.string "little chubby.$"

CianwoodCity_Johto_CianwoodCityYoungsterText:
	.string "If you use FLY,\n"
	.string "you can get back"
	.string "\pto OLIVINE in-\n"
	.string "stantly.$"

CianwoodCity_Johto_CianwoodCityPokefanMText:
	.string "Boulders to the\n"
	.string "north of town can\l"
	.string "be crushed."
	.string "\pThey may be hiding\n"
	.string "something."
	.string "\pYour POKéMON could\n"
	.string "use ROCK SMASH to\l"
	.string "break them.$"

CianwoodCity_Johto_CianwoodCityLassText:
	.string "CHUCK, the GYM\n"
	.string "LEADER, spars with"
	.string "\phis fighting POKé-\n"
	.string "MON.$"

CianwoodCity_Johto_CianwoodCitySignText:
	.string "CIANWOOD CITY"
	.string "\pA Port Surrounded\n"
	.string "by Rough Seas$"

CianwoodCity_Johto_CianwoodGymSignText:
	.string "CIANWOOD CITY\n"
	.string "POKéMON GYM"
	.string "\pLEADER: CHUCK"
	.string "\pHis Roaring Fists\n"
	.string "Do the Talking$"

CianwoodCity_Johto_CianwoodPharmacySignText:
	.string "500 Years of\n"
	.string "Tradition"
	.string "\pCIANWOOD CITY\n"
	.string "PHARMACY"
	.string "\pWe Await Your\n"
	.string "Medicinal Queries$"

CianwoodCity_Johto_CianwoodPhotoStudioSignText:
	.string "CIANWOOD CITY\n"
	.string "PHOTO STUDIO"
	.string "\pTake a Snapshot as\n"
	.string "a Keepsake!$"

CianwoodCity_Johto_CianwoodPokeSeerSignText:
	.string "THE POKé SEER\n"
	.string "AHEAD$"
