Route15_Johto_MapScripts::
	.byte 0

Route15_Johto_Route15Sign_Entry::
	lockall
	goto Route15_Johto_Route15Sign


Route15_Johto_Route15Sign:
	message Route15_Johto_Route15SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route15_Johto_Route15SignText:
	.string "ROUTE 15"
	.string "\pFUCHSIA CITY -\n"
	.string "LAVENDER TOWN$"
