LakeOfRageHiddenPowerHouse_Johto_MapScripts::
	.byte 0

LakeOfRageHiddenPowerHouse_Johto_HiddenPowerGuy_Entry::
	lockall
	goto LakeOfRageHiddenPowerHouse_Johto_HiddenPowerGuy

LakeOfRageHiddenPowerHouse_Johto_HiddenPowerHouseBookshelf_Entry::
	lockall
	goto LakeOfRageHiddenPowerHouse_Johto_HiddenPowerHouseBookshelf


LakeOfRageHiddenPowerHouse_Johto_HiddenPowerGuy:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_TM10_HIDDEN_POWER, LakeOfRageHiddenPowerHouse_Johto_HiddenPowerGuy_AlreadyGotItem
	message LakeOfRageHiddenPowerHouse_Johto_HiddenPowerGuyText1
	waitmessage
	waitbuttonpress
	@ TODO unsupported: verbosegiveitem TM_HIDDEN_POWER
	goto Johto_EventScript_Unimplemented

LakeOfRageHiddenPowerHouse_Johto_HiddenPowerGuy_AlreadyGotItem:
	message LakeOfRageHiddenPowerHouse_Johto_HiddenPowerGuyText3
	waitmessage
	waitbuttonpress

LakeOfRageHiddenPowerHouse_Johto_HiddenPowerGuy_Done:
	closemessage
	releaseall
	end

LakeOfRageHiddenPowerHouse_Johto_HiddenPowerHouseBookshelf:
	goto Johto_Std_DifficultBookshelfScript

LakeOfRageHiddenPowerHouse_Johto_HiddenPowerGuyText1:
	.string "…You have strayed\n"
	.string "far…"
	.string "\pHere I have medi-\n"
	.string "tated. Inside me,"
	.string "\pa new power has\n"
	.string "been awakened."
	.string "\pLet me share my\n"
	.string "power with your"
	.string "\pPOKéMON.\n"
	.string "Take this, child.$"

LakeOfRageHiddenPowerHouse_Johto_HiddenPowerGuyText3:
	.string "I am meditating…$"
