Route4_Johto_MapScripts::
	.byte 0

Route4_Johto_MtMoonSquareSign_Entry::
	lockall
	goto Route4_Johto_MtMoonSquareSign


Route4_Johto_MtMoonSquareSign:
	message Route4_Johto_MtMoonSquareSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route4_Johto_MtMoonSquareSignText:
	.string "MT.MOON SQUARE"
	.string "\pJust go up the\n"
	.string "stairs.$"
