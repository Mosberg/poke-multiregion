Route26HealHouse_Johto_MapScripts::
	.byte 0

Route26HealHouse_Johto_Route26HealHouseTeacherScript_Entry::
	lockall
	goto Route26HealHouse_Johto_Route26HealHouseTeacherScript

Route26HealHouse_Johto_Route26HealHouseBookshelf_Entry::
	lockall
	goto Route26HealHouse_Johto_Route26HealHouseBookshelf


Route26HealHouse_Johto_Route26HealHouseTeacherScript:
	faceplayer
	message Route26HealHouse_Johto_Route26HealHouseRestAWhileText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: special FadeOutToBlack
	goto Johto_EventScript_Unimplemented

Route26HealHouse_Johto_Route26HealHouseBookshelf:
	goto Johto_Std_PictureBookshelfScript

Route26HealHouse_Johto_Route26HealHouseRestAWhileText:
	.string "Your POKéMON look\n"
	.string "a little tired."
	.string "\pYou should rest\n"
	.string "them a while.$"
