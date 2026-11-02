Route9_Johto_MapScripts::
	.byte 0

Route9_Johto_Route9Sign_Entry::
	lockall
	goto Route9_Johto_Route9Sign


Route9_Johto_Route9Sign:
	message Route9_Johto_Route9SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route9_Johto_Route9SignText:
	.string "ROUTE 9"
	.string "\pCERULEAN CITY -\n"
	.string "ROCK TUNNEL$"
