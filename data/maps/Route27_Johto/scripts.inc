Route27_Johto_MapScripts::
	.byte 0

Route27_Johto_Route27FisherScript_Entry::
	lockall
	goto Route27_Johto_Route27FisherScript

Route27_Johto_TohjoFallsSign_Entry::
	lockall
	goto Route27_Johto_TohjoFallsSign

Route27_Johto_FirstStepIntoKantoLeftScene_Entry::
	lockall
	goto Route27_Johto_FirstStepIntoKantoLeftScene

Route27_Johto_FirstStepIntoKantoRightScene_Entry::
	lockall
	goto Route27_Johto_FirstStepIntoKantoRightScene


Route27_Johto_FirstStepIntoKantoLeftScene:
	applymovement 9, Johto_Movement_Face_Left
	waitmovement 9
	applymovement 9, Johto_Movement_Emote_exclamation_mark
	waitmovement 9
	applymovement 9, Route27_Johto_Route27FisherStepLeftTwiceMovement
	waitmovement 9
	goto Route27_Johto_FirstStepIntoKantoScene_Continue

Route27_Johto_FirstStepIntoKantoRightScene:
	applymovement 9, Johto_Movement_Face_Left
	waitmovement 9
	applymovement 9, Johto_Movement_Emote_exclamation_mark
	waitmovement 9
	applymovement 9, Route27_Johto_Route27FisherStepLeftOnceMovement
	waitmovement 9

Route27_Johto_FirstStepIntoKantoScene_Continue:
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Right
	waitmovement OBJ_EVENT_ID_PLAYER
	message Route27_Johto_Route27FisherHeyText
	waitmessage
	waitbuttonpress
	message Route27_Johto_Route27FisherText
	waitmessage
	waitbuttonpress
	closemessage
	setvar VAR_JOHTO_SCENE_ROUTE_27, 1
	releaseall
	end

Route27_Johto_Route27FisherScript:
	faceplayer
	message Route27_Johto_Route27FisherText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route27_Johto_TohjoFallsSign:
	message Route27_Johto_TohjoFallsSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route27_Johto_Route27FisherStepLeftTwiceMovement:
	walk_left
	walk_left
	step_end

Route27_Johto_Route27FisherStepLeftOnceMovement:
	walk_left
	step_end

Route27_Johto_Route27FisherHeyText:
	.string "Hey!$"

Route27_Johto_Route27FisherText:
	.string "Do you know what\n"
	.string "you just did?"
	.string "\pYou've taken your\n"
	.string "first step into\l"
	.string "KANTO."
	.string "\pCheck your POKé-\n"
	.string "GEAR MAP and see.$"

Route27_Johto_TohjoFallsSignText:
	.string "TOHJO FALLS"
	.string "\pTHE LINK BETWEEN\n"
	.string "KANTO AND JOHTO$"
