FastShipCabins_NNW_NNE_NE_Johto_MapScripts::
	.byte 0

FastShipCabins_NNW_NNE_NE_Johto_FastShipLazySailorScript_Entry::
	lockall
	goto FastShipCabins_NNW_NNE_NE_Johto_FastShipLazySailorScript

FastShipCabins_NNW_NNE_NE_Johto_FastShipCabins_NNW_NNE_NETrashcan_Entry::
	lockall
	goto FastShipCabins_NNW_NNE_NE_Johto_FastShipCabins_NNW_NNE_NETrashcan


FastShipCabins_NNW_NNE_NE_Johto_FastShipLazySailorScript:
	playbgm MUS_DUMMY, FALSE
	faceplayer
	message FastShipCabins_NNW_NNE_NE_Johto_SailorStanlySeenText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext SailorStanlyBeatenText, 0
	goto Johto_EventScript_Unimplemented

FastShipCabins_NNW_NNE_NE_Johto_FastShipCabins_NNW_NNE_NETrashcan:
	goto Johto_Std_TrashCanScript

FastShipCabins_NNW_NNE_NE_Johto_SailorStanlySeenText:
	.string "Yeah, I'm a sail-\n"
	.string "or, all right."
	.string "\pI wasn't goofing\n"
	.string "off!"
	.string "\pThis cabin was\n"
	.string "vacant, so I just\l"
	.string "took a quick nap!"
	.string "\pAh, forget it!\n"
	.string "Let's battle!$"
