FastShipCabins_SW_SSW_NW_Johto_MapScripts::
	.byte 0

FastShipCabins_SW_SSW_NW_Johto_FastShipBed_Entry::
	lockall
	goto FastShipCabins_SW_SSW_NW_Johto_FastShipBed

FastShipCabins_SW_SSW_NW_Johto_FastShipCabinsNorthwestCabinTrashcan_Entry::
	lockall
	goto FastShipCabins_SW_SSW_NW_Johto_FastShipCabinsNorthwestCabinTrashcan


FastShipCabins_SW_SSW_NW_Johto_FastShipBed:
	message FastShipCabins_SW_SSW_NW_Johto_FastShipBedText1
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: special FadeOutToBlack
	goto Johto_EventScript_Unimplemented

FastShipCabins_SW_SSW_NW_Johto_FastShipCabinsNorthwestCabinTrashcan:
	goto Johto_Std_TrashCanScript

FastShipCabins_SW_SSW_NW_Johto_FastShipBedText1:
	.string "A comfy bed!\n"
	.string "Time to sleep…$"
