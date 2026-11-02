Route2_Johto_MapScripts::
	.byte 0

Route2_Johto_Route2FruitTree_Entry::
	lockall
	goto Route2_Johto_Route2FruitTree

Route2_Johto_Route2Sign_Entry::
	lockall
	goto Route2_Johto_Route2Sign

Route2_Johto_Route2DiglettsCaveSign_Entry::
	lockall
	goto Route2_Johto_Route2DiglettsCaveSign


Route2_Johto_Route2Sign:
	message Route2_Johto_Route2SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route2_Johto_Route2DiglettsCaveSign:
	message Route2_Johto_Route2DiglettsCaveSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route2_Johto_Route2FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_2
	goto Johto_EventScript_Unimplemented

Route2_Johto_Route2SignText:
	.string "ROUTE 2"
	.string "\pVIRIDIAN CITY -\n"
	.string "PEWTER CITY$"

Route2_Johto_Route2DiglettsCaveSignText:
	.string "DIGLETT'S CAVE$"
