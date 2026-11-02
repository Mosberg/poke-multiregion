Route18_Johto_MapScripts::
	.byte 0

Route18_Johto_Route18Sign_Entry::
	lockall
	goto Route18_Johto_Route18Sign


Route18_Johto_Route18Sign:
	message Route18_Johto_Route18SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route18_Johto_Route18SignText:
	.string "ROUTE 18"
	.string "\pCELADON CITY -\n"
	.string "FUCHSIA CITY$"
