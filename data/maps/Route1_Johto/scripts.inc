Route1_Johto_MapScripts::
	.byte 0

Route1_Johto_Route1FruitTree_Entry::
	lockall
	goto Route1_Johto_Route1FruitTree

Route1_Johto_Route1Sign_Entry::
	lockall
	goto Route1_Johto_Route1Sign


Route1_Johto_Route1Sign:
	message Route1_Johto_Route1SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route1_Johto_Route1FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_1
	goto Johto_EventScript_Unimplemented

Route1_Johto_Route1SignText:
	.string "ROUTE 1"
	.string "\pPALLET TOWN -\n"
	.string "VIRIDIAN CITY$"
