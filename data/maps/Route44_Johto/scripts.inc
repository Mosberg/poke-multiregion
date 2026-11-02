Route44_Johto_MapScripts::
	.byte 0

Route44_Johto_Route44FruitTree_Entry::
	lockall
	goto Route44_Johto_Route44FruitTree

Route44_Johto_Route44Sign1_Entry::
	lockall
	goto Route44_Johto_Route44Sign1

Route44_Johto_Route44Sign2_Entry::
	lockall
	goto Route44_Johto_Route44Sign2


Route44_Johto_Route44Sign1:
	message Route44_Johto_Route44Sign1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route44_Johto_Route44Sign2:
	message Route44_Johto_Route44Sign2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route44_Johto_Route44FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_44
	goto Johto_EventScript_Unimplemented

Route44_Johto_Route44Sign1Text:
	.string "ROUTE 44\n"
	.string "ICE PATH AHEAD$"

Route44_Johto_Route44Sign2Text:
	.string "ROUTE 44"
	.string "\pMAHOGANY TOWN -\n"
	.string "BLACKTHORN CITY$"
