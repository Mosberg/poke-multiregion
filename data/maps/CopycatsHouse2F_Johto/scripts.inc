CopycatsHouse2F_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CopycatsHouse2F_Johto_OnTransition
	.byte 0

CopycatsHouse2F_Johto_OnTransition:
	call CopycatsHouse2F_Johto_CopycatsHouse2FWhichGenderCallback_Cb
	end

CopycatsHouse2F_Johto_Copycat_Entry::
	lockall
	goto CopycatsHouse2F_Johto_Copycat

CopycatsHouse2F_Johto_CopycatsDodrio_Entry::
	lockall
	goto CopycatsHouse2F_Johto_CopycatsDodrio

CopycatsHouse2F_Johto_CopycatsHouse2FDoll_Entry::
	lockall
	goto CopycatsHouse2F_Johto_CopycatsHouse2FDoll

CopycatsHouse2F_Johto_CopycatsHouse2FBookshelf_Entry::
	lockall
	goto CopycatsHouse2F_Johto_CopycatsHouse2FBookshelf


CopycatsHouse2F_Johto_Copycat:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_PASS_FROM_COPYCAT, CopycatsHouse2F_Johto_Copycat_GotPass
	goto_if_set FLAG_JOHTO_RETURNED_LOST_ITEM_TO_COPYCAT, CopycatsHouse2F_Johto_Copycat_TryGivePassAgain
	@ TODO unsupported: checkitem LOST_ITEM
	goto Johto_EventScript_Unimplemented

CopycatsHouse2F_Johto_Copycat_TryGivePassAgain:

CopycatsHouse2F_Johto_Copycat_GivePass:
	message CopycatsHouse2F_Johto_CopycatText_GivePass
	waitmessage
	waitbuttonpress
	@ TODO unsupported: verbosegiveitem PASS
	goto Johto_EventScript_Unimplemented

CopycatsHouse2F_Johto_Copycat_GotPass:
	goto_if_set FLAG_JOHTO_ENGINE_PLAYER_IS_FEMALE, CopycatsHouse2F_Johto_Copycat_GotPass_Female_1
	applymovement 1, CopycatsHouse2F_Johto_CopycatSpinAroundMovementData
	waitmovement 1
	faceplayer
	goto CopycatsHouse2F_Johto_Copycat_GotPass_Merge_1

CopycatsHouse2F_Johto_Copycat_GotPass_Female_1:
	applymovement 6, CopycatsHouse2F_Johto_CopycatSpinAroundMovementData
	waitmovement 6
	faceplayer

CopycatsHouse2F_Johto_Copycat_GotPass_Merge_1:
	goto_if_set FLAG_JOHTO_ENGINE_PLAYER_IS_FEMALE, CopycatsHouse2F_Johto_Copycat_GotPass_Female_2
	message CopycatsHouse2F_Johto_CopycatText_Male_3
	waitmessage
	goto CopycatsHouse2F_Johto_Copycat_GotPass_Merge_2

CopycatsHouse2F_Johto_Copycat_GotPass_Female_2:
	message CopycatsHouse2F_Johto_CopycatText_Female_3
	waitmessage

CopycatsHouse2F_Johto_Copycat_GotPass_Merge_2:
	waitbuttonpress
	closemessage
	goto_if_set FLAG_JOHTO_ENGINE_PLAYER_IS_FEMALE, CopycatsHouse2F_Johto_Copycat_GotPass_Female_3
	applymovement 1, CopycatsHouse2F_Johto_CopycatSpinAroundMovementData
	waitmovement 1
	goto CopycatsHouse2F_Johto_Copycat_GotPass_Merge_3

CopycatsHouse2F_Johto_Copycat_GotPass_Female_3:
	applymovement 6, CopycatsHouse2F_Johto_CopycatSpinAroundMovementData
	waitmovement 6

CopycatsHouse2F_Johto_Copycat_GotPass_Merge_3:
	faceplayer
	message CopycatsHouse2F_Johto_CopycatText_ItsAScream
	waitmessage
	waitbuttonpress

CopycatsHouse2F_Johto_Copycat_Cancel:
	closemessage
	releaseall
	end

CopycatsHouse2F_Johto_CopycatsDodrio:
	message CopycatsHouse2F_Johto_CopycatsDodrioText1
	waitmessage
	playmoncry SPECIES_DODRIO, CRY_MODE_NORMAL
	waitmoncry
	waitbuttonpress
	message CopycatsHouse2F_Johto_CopycatsDodrioText2
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CopycatsHouse2F_Johto_CopycatsHouse2FDoll:
	message CopycatsHouse2F_Johto_CopycatsHouse2FDollText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CopycatsHouse2F_Johto_CopycatsHouse2FBookshelf:
	goto Johto_Std_PictureBookshelfScript

CopycatsHouse2F_Johto_CopycatsHouse2FWhichGenderCallback_Cb:
	goto_if_set FLAG_JOHTO_ENGINE_PLAYER_IS_FEMALE, CopycatsHouse2F_Johto_CopycatsHouse2FWhichGenderCallback_Female_Cb
	setflag FLAG_JOHTO_COPYCAT_2
	clearflag FLAG_JOHTO_COPYCAT_1
	goto CopycatsHouse2F_Johto_CopycatsHouse2FWhichGenderCallback_Done_Cb

CopycatsHouse2F_Johto_CopycatsHouse2FWhichGenderCallback_Female_Cb:
	setflag FLAG_JOHTO_COPYCAT_1
	clearflag FLAG_JOHTO_COPYCAT_2

CopycatsHouse2F_Johto_CopycatsHouse2FWhichGenderCallback_Done_Cb:
	return

CopycatsHouse2F_Johto_CopycatSpinAroundMovementData:
	face_down
	face_left
	face_up
	face_right
	face_down
	face_left
	face_up
	face_right
	face_down
	step_end

CopycatsHouse2F_Johto_CopycatText_GivePass:
	.string "OK. Here's the\n"
	.string "MAGNET TRAIN PASS\l"
	.string "like I promised!$"

CopycatsHouse2F_Johto_CopycatText_Male_3:
	.string "{PLAYER}: Hi!\n"
	.string "Thanks a lot for\l"
	.string "the rail PASS!"
	.string "\p{PLAYER}: Pardon?"
	.string "\p{PLAYER}: Is it\n"
	.string "that fun to mimic\l"
	.string "my every move?$"

CopycatsHouse2F_Johto_CopycatText_ItsAScream:
	.string "COPYCAT: You bet!\n"
	.string "It's a scream!$"

CopycatsHouse2F_Johto_CopycatText_Female_3:
	.string "{PLAYER}: Thank you\n"
	.string "for the rail PASS!"
	.string "\p{PLAYER}: …Pardon?"
	.string "\p{PLAYER}: Is it\n"
	.string "really that fun to"
	.string "\pcopy what I say\n"
	.string "and do?$"

CopycatsHouse2F_Johto_CopycatsDodrioText1:
	.string "DODRIO: Gii giii!$"

CopycatsHouse2F_Johto_CopycatsDodrioText2:
	.string "MIRROR, MIRROR ON\n"
	.string "THE WALL, WHO'S"
	.string "\pTHE FAIREST ONE OF\n"
	.string "ALL?$"

CopycatsHouse2F_Johto_CopycatsHouse2FDollText:
	.string "This is a rare\n"
	.string "POKéMON! Huh?"
	.string "\pIt's only a doll…$"
