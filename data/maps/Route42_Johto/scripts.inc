Route42_Johto_MapScripts::
	.byte 0

Route42_Johto_Route42FruitTree1_Entry::
	lockall
	goto Route42_Johto_Route42FruitTree1

Route42_Johto_Route42FruitTree2_Entry::
	lockall
	goto Route42_Johto_Route42FruitTree2

Route42_Johto_Route42FruitTree3_Entry::
	lockall
	goto Route42_Johto_Route42FruitTree3

Route42_Johto_Route42Sign1_Entry::
	lockall
	goto Route42_Johto_Route42Sign1

Route42_Johto_MtMortarSign1_Entry::
	lockall
	goto Route42_Johto_MtMortarSign1

Route42_Johto_MtMortarSign2_Entry::
	lockall
	goto Route42_Johto_MtMortarSign2

Route42_Johto_Route42Sign2_Entry::
	lockall
	goto Route42_Johto_Route42Sign2

Route42_Johto_Route42SuicuneScript_Entry::
	lockall
	goto Route42_Johto_Route42SuicuneScript


Route42_Johto_Route42SuicuneScript:
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Emote_exclamation_mark
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 15
	@ TODO unsupported: playsound SFX_WARP_FROM
	goto Johto_EventScript_Unimplemented

Route42_Johto_Route42Sign1:
	message Route42_Johto_Route42Sign1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route42_Johto_MtMortarSign1:
	message Route42_Johto_MtMortarSign1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route42_Johto_MtMortarSign2:
	message Route42_Johto_MtMortarSign2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route42_Johto_Route42Sign2:
	message Route42_Johto_Route42Sign2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route42_Johto_Route42FruitTree1:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_42_1
	goto Johto_EventScript_Unimplemented

Route42_Johto_Route42FruitTree2:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_42_2
	goto Johto_EventScript_Unimplemented

Route42_Johto_Route42FruitTree3:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_42_3
	goto Johto_EventScript_Unimplemented

Route42_Johto_Route42Sign1Text:
	.string "ROUTE 42"
	.string "\pECRUTEAK CITY -\n"
	.string "MAHOGANY TOWN$"

Route42_Johto_MtMortarSign1Text:
	.string "MT.MORTAR"
	.string "\pWATERFALL CAVE\n"
	.string "INSIDE$"

Route42_Johto_MtMortarSign2Text:
	.string "MT.MORTAR"
	.string "\pWATERFALL CAVE\n"
	.string "INSIDE$"

Route42_Johto_Route42Sign2Text:
	.string "ROUTE 42"
	.string "\pECRUTEAK CITY -\n"
	.string "MAHOGANY TOWN$"
