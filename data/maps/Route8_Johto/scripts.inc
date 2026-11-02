Route8_Johto_MapScripts::
	.byte 0

Route8_Johto_Route8FruitTree_Entry::
	lockall
	goto Route8_Johto_Route8FruitTree

Route8_Johto_Route8UndergroundPathSign_Entry::
	lockall
	goto Route8_Johto_Route8UndergroundPathSign

Route8_Johto_Route8LockedDoor_Entry::
	lockall
	goto Route8_Johto_Route8LockedDoor


Route8_Johto_Route8LockedDoor:
	message Route8_Johto_Route8LockedDoorText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route8_Johto_Route8UndergroundPathSign:
	message Route8_Johto_Route8UndergroundPathSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route8_Johto_Route8FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_8
	goto Johto_EventScript_Unimplemented

Route8_Johto_Route8LockedDoorText:
	.string "It's locked…$"

Route8_Johto_Route8UndergroundPathSignText:
	.string "The flyer's torn."
	.string "\pIt's impossible to\n"
	.string "read…$"
