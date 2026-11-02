Route12_Johto_MapScripts::
	.byte 0

Route12_Johto_Route12Sign_Entry::
	lockall
	goto Route12_Johto_Route12Sign

Route12_Johto_FishingSpotSign_Entry::
	lockall
	goto Route12_Johto_FishingSpotSign


Route12_Johto_Route12Sign:
	message Route12_Johto_Route12SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route12_Johto_FishingSpotSign:
	message Route12_Johto_FishingSpotSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route12_Johto_Route12SignText:
	.string "ROUTE 12"
	.string "\pNORTH TO LAVENDER\n"
	.string "TOWN$"

Route12_Johto_FishingSpotSignText:
	.string "FISHING SPOT$"
