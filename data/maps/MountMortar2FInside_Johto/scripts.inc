MountMortar2FInside_Johto_MapScripts::
	.byte 0



MountMortar2FInside_Johto_TrainerSupernerdHugh::
	trainerbattle_single TRAINER_JOHTO_SUPER_NERD_HUGH, MountMortar2FInside_Johto_SupernerdHughSeenText, MountMortar2FInside_Johto_SupernerdHughBeatenText
	setflag FLAG_JOHTO_BEAT_SUPER_NERD_HUGH
	lock
	faceplayer
	goto MountMortar2FInside_Johto_TrainerSupernerdHugh_Script

MountMortar2FInside_Johto_TrainerSupernerdHugh_Script:
	message MountMortar2FInside_Johto_SupernerdHughAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

MountMortar2FInside_Johto_SupernerdHughSeenText:
	.string "Yo! MARKUS!$"

MountMortar2FInside_Johto_SupernerdHughBeatenText:
	.string "Sorry, my mistake.$"

MountMortar2FInside_Johto_SupernerdHughAfterBattleText:
	.string "I'm investigating\n"
	.string "MT.MORTAR, but my\l"
	.string "pal's gone AWOL."
	.string "\pHave you seen a\n"
	.string "trainer who has a"
	.string "\pSLOWPOKE that can\n"
	.string "use STRENGTH?$"
