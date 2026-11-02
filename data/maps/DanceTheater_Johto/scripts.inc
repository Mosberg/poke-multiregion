DanceTheater_Johto_MapScripts::
	.byte 0

DanceTheater_Johto_DanceTheaterSurfGuy_Entry::
	lockall
	goto DanceTheater_Johto_DanceTheaterSurfGuy

DanceTheater_Johto_DanceTheaterRhydon_Entry::
	lockall
	goto DanceTheater_Johto_DanceTheaterRhydon

DanceTheater_Johto_DanceTheaterCooltrainerMScript_Entry::
	lockall
	goto DanceTheater_Johto_DanceTheaterCooltrainerMScript

DanceTheater_Johto_DanceTheaterGrannyScript_Entry::
	lockall
	goto DanceTheater_Johto_DanceTheaterGrannyScript

DanceTheater_Johto_DanceTheaterFancyPanel_Entry::
	lockall
	goto DanceTheater_Johto_DanceTheaterFancyPanel


DanceTheater_Johto_DanceTheaterSurfGuy:
	faceplayer
	message DanceTheater_Johto_SurfGuyNeverLeftAScratchText
	waitmessage
	waitbuttonpress
	goto_if_set FLAG_JOHTO_GOT_HM03_SURF, DanceTheater_Johto_SurfGuyAlreadyGaveSurf
	goto_if_unset FLAG_JOHTO_BEAT_KIMONO_GIRL_NAOKO, DanceTheater_Johto_DanceTheaterSurfGuy_KimonoGirlsUndefeated
	goto_if_unset FLAG_JOHTO_BEAT_KIMONO_GIRL_SAYO, DanceTheater_Johto_DanceTheaterSurfGuy_KimonoGirlsUndefeated
	goto_if_unset FLAG_JOHTO_BEAT_KIMONO_GIRL_ZUKI, DanceTheater_Johto_DanceTheaterSurfGuy_KimonoGirlsUndefeated
	goto_if_unset FLAG_JOHTO_BEAT_KIMONO_GIRL_KUNI, DanceTheater_Johto_DanceTheaterSurfGuy_KimonoGirlsUndefeated
	goto_if_unset FLAG_JOHTO_BEAT_KIMONO_GIRL_MIKI, DanceTheater_Johto_DanceTheaterSurfGuy_KimonoGirlsUndefeated
	goto DanceTheater_Johto_DanceTheaterSurfGuy_GetSurf

DanceTheater_Johto_DanceTheaterSurfGuy_KimonoGirlsUndefeated:
	goto_if_set FLAG_JOHTO_ENGINE_PLAYER_IS_FEMALE, DanceTheater_Johto_DanceTheaterSurfGuy_PlayerIsFemale
	message DanceTheater_Johto_SurfGuyLadGiftText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

DanceTheater_Johto_DanceTheaterSurfGuy_PlayerIsFemale:
	message DanceTheater_Johto_SurfGuyLassieGiftText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

DanceTheater_Johto_DanceTheaterSurfGuy_GetSurf:
	message DanceTheater_Johto_SurfGuyLikeADanceText
	waitmessage
	waitbuttonpress
	@ TODO unsupported: verbosegiveitem HM_SURF
	goto Johto_EventScript_Unimplemented

DanceTheater_Johto_SurfGuyAlreadyGaveSurf:
	message DanceTheater_Johto_SurfGuyElegantKimonoGirlsText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

DanceTheater_Johto_DanceTheaterRhydon:
	message DanceTheater_Johto_RhydonText
	waitmessage
	playmoncry SPECIES_RHYDON, CRY_MODE_NORMAL
	waitmoncry
	waitbuttonpress
	closemessage
	releaseall
	end

DanceTheater_Johto_DanceTheaterCooltrainerMScript:
	faceplayer
	message DanceTheater_Johto_DanceTheaterCooltrainerMText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

DanceTheater_Johto_DanceTheaterGrannyScript:
	faceplayer
	message DanceTheater_Johto_DanceTheaterGrannyText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

DanceTheater_Johto_DanceTheaterFancyPanel:
	message DanceTheater_Johto_DanceTheaterFancyPanelText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

DanceTheater_Johto_SurfGuyNeverLeftAScratchText:
	.string "Not only are the\n"
	.string "KIMONO GIRLS great"
	.string "\pdancers, they're\n"
	.string "also skilled at\l"
	.string "POKéMON."
	.string "\pI always challenge\n"
	.string "them, but I've"
	.string "\pnever even left a\n"
	.string "scratch…$"

DanceTheater_Johto_SurfGuyLadGiftText:
	.string "Lad! If you can\n"
	.string "defeat all the"
	.string "\pKIMONO GIRLS, I'll\n"
	.string "give you a gift.$"

DanceTheater_Johto_SurfGuyLassieGiftText:
	.string "Lassie, if you can\n"
	.string "defeat all the"
	.string "\pKIMONO GIRLS, I'll\n"
	.string "give you a gift.$"

DanceTheater_Johto_SurfGuyLikeADanceText:
	.string "The way you bat-\n"
	.string "tled, it was like\l"
	.string "watching a dance."
	.string "\pIt was a rare\n"
	.string "treat to see!"
	.string "\pI want you to have\n"
	.string "this. Don't worry\l"
	.string "--take it!$"

DanceTheater_Johto_SurfGuyElegantKimonoGirlsText:
	.string "I wish my POKéMON\n"
	.string "were as elegant as\l"
	.string "the KIMONO GIRLS…$"

DanceTheater_Johto_RhydonText:
	.string "RHYDON: Gugooh\n"
	.string "gugogooh!$"

DanceTheater_Johto_DanceTheaterCooltrainerMText:
	.string "That man's always\n"
	.string "with his RHYDON."
	.string "\pSays he wants a\n"
	.string "POKéMON that can\l"
	.string "SURF and dance."
	.string "\pIs he trying to\n"
	.string "make a synchro-\l"
	.string "nized swimming\l"
	.string "POKéMON?$"

DanceTheater_Johto_DanceTheaterGrannyText:
	.string "The KIMONO GIRLS\n"
	.string "are so beautiful…"
	.string "\pBut they have to\n"
	.string "go through rigor-\l"
	.string "ous training."
	.string "\pAnd they have to\n"
	.string "learn to follow"
	.string "\pcustoms before ap-\n"
	.string "pearing in public."
	.string "\pBut if you love\n"
	.string "something, any-\l"
	.string "thing is possible.$"

DanceTheater_Johto_DanceTheaterFancyPanelText:
	.string "It's a fancy panel\n"
	.string "that's decorated\l"
	.string "with flowers.$"
