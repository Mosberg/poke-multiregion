CopycatsHouse2F_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CopycatsHouse2F_Johto_OnTransition
	.byte 0

CopycatsHouse2F_Johto_OnTransition:
	call CopycatsHouse2F_Johto_CopycatsHouse2FWhichGenderCallback_Sub
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
	@ TODO unsupported: special LoadUsedSpritesGFX
	goto Johto_EventScript_Unimplemented

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

CopycatsHouse2F_Johto_CopycatsHouse2FWhichGenderCallback_Sub:
	goto_if_set FLAG_JOHTO_ENGINE_PLAYER_IS_FEMALE, CopycatsHouse2F_Johto_CopycatsHouse2FWhichGenderCallback_Female_Sub
	removeobject 6
	clearflag FLAG_JOHTO_COPYCAT_1
	addobject 1
	goto CopycatsHouse2F_Johto_CopycatsHouse2FWhichGenderCallback_Done_Sub

CopycatsHouse2F_Johto_CopycatsHouse2FWhichGenderCallback_Female_Sub:
	removeobject 1
	clearflag FLAG_JOHTO_COPYCAT_2
	addobject 6

CopycatsHouse2F_Johto_CopycatsHouse2FWhichGenderCallback_Done_Sub:
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
