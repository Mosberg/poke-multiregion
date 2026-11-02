Route11_Johto_MapScripts::
	.byte 0

Route11_Johto_Route11FruitTree_Entry::
	lockall
	goto Route11_Johto_Route11FruitTree

Route11_Johto_Route11Sign_Entry::
	lockall
	goto Route11_Johto_Route11Sign


Route11_Johto_Route11Sign:
	message Route11_Johto_Route11SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route11_Johto_Route11FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_11
	goto Johto_EventScript_Unimplemented

Route11_Johto_Route11SignText:
	.string "ROUTE 11$"
