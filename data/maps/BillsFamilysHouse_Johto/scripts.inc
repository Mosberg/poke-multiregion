BillsFamilysHouse_Johto_MapScripts::
	.byte 0

BillsFamilysHouse_Johto_BillScript_Entry::
	lockall
	goto BillsFamilysHouse_Johto_BillScript

BillsFamilysHouse_Johto_BillsMomScript_Entry::
	lockall
	goto BillsFamilysHouse_Johto_BillsMomScript

BillsFamilysHouse_Johto_BillsYoungerSisterScript_Entry::
	lockall
	goto BillsFamilysHouse_Johto_BillsYoungerSisterScript

BillsFamilysHouse_Johto_BillsHouseBookshelf2_Entry::
	lockall
	goto BillsFamilysHouse_Johto_BillsHouseBookshelf2

BillsFamilysHouse_Johto_BillsHouseBookshelf1_Entry::
	lockall
	goto BillsFamilysHouse_Johto_BillsHouseBookshelf1

BillsFamilysHouse_Johto_BillsHouseRadio_Entry::
	lockall
	goto BillsFamilysHouse_Johto_BillsHouseRadio


BillsFamilysHouse_Johto_BillScript:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_EEVEE, BillsFamilysHouse_Johto_BillScript_GotEevee
	message BillsFamilysHouse_Johto_BillTakeThisEeveeText
	waitmessage
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, 0, BillsFamilysHouse_Johto_BillScript_Refused
	message BillsFamilysHouse_Johto_BillImCountingOnYouText
	waitmessage
	waitbuttonpress
	waitse
	getpartysize
	@ TODO unsupported: ifequal PARTY_LENGTH, .NoRoom
	goto Johto_EventScript_Unimplemented

BillsFamilysHouse_Johto_BillScript_Refused:
	message BillsFamilysHouse_Johto_BillNoEeveeText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

BillsFamilysHouse_Johto_BillScript_GotEevee:
	message BillsFamilysHouse_Johto_BillPopWontWorkText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

BillsFamilysHouse_Johto_BillsMomScript:
	faceplayer
	goto_if_unset FLAG_JOHTO_MET_BILL, BillsFamilysHouse_Johto_BillsMomScript_HaventMetBill
	message BillsFamilysHouse_Johto_BillsMomText_BeforeEcruteak
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

BillsFamilysHouse_Johto_BillsMomScript_HaventMetBill:
	message BillsFamilysHouse_Johto_BillsMomText_AfterEcruteak
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

BillsFamilysHouse_Johto_BillsYoungerSisterScript:
	faceplayer
	@ TODO unsupported: checkcellnum PHONE_BILL
	goto Johto_EventScript_Unimplemented

BillsFamilysHouse_Johto_BillsHouseBookshelf1:
	goto Johto_Std_PictureBookshelfScript

BillsFamilysHouse_Johto_BillsHouseBookshelf2:
	goto Johto_Std_MagazineBookshelfScript

BillsFamilysHouse_Johto_BillsHouseRadio:
	goto Johto_Std_Radio2Script

BillsFamilysHouse_Johto_BillTakeThisEeveeText:
	.string "BILL: Hi, {PLAYER}!\n"
	.string "Do us a favor and\l"
	.string "take this EEVEE."
	.string "\pIt came over when\n"
	.string "I was adjusting\l"
	.string "the TIME CAPSULE."
	.string "\pSomeone has to\n"
	.string "take care of it,"
	.string "\pbut I don't like\n"
	.string "being outside."
	.string "\pCan I count on you\n"
	.string "to play with it,\l"
	.string "{PLAYER}?$"

BillsFamilysHouse_Johto_BillImCountingOnYouText:
	.string "BILL: I knew you'd\n"
	.string "come through!"
	.string "\pWay to go! You're\n"
	.string "the real deal!"
	.string "\pOK, I'm counting\n"
	.string "on you."
	.string "\pTake good care of\n"
	.string "it!$"

BillsFamilysHouse_Johto_BillNoEeveeText:
	.string "Oh… Now what to\n"
	.string "do?$"

BillsFamilysHouse_Johto_BillPopWontWorkText:
	.string "BILL: My pop, he\n"
	.string "won't work. All he"
	.string "\pdoes is goof off\n"
	.string "all day long."
	.string "\pHe's getting to be\n"
	.string "a real headache…$"

BillsFamilysHouse_Johto_BillsMomText_BeforeEcruteak:
	.string "Oh, you collect\n"
	.string "POKéMON? My son\l"
	.string "BILL is an expert."
	.string "\pHe just got called\n"
	.string "to the POKéMON"
	.string "\pCENTER in ECRUTEAK\n"
	.string "CITY."
	.string "\pMy husband went\n"
	.string "off to the GAME"
	.string "\pCORNER without\n"
	.string "being called…$"

BillsFamilysHouse_Johto_BillsMomText_AfterEcruteak:
	.string "My husband was\n"
	.string "once known as a"
	.string "\pPOKéMANIAC.\n"
	.string "BILL must have"
	.string "\ptaken after his\n"
	.string "father.$"
