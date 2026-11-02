SilverCaveRoom3_Johto_MapScripts::
	.byte 0

SilverCaveRoom3_Johto_Red_Entry::
	lockall
	goto SilverCaveRoom3_Johto_Red


SilverCaveRoom3_Johto_Red:
	fadeoutbgm 4
	faceplayer
	message SilverCaveRoom3_Johto_RedSeenText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext RedWinLossText, RedWinLossText
	goto Johto_EventScript_Unimplemented

SilverCaveRoom3_Johto_RedSeenText:
	.string "<……>\n"
	.string "<……>$"
