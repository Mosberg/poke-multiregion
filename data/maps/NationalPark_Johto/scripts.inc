NationalPark_Johto_MapScripts::
	.byte 0

NationalPark_Johto_NationalParkLassScript_Entry::
	lockall
	goto NationalPark_Johto_NationalParkLassScript

NationalPark_Johto_NationalParkPokefanFScript_Entry::
	lockall
	goto NationalPark_Johto_NationalParkPokefanFScript

NationalPark_Johto_NationalParkTeacher1Script_Entry::
	lockall
	goto NationalPark_Johto_NationalParkTeacher1Script

NationalPark_Johto_NationalParkYoungster1Script_Entry::
	lockall
	goto NationalPark_Johto_NationalParkYoungster1Script

NationalPark_Johto_NationalParkYoungster2Script_Entry::
	lockall
	goto NationalPark_Johto_NationalParkYoungster2Script

NationalPark_Johto_NationalParkTeacher2Script_Entry::
	lockall
	goto NationalPark_Johto_NationalParkTeacher2Script

NationalPark_Johto_NationalParkPersian_Entry::
	lockall
	goto NationalPark_Johto_NationalParkPersian

NationalPark_Johto_NationalParkGameboyKidScript_Entry::
	lockall
	goto NationalPark_Johto_NationalParkGameboyKidScript

NationalPark_Johto_NationalParkRelaxationSquareSign_Entry::
	lockall
	goto NationalPark_Johto_NationalParkRelaxationSquareSign

NationalPark_Johto_NationalParkBattleNoticeSign_Entry::
	lockall
	goto NationalPark_Johto_NationalParkBattleNoticeSign

NationalPark_Johto_NationalParkTrainerTipsSign_Entry::
	lockall
	goto NationalPark_Johto_NationalParkTrainerTipsSign


NationalPark_Johto_NationalParkLassScript:
	faceplayer
	message NationalPark_Johto_NationalParkLassText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

NationalPark_Johto_NationalParkPokefanFScript:
	faceplayer
	message NationalPark_Johto_NationalParkPokefanFText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

NationalPark_Johto_NationalParkTeacher1Script:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_QUICK_CLAW, NationalPark_Johto_NationalParkTeacher1Script_GotQuickClaw
	message NationalPark_Johto_NationalParkTeacher1Text
	waitmessage
	waitbuttonpress
	giveitem ITEM_QUICK_CLAW
	goto_if_eq VAR_RESULT, 0, NationalPark_Johto_NationalParkTeacher1Script_NoRoom
	setflag FLAG_JOHTO_GOT_QUICK_CLAW

NationalPark_Johto_NationalParkTeacher1Script_GotQuickClaw:
	message NationalPark_Johto_NationalParkTeacher1Text_GotQuickClaw
	waitmessage
	waitbuttonpress

NationalPark_Johto_NationalParkTeacher1Script_NoRoom:
	closemessage
	releaseall
	end

NationalPark_Johto_NationalParkYoungster1Script:
	faceplayer
	message NationalPark_Johto_NationalParkYoungster1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

NationalPark_Johto_NationalParkYoungster2Script:
	faceplayer
	message NationalPark_Johto_NationalParkYoungster2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

NationalPark_Johto_NationalParkTeacher2Script:
	faceplayer
	message NationalPark_Johto_NationalParkTeacher2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

NationalPark_Johto_NationalParkPersian:
	faceplayer
	message NationalPark_Johto_NationalParkPersianText
	waitmessage
	playmoncry SPECIES_PERSIAN, CRY_MODE_NORMAL
	waitmoncry
	waitbuttonpress
	closemessage
	releaseall
	end

NationalPark_Johto_NationalParkGameboyKidScript:
	faceplayer
	message NationalPark_Johto_NationalParkGameboyKidText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement 13, Johto_Movement_Face_Down
	waitmovement 13
	releaseall
	end

NationalPark_Johto_NationalParkRelaxationSquareSign:
	message NationalPark_Johto_NationalParkRelaxationSquareText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

NationalPark_Johto_NationalParkBattleNoticeSign:
	message NationalPark_Johto_NationalParkBattleNoticeText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

NationalPark_Johto_NationalParkTrainerTipsSign:
	message NationalPark_Johto_NationalParkTrainerTipsText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

NationalPark_Johto_NationalParkLassText:
	.string "Look! Check out my\n"
	.string "bag!"
	.string "\pI printed out my\n"
	.string "favorites from my"
	.string "\pPOKéDEX and stuck\n"
	.string "them on my bag.$"

NationalPark_Johto_NationalParkPokefanFText:
	.string "This is MAIL I got\n"
	.string "from my daughter.\l"
	.string "It cheers me up.$"

NationalPark_Johto_NationalParkTeacher1Text:
	.string "Pay attention,\n"
	.string "please!"
	.string "\p…Oops, I have to\n"
	.string "quit thinking like"
	.string "\pa teacher all the\n"
	.string "time."
	.string "\pYou must be a\n"
	.string "POKéMON trainer."
	.string "\pSince you're work-\n"
	.string "ing so hard, I"
	.string "\pwant you to have\n"
	.string "this.$"

NationalPark_Johto_NationalParkTeacher1Text_GotQuickClaw:
	.string "Let a POKéMON hold\n"
	.string "that QUICK CLAW."
	.string "\pSometimes it will\n"
	.string "strike first\l"
	.string "during battle.$"

NationalPark_Johto_NationalParkYoungster1Text:
	.string "I'm playing with\n"
	.string "stickers I printed\l"
	.string "from my POKéDEX.$"

NationalPark_Johto_NationalParkYoungster2Text:
	.string "I get the other\n"
	.string "guy's POKéDEX\l"
	.string "sticker if I win.$"

NationalPark_Johto_NationalParkTeacher2Text:
	.string "I take walks in\n"
	.string "the PARK, but I"
	.string "\pnever go into the\n"
	.string "grass."
	.string "\pTrainers always\n"
	.string "want to battle…$"

NationalPark_Johto_NationalParkPersianText:
	.string "PERSIAN: Fufushaa!$"

NationalPark_Johto_NationalParkGameboyKidText:
	.string "I'm printing out\n"
	.string "my POKéDEX."
	.string "\pYou can also print\n"
	.string "out stuff like"
	.string "\pMAIL and your PC\n"
	.string "BOXES.$"

NationalPark_Johto_NationalParkRelaxationSquareText:
	.string "RELAXATION SQUARE\n"
	.string "NATIONAL PARK$"

NationalPark_Johto_NationalParkBattleNoticeText:
	.string "What is this\n"
	.string "notice?"
	.string "\pPlease battle only\n"
	.string "in the grass."
	.string "\pNATIONAL PARK\n"
	.string "WARDEN'S OFFICE$"

NationalPark_Johto_NationalParkTrainerTipsText:
	.string "TRAINER TIPS"
	.string "\pPrint out MAIL by\n"
	.string "opening it then\l"
	.string "pressing START.$"
