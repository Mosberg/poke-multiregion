Route6_Johto_MapScripts::
	.byte 0

Route6_Johto_Route6PokefanMScript_Entry::
	lockall
	goto Route6_Johto_Route6PokefanMScript

Route6_Johto_Route6UndergroundPathSign_Entry::
	lockall
	goto Route6_Johto_Route6UndergroundPathSign


Route6_Johto_Route6PokefanMScript:
	faceplayer
	message Route6_Johto_Route6PokefanMText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route6_Johto_Route6UndergroundPathSign:
	message Route6_Johto_Route6UndergroundPathSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route6_Johto_Route6PokefanMText:
	.string "The road is closed\n"
	.string "until the problem"
	.string "\pat the POWER PLANT\n"
	.string "is solved.$"

Route6_Johto_Route6UndergroundPathSignText:
	.string "UNDERGROUND PATH"
	.string "\pCERULEAN CITY -\n"
	.string "VERMILION CITY$"
