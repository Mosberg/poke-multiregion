FuchsiaCity_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_Johto_OnTransition
	.byte 0

FuchsiaCity_Johto_OnTransition:
	call FuchsiaCity_Johto_FuchsiaCityFlypointCallback_Sub
	end

FuchsiaCity_Johto_FuchsiaCityYoungster_Entry::
	lockall
	goto FuchsiaCity_Johto_FuchsiaCityYoungster

FuchsiaCity_Johto_FuchsiaCityPokefanM_Entry::
	lockall
	goto FuchsiaCity_Johto_FuchsiaCityPokefanM

FuchsiaCity_Johto_FuchsiaCityTeacher_Entry::
	lockall
	goto FuchsiaCity_Johto_FuchsiaCityTeacher

FuchsiaCity_Johto_FuchsiaCityFruitTree_Entry::
	lockall
	goto FuchsiaCity_Johto_FuchsiaCityFruitTree

FuchsiaCity_Johto_FuchsiaCitySign_Entry::
	lockall
	goto FuchsiaCity_Johto_FuchsiaCitySign

FuchsiaCity_Johto_FuchsiaGymSign_Entry::
	lockall
	goto FuchsiaCity_Johto_FuchsiaGymSign

FuchsiaCity_Johto_SafariZoneOfficeSign_Entry::
	lockall
	goto FuchsiaCity_Johto_SafariZoneOfficeSign

FuchsiaCity_Johto_WardensHomeSign_Entry::
	lockall
	goto FuchsiaCity_Johto_WardensHomeSign

FuchsiaCity_Johto_SafariZoneClosedSign_Entry::
	lockall
	goto FuchsiaCity_Johto_SafariZoneClosedSign

FuchsiaCity_Johto_NoLitteringSign_Entry::
	lockall
	goto FuchsiaCity_Johto_NoLitteringSign

FuchsiaCity_Johto_FuchsiaCityPokecenterSign_Entry::
	lockall
	goto FuchsiaCity_Johto_FuchsiaCityPokecenterSign

FuchsiaCity_Johto_FuchsiaCityMartSign_Entry::
	lockall
	goto FuchsiaCity_Johto_FuchsiaCityMartSign


FuchsiaCity_Johto_FuchsiaCityYoungster:
	faceplayer
	message FuchsiaCity_Johto_FuchsiaCityYoungsterText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FuchsiaCity_Johto_FuchsiaCityPokefanM:
	faceplayer
	message FuchsiaCity_Johto_FuchsiaCityPokefanMText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FuchsiaCity_Johto_FuchsiaCityTeacher:
	faceplayer
	message FuchsiaCity_Johto_FuchsiaCityTeacherText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FuchsiaCity_Johto_FuchsiaCitySign:
	message FuchsiaCity_Johto_FuchsiaCitySignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FuchsiaCity_Johto_FuchsiaGymSign:
	message FuchsiaCity_Johto_FuchsiaGymSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FuchsiaCity_Johto_SafariZoneOfficeSign:
	message FuchsiaCity_Johto_SafariZoneOfficeSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FuchsiaCity_Johto_WardensHomeSign:
	message FuchsiaCity_Johto_WardensHomeSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FuchsiaCity_Johto_SafariZoneClosedSign:
	message FuchsiaCity_Johto_SafariZoneClosedSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FuchsiaCity_Johto_NoLitteringSign:
	message FuchsiaCity_Johto_NoLitteringSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FuchsiaCity_Johto_FuchsiaCityPokecenterSign:
	goto Johto_Std_PokecenterSignScript

FuchsiaCity_Johto_FuchsiaCityMartSign:
	goto Johto_Std_MartSignScript

FuchsiaCity_Johto_FuchsiaCityFruitTree:
	@ TODO unsupported: fruittree FRUITTREE_FUCHSIA_CITY
	goto Johto_EventScript_Unimplemented

FuchsiaCity_Johto_FuchsiaCityFlypointCallback_Sub:
	setflag FLAG_JOHTO_ENGINE_FLYPOINT_FUCHSIA
	return

FuchsiaCity_Johto_FuchsiaCityYoungsterText:
	.string "One of the ELITE\n"
	.string "FOUR used to be"
	.string "\pthe LEADER of\n"
	.string "FUCHSIA's GYM.$"

FuchsiaCity_Johto_FuchsiaCityPokefanMText:
	.string "KOGA's daughter\n"
	.string "succeeded him as"
	.string "\pthe GYM LEADER\n"
	.string "after he joined\l"
	.string "the ELITE FOUR.$"

FuchsiaCity_Johto_FuchsiaCityTeacherText:
	.string "The SAFARI ZONE is\n"
	.string "closed… It's sad,"
	.string "\pconsidering it's\n"
	.string "FUCHSIA's main\l"
	.string "attraction.$"

FuchsiaCity_Johto_FuchsiaCitySignText:
	.string "FUCHSIA CITY"
	.string "\pBehold! It's\n"
	.string "Passion Pink!$"

FuchsiaCity_Johto_FuchsiaGymSignText:
	.string "FUCHSIA CITY\n"
	.string "POKéMON GYM\l"
	.string "LEADER: JANINE"
	.string "\pThe Poisonous\n"
	.string "Ninja Master$"

FuchsiaCity_Johto_SafariZoneOfficeSignText:
	.string "There's a notice\n"
	.string "here…"
	.string "\pSAFARI ZONE OFFICE\n"
	.string "is closed until\l"
	.string "further notice.$"

FuchsiaCity_Johto_WardensHomeSignText:
	.string "SAFARI ZONE\n"
	.string "WARDEN'S HOME$"

FuchsiaCity_Johto_SafariZoneClosedSignText:
	.string "The WARDEN is\n"
	.string "traveling abroad."
	.string "\pTherefore, the\n"
	.string "SAFARI ZONE is\l"
	.string "closed.$"

FuchsiaCity_Johto_NoLitteringSignText:
	.string "No littering."
	.string "\pPlease take your\n"
	.string "waste with you.$"
