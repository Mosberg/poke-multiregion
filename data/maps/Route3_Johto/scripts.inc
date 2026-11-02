Route3_Johto_MapScripts::
	.byte 0

Route3_Johto_Route3MtMoonSquareSign_Entry::
	lockall
	goto Route3_Johto_Route3MtMoonSquareSign


Route3_Johto_Route3MtMoonSquareSign:
	message Route3_Johto_Route3MtMoonSquareSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route3_Johto_Route3MtMoonSquareSignText:
	.string "MT.MOON SQUARE"
	.string "\pJust go up the\n"
	.string "stairs.$"
