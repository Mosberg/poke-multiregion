Route10South_Johto_MapScripts::
	.byte 0

Route10South_Johto_Route10Sign_Entry::
	lockall
	goto Route10South_Johto_Route10Sign


Route10South_Johto_Route10Sign:
	message Route10South_Johto_Route10SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route10South_Johto_Route10SignText:
	.string "ROUTE 10"
	.string "\pCERULEAN CITY -\n"
	.string "LAVENDER TOWN$"
