Route46_Johto_MapScripts::
	.byte 0

Route46_Johto_Route46FruitTree1_Entry::
	lockall
	goto Route46_Johto_Route46FruitTree1

Route46_Johto_Route46FruitTree2_Entry::
	lockall
	goto Route46_Johto_Route46FruitTree2

Route46_Johto_Route46Sign_Entry::
	lockall
	goto Route46_Johto_Route46Sign


Route46_Johto_Route46Sign:
	message Route46_Johto_Route46SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route46_Johto_Route46FruitTree1:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_46_1
	goto Johto_EventScript_Unimplemented

Route46_Johto_Route46FruitTree2:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_46_2
	goto Johto_EventScript_Unimplemented

Route46_Johto_Route46SignText:
	.string "ROUTE 46\n"
	.string "MOUNTAIN RD. AHEAD$"
