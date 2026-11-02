Route33_Johto_MapScripts::
	.byte 0

Route33_Johto_Route33LassScript_Entry::
	lockall
	goto Route33_Johto_Route33LassScript

Route33_Johto_Route33FruitTree_Entry::
	lockall
	goto Route33_Johto_Route33FruitTree

Route33_Johto_Route33Sign_Entry::
	lockall
	goto Route33_Johto_Route33Sign


Route33_Johto_Route33LassScript:
	faceplayer
	message Route33_Johto_Route33LassText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route33_Johto_Route33Sign:
	message Route33_Johto_Route33SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route33_Johto_Route33FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_33
	goto Johto_EventScript_Unimplemented

Route33_Johto_Route33LassText:
	.string "Pant, pant…"
	.string "\pI finally got\n"
	.string "through that cave."
	.string "\pIt was much bigger\n"
	.string "than I'd expected."
	.string "\pI got too tired to\n"
	.string "explore the whole"
	.string "\pthing, so I came\n"
	.string "outside.$"

Route33_Johto_Route33SignText:
	.string "ROUTE 33$"
