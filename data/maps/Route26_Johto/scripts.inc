Route26_Johto_MapScripts::
	.byte 0

Route26_Johto_Route26FruitTree_Entry::
	lockall
	goto Route26_Johto_Route26FruitTree

Route26_Johto_Route26Sign_Entry::
	lockall
	goto Route26_Johto_Route26Sign


Route26_Johto_Route26Sign:
	message Route26_Johto_Route26SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route26_Johto_Route26FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_26
	goto Johto_EventScript_Unimplemented

Route26_Johto_Route26SignText:
	.string "ROUTE 26"
	.string "\pPOKéMON LEAGUE\n"
	.string "RECEPTION GATE$"
