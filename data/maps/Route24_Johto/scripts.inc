Route24_Johto_MapScripts::
	.byte 0

Route24_Johto_Route24RocketScript_Entry::
	lockall
	goto Route24_Johto_Route24RocketScript


Route24_Johto_Route24RocketScript:
	faceplayer
	playbgm MUS_DUMMY, FALSE
	message Route24_Johto_Route24RocketSeenText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext Route24RocketBeatenText, -1
	goto Johto_EventScript_Unimplemented

Route24_Johto_Route24RocketSeenText:
	.string "Hey, kid! Me am a\n"
	.string "TEAM ROCKET member\l"
	.string "kind of guy!"
	.string "\pCome from another\n"
	.string "country, a trainer\l"
	.string "number one, me!"
	.string "\pThink I did, if\n"
	.string "stop the energy,"
	.string "\pbe big panic for\n"
	.string "here people!"
	.string "\pSecret it is my\n"
	.string "mission, so tell\l"
	.string "you I not!"
	.string "\pBut! If win you do\n"
	.string "versus me, a man I"
	.string "\pbe and mine secret\n"
	.string "to you I tell."
	.string "\pHey, kid! Battle\n"
	.string "begin we do!$"
