FastShipB1F_Johto_MapScripts::
	.byte 0

FastShipB1F_Johto_FastShipB1FSailorScript_Entry::
	lockall
	goto FastShipB1F_Johto_FastShipB1FSailorScript

FastShipB1F_Johto_FastShipB1FTrashcan_Entry::
	lockall
	goto FastShipB1F_Johto_FastShipB1FTrashcan

FastShipB1F_Johto_FastShipB1FSailorBlocksLeft_Entry::
	lockall
	goto FastShipB1F_Johto_FastShipB1FSailorBlocksLeft

FastShipB1F_Johto_FastShipB1FSailorBlocksRight_Entry::
	lockall
	goto FastShipB1F_Johto_FastShipB1FSailorBlocksRight


FastShipB1F_Johto_FastShipB1FSailorBlocksLeft:
	goto_if_set FLAG_JOHTO_FAST_SHIP_B1F_SAILOR_RIGHT, FastShipB1F_Johto_FastShipB1FAlreadyBlocked
	applymovement 2, FastShipB1F_Johto_FastShipB1FSailorBlocksLeftMovement
	waitmovement 2
	setobjectxyperm 1, 30, 6
	clearflag FLAG_JOHTO_FAST_SHIP_B1F_SAILOR_LEFT
	addobject 1
	delay 5
	removeobject 2
	releaseall
	end

FastShipB1F_Johto_FastShipB1FSailorBlocksRight:
	goto_if_set FLAG_JOHTO_FAST_SHIP_B1F_SAILOR_LEFT, FastShipB1F_Johto_FastShipB1FAlreadyBlocked
	applymovement 1, FastShipB1F_Johto_FastShipB1FSailorBlocksRightMovement
	waitmovement 1
	setobjectxyperm 2, 31, 6
	clearflag FLAG_JOHTO_FAST_SHIP_B1F_SAILOR_RIGHT
	addobject 2
	delay 5
	removeobject 1
	releaseall
	end

FastShipB1F_Johto_FastShipB1FAlreadyBlocked:
	releaseall
	end

FastShipB1F_Johto_FastShipB1FSailorScript:
	faceplayer
	goto_if_set FLAG_JOHTO_FAST_SHIP_FIRST_TIME, FastShipB1F_Johto_FastShipB1FSailorScript_FirstTime
	goto_if_set FLAG_JOHTO_FAST_SHIP_LAZY_SAILOR, FastShipB1F_Johto_FastShipB1FSailorScript_LazySailor
	goto_if_set FLAG_JOHTO_FAST_SHIP_INFORMED_ABOUT_LAZY_SAILOR, FastShipB1F_Johto_FastShipB1FSailorScript_AlreadyInformed
	message FastShipB1F_Johto_FastShipB1FOnDutySailorText
	waitmessage
	waitbuttonpress
	closemessage
	setflag FLAG_JOHTO_FAST_SHIP_INFORMED_ABOUT_LAZY_SAILOR
	clearflag FLAG_JOHTO_FAST_SHIP_CABINS_NNW_NNE_NE_SAILOR
	releaseall
	end

FastShipB1F_Johto_FastShipB1FSailorScript_AlreadyInformed:
	message FastShipB1F_Johto_FastShipB1FOnDutySailorRefusedText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FastShipB1F_Johto_FastShipB1FSailorScript_LazySailor:
	message FastShipB1F_Johto_FastShipB1FOnDutySailorThanksText
	waitmessage
	goto_if_unset FLAG_JOHTO_FAST_SHIP_FOUND_GIRL, FastShipB1F_Johto_FastShipB1FSailorScript_NotFoundGirl
	waitbuttonpress
	closemessage
	releaseall
	end

FastShipB1F_Johto_FastShipB1FSailorScript_NotFoundGirl:
	waitbuttonpress
	message FastShipB1F_Johto_FastShipB1FOnDutySailorSawLittleGirlText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FastShipB1F_Johto_FastShipB1FSailorScript_FirstTime:
	message FastShipB1F_Johto_FastShipB1FOnDutySailorDirectionsText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

FastShipB1F_Johto_FastShipB1FTrashcan:
	goto Johto_Std_TrashCanScript

FastShipB1F_Johto_FastShipB1FSailorBlocksRightMovement:
	lock_facing_direction
	walk_fast_right
	unlock_facing_direction
	face_down
	step_end

FastShipB1F_Johto_FastShipB1FSailorBlocksLeftMovement:
	lock_facing_direction
	walk_fast_left
	unlock_facing_direction
	face_down
	step_end

FastShipB1F_Johto_FastShipB1FOnDutySailorText:
	.string "Hey, kid. Could I\n"
	.string "get you to look\l"
	.string "for my buddy?"
	.string "\pHe's goofing off\n"
	.string "somewhere, that\l"
	.string "lazy bum!"
	.string "\pI want to go find\n"
	.string "him, but I'm on\l"
	.string "duty right now.$"

FastShipB1F_Johto_FastShipB1FOnDutySailorRefusedText:
	.string "Oh, gee…"
	.string "\pThe CAPTAIN will\n"
	.string "be furious…$"

FastShipB1F_Johto_FastShipB1FOnDutySailorThanksText:
	.string "Thanks, kid!\n"
	.string "I chewed him out"
	.string "\pgood so he'll quit\n"
	.string "slacking off!$"

FastShipB1F_Johto_FastShipB1FOnDutySailorSawLittleGirlText:
	.string "A little girl?"
	.string "\pI may have seen\n"
	.string "her go by here.$"

FastShipB1F_Johto_FastShipB1FOnDutySailorDirectionsText:
	.string "The dining room is\n"
	.string "up ahead."
	.string "\pThe stairs at the\n"
	.string "end lead to the\l"
	.string "CAPTAIN's cabin.$"
