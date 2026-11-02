BurnedTowerB1F_Johto_MapScripts::
	.byte 0

BurnedTowerB1F_Johto_BurnedTowerB1FBoulder_Entry::
	lockall
	goto BurnedTowerB1F_Johto_BurnedTowerB1FBoulder

BurnedTowerB1F_Johto_BurnedTowerB1FEusine_Entry::
	lockall
	goto BurnedTowerB1F_Johto_BurnedTowerB1FEusine

BurnedTowerB1F_Johto_ReleaseTheBeasts_Entry::
	lockall
	goto BurnedTowerB1F_Johto_ReleaseTheBeasts


BurnedTowerB1F_Johto_ReleaseTheBeasts:
	playbgm MUS_DUMMY, FALSE
	delay 30
	clearflag FLAG_JOHTO_BURNED_TOWER_B1F_BEASTS_1
	addobject 2
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Up
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 5
	removeobject 5
	delay 15
	playmoncry SPECIES_RAIKOU, CRY_MODE_NORMAL
	waitmoncry
	clearflag FLAG_JOHTO_BURNED_TOWER_B1F_BEASTS_1
	addobject 3
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Up
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 5
	removeobject 6
	delay 15
	playmoncry SPECIES_ENTEI, CRY_MODE_NORMAL
	waitmoncry
	clearflag FLAG_JOHTO_BURNED_TOWER_B1F_BEASTS_1
	addobject 4
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Up
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 5
	removeobject 7
	delay 15
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	waitmoncry
	delay 15
	@ TODO unsupported: playsound SFX_WARP_FROM
	goto Johto_EventScript_Unimplemented

BurnedTowerB1F_Johto_BurnedTowerB1FEusine:
	faceplayer
	message BurnedTowerB1F_Johto_BurnedTowerB1FEusineText
	waitmessage
	waitbuttonpress
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_NORTH, BurnedTowerB1F_Johto_BurnedTowerB1FEusine_Movement2
	applymovement 9, BurnedTowerB1F_Johto_BurnedTowerB1FEusineMovement1
	waitmovement 9
	goto BurnedTowerB1F_Johto_BurnedTowerB1FEusine_Finish

BurnedTowerB1F_Johto_BurnedTowerB1FEusine_Movement2:
	applymovement 9, BurnedTowerB1F_Johto_BurnedTowerB1FEusineMovement2
	waitmovement 9

BurnedTowerB1F_Johto_BurnedTowerB1FEusine_Finish:
	removeobject 9
	playse SE_EXIT
	waitse
	releaseall
	end

BurnedTowerB1F_Johto_BurnedTowerB1FBoulder:
	goto Johto_Std_StrengthBoulderScript

BurnedTowerB1F_Johto_BurnedTowerB1FEusineMovement2:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_down
	step_end

BurnedTowerB1F_Johto_BurnedTowerB1FEusineMovement1:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

BurnedTowerB1F_Johto_BurnedTowerB1FEusineText:
	.string "EUSINE: I dug a\n"
	.string "hole here, too…"
	.string "\pI was shocked!"
	.string "\pSUICUNE raced by\n"
	.string "like a blur, right"
	.string "\pin front of my\n"
	.string "eyes!"
	.string "\pFor ten years I\n"
	.string "chased SUICUNE,"
	.string "\pand I finally got\n"
	.string "to see it."
	.string "\pI'm all choked up!"
	.string "\p{PLAYER}, I owe\n"
	.string "this all to you!"
	.string "\pThank you!"
	.string "\pI heard that the\n"
	.string "legendary POKéMON"
	.string "\pof ECRUTEAK test\n"
	.string "chosen humans by"
	.string "\pallowing them to\n"
	.string "get close."
	.string "\pI'm going to track\n"
	.string "SUICUNE."
	.string "\p{PLAYER}, let's\n"
	.string "meet again!"
	.string "\pFarewell!$"
