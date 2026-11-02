VermilionCity_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Johto_OnTransition
	.byte 0

VermilionCity_Johto_OnTransition:
	call VermilionCity_Johto_VermilionCityFlypointCallback_Cb
	end

VermilionCity_Johto_VermilionCityTeacherScript_Entry::
	lockall
	goto VermilionCity_Johto_VermilionCityTeacherScript

VermilionCity_Johto_VermilionMachopOwner_Entry::
	lockall
	goto VermilionCity_Johto_VermilionMachopOwner

VermilionCity_Johto_VermilionMachop_Entry::
	lockall
	goto VermilionCity_Johto_VermilionMachop

VermilionCity_Johto_VermilionCitySuperNerdScript_Entry::
	lockall
	goto VermilionCity_Johto_VermilionCitySuperNerdScript

VermilionCity_Johto_VermilionSnorlax_Entry::
	lockall
	goto VermilionCity_Johto_VermilionSnorlax

VermilionCity_Johto_VermilionGymBadgeGuy_Entry::
	lockall
	goto VermilionCity_Johto_VermilionGymBadgeGuy

VermilionCity_Johto_VermilionCitySign_Entry::
	lockall
	goto VermilionCity_Johto_VermilionCitySign

VermilionCity_Johto_VermilionGymSign_Entry::
	lockall
	goto VermilionCity_Johto_VermilionGymSign

VermilionCity_Johto_PokemonFanClubSign_Entry::
	lockall
	goto VermilionCity_Johto_PokemonFanClubSign

VermilionCity_Johto_VermilionCityDiglettsCaveSign_Entry::
	lockall
	goto VermilionCity_Johto_VermilionCityDiglettsCaveSign

VermilionCity_Johto_VermilionCityPortSign_Entry::
	lockall
	goto VermilionCity_Johto_VermilionCityPortSign

VermilionCity_Johto_VermilionCityPokecenterSign_Entry::
	lockall
	goto VermilionCity_Johto_VermilionCityPokecenterSign

VermilionCity_Johto_VermilionCityMartSign_Entry::
	lockall
	goto VermilionCity_Johto_VermilionCityMartSign


VermilionCity_Johto_VermilionCityTeacherScript:
	faceplayer
	message VermilionCity_Johto_VermilionCityTeacherText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionCity_Johto_VermilionMachopOwner:
	faceplayer
	message VermilionCity_Johto_VermilionMachopOwnerText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionCity_Johto_VermilionMachop:
	message VermilionCity_Johto_VermilionMachopText1
	waitmessage
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	waitmoncry
	waitbuttonpress
	closemessage
	@ TODO unsupported: earthquake 30
	goto Johto_EventScript_Unimplemented

VermilionCity_Johto_VermilionCitySuperNerdScript:
	faceplayer
	message VermilionCity_Johto_VermilionCitySuperNerdText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionCity_Johto_VermilionSnorlax:
	@ TODO unsupported: special SnorlaxAwake
	goto Johto_EventScript_Unimplemented

VermilionCity_Johto_VermilionGymBadgeGuy:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_HP_UP_FROM_VERMILION_GUY, VermilionCity_Johto_VermilionGymBadgeGuy_AlreadyGotItem
	setvar VAR_RESULT, 0
	@ TODO unsupported: ifequal NUM_BADGES, .AllBadges
	goto Johto_EventScript_Unimplemented

VermilionCity_Johto_VermilionGymBadgeGuy_AlreadyGotItem:
	message VermilionCity_Johto_VermilionCityBadgeGuyBattleEdgeText
	waitmessage
	waitbuttonpress

VermilionCity_Johto_VermilionGymBadgeGuy_Done:
	closemessage
	releaseall
	end

VermilionCity_Johto_VermilionCitySign:
	message VermilionCity_Johto_VermilionCitySignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionCity_Johto_VermilionGymSign:
	message VermilionCity_Johto_VermilionGymSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionCity_Johto_PokemonFanClubSign:
	message VermilionCity_Johto_PokemonFanClubSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionCity_Johto_VermilionCityDiglettsCaveSign:
	message VermilionCity_Johto_VermilionCityDiglettsCaveSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionCity_Johto_VermilionCityPortSign:
	message VermilionCity_Johto_VermilionCityPortSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionCity_Johto_VermilionCityPokecenterSign:
	goto Johto_Std_PokecenterSignScript

VermilionCity_Johto_VermilionCityMartSign:
	goto Johto_Std_MartSignScript

VermilionCity_Johto_VermilionCityFlypointCallback_Cb:
	setflag FLAG_JOHTO_ENGINE_FLYPOINT_VERMILION
	return

VermilionCity_Johto_VermilionCityTeacherText:
	.string "VERMILION PORT is\n"
	.string "KANTO's seaside\l"
	.string "gateway."
	.string "\pLuxury liners from\n"
	.string "around the world\l"
	.string "dock here.$"

VermilionCity_Johto_VermilionMachopOwnerText:
	.string "My POKéMON is\n"
	.string "preparing the land\l"
	.string "for construction."
	.string "\pBut I have no\n"
	.string "money to start the\l"
	.string "project…$"

VermilionCity_Johto_VermilionMachopText1:
	.string "MACHOP: Guooh\n"
	.string "gogogoh!$"

VermilionCity_Johto_VermilionCitySuperNerdText:
	.string "There are eight\n"
	.string "GYMS in KANTO."
	.string "\pThat big building\n"
	.string "is VERMILION's\l"
	.string "POKéMON GYM.$"

VermilionCity_Johto_VermilionCityBadgeGuyBattleEdgeText:
	.string "Having a variety\n"
	.string "of POKéMON types"
	.string "\pshould give you an\n"
	.string "edge in battle."
	.string "\pI'm sure the KANTO\n"
	.string "GYM BADGES will\l"
	.string "help you.$"

VermilionCity_Johto_VermilionCitySignText:
	.string "VERMILION CITY"
	.string "\pThe Port of\n"
	.string "Exquisite Sunsets$"

VermilionCity_Johto_VermilionGymSignText:
	.string "VERMILION CITY\n"
	.string "POKéMON GYM\l"
	.string "LEADER: LT.SURGE"
	.string "\pThe Lightning\n"
	.string "American$"

VermilionCity_Johto_PokemonFanClubSignText:
	.string "POKéMON FAN CLUB"
	.string "\pAll POKéMON Fans\n"
	.string "Welcome!$"

VermilionCity_Johto_VermilionCityDiglettsCaveSignText:
	.string "DIGLETT'S CAVE$"

VermilionCity_Johto_VermilionCityPortSignText:
	.string "VERMILION PORT\n"
	.string "ENTRANCE$"
