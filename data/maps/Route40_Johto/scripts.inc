Route40_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route40_Johto_OnTransition
	.byte 0

Route40_Johto_OnTransition:
	call Route40_Johto_Route40MonicaCallback_Sub
	end

Route40_Johto_Route40Rock_Entry::
	lockall
	goto Route40_Johto_Route40Rock

Route40_Johto_Route40Lass1Script_Entry::
	lockall
	goto Route40_Johto_Route40Lass1Script

Route40_Johto_MonicaScript_Entry::
	lockall
	goto Route40_Johto_MonicaScript

Route40_Johto_Route40PokefanMScript_Entry::
	lockall
	goto Route40_Johto_Route40PokefanMScript

Route40_Johto_Route40Lass2Script_Entry::
	lockall
	goto Route40_Johto_Route40Lass2Script

Route40_Johto_Route40StandingYoungsterScript_Entry::
	lockall
	goto Route40_Johto_Route40StandingYoungsterScript

Route40_Johto_Route40Sign_Entry::
	lockall
	goto Route40_Johto_Route40Sign


Route40_Johto_Route40Lass1Script:
	faceplayer
	message Route40_Johto_Route40Lass1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route40_Johto_Route40PokefanMScript:
	@ TODO unsupported: special CheckMobileAdapterStatusSpecial
	goto Johto_EventScript_Unimplemented

Route40_Johto_Route40Lass2Script:
	faceplayer
	message Route40_Johto_Route40Lass2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route40_Johto_Route40StandingYoungsterScript:
	faceplayer
	message Route40_Johto_Route40StandingYoungsterText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route40_Johto_MonicaScript:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_SHARP_BEAK_FROM_MONICA, Route40_Johto_MonicaScript_Monday
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

Route40_Johto_MonicaScript_Monday:
	message Route40_Johto_MonicaMondayText
	waitmessage
	waitbuttonpress

Route40_Johto_MonicaScript_done:
	closemessage
	releaseall
	end

Route40_Johto_Route40Sign:
	message Route40_Johto_Route40SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route40_Johto_Route40Rock:
	goto Johto_Std_SmashRockScript

Route40_Johto_Route40MonicaCallback_Sub:
	clearflag FLAG_JOHTO_BATTLE_TOWER_OPEN_CIVILIANS
	@ TODO unsupported: readvar VAR_WEEKDAY
	return

Route40_Johto_Route40Lass1Text:
	.string "Although you can't\n"
	.string "see it from here,"
	.string "\pCIANWOOD is across\n"
	.string "the sea.$"

Route40_Johto_Route40Lass2Text:
	.string "I came to OLIVINE\n"
	.string "by ship to see the"
	.string "\psights and soak up\n"
	.string "the atmosphere."
	.string "\pBeing a port, it\n"
	.string "feels so different\l"
	.string "from a big city.$"

Route40_Johto_Route40StandingYoungsterText:
	.string "Have you gone to\n"
	.string "the BATTLE TOWER?"
	.string "\pI think a lot of\n"
	.string "tough trainers"
	.string "\phave gathered\n"
	.string "there already."
	.string "\pBut since you have\n"
	.string "so many BADGES,"
	.string "\pyou shouldn't do\n"
	.string "badly at all.$"

Route40_Johto_MonicaMondayText:
	.string "MONICA: My broth-\n"
	.string "ers and sisters"
	.string "\pare all over the\n"
	.string "place."
	.string "\pSee if you could\n"
	.string "find them all!$"

Route40_Johto_Route40SignText:
	.string "ROUTE 40"
	.string "\pCIANWOOD CITY -\n"
	.string "OLIVINE CITY$"
