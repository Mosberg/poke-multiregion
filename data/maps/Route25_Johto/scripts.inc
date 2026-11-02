Route25_Johto_MapScripts::
	.byte 0

Route25_Johto_TrainerCooltrainermKevin_Entry::
	lockall
	goto Route25_Johto_TrainerCooltrainermKevin

Route25_Johto_BillsHouseSign_Entry::
	lockall
	goto Route25_Johto_BillsHouseSign

Route25_Johto_Route25MistyDate1Script_Entry::
	lockall
	goto Route25_Johto_Route25MistyDate1Script

Route25_Johto_Route25MistyDate2Script_Entry::
	lockall
	goto Route25_Johto_Route25MistyDate2Script


Route25_Johto_Route25MistyDate1Script:
	applymovement 1, Johto_Movement_Emote_heart
	waitmovement 1
	delay 30
	applymovement 2, Johto_Movement_Emote_exclamation_mark
	waitmovement 2
	applymovement 1, Johto_Movement_Face_Down
	waitmovement 1
	applymovement 2, Route25_Johto_Route25MistysDateLeavesMovement1
	waitmovement 2
	removeobject 2
	delay 15
	playbgm MUS_DUMMY, FALSE
	applymovement 1, Johto_Movement_Face_Up
	waitmovement 1
	delay 10
	applymovement 1, Route25_Johto_Route25MistyApproachesPlayerMovement1
	waitmovement 1
	message Route25_Johto_Route25MistyDateText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Down
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Route25_Johto_Route25MistyLeavesPlayerMovement1
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Left
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Route25_Johto_Route25MistyLeavesMovement
	waitmovement 1
	removeobject 1
	clearflag FLAG_JOHTO_TRAINERS_IN_CERULEAN_GYM
	setvar VAR_JOHTO_SCENE_ROUTE_25, 0
	fadedefaultbgm
	releaseall
	end

Route25_Johto_Route25MistyDate2Script:
	applymovement 1, Johto_Movement_Emote_heart
	waitmovement 1
	delay 30
	applymovement 2, Johto_Movement_Emote_exclamation_mark
	waitmovement 2
	applymovement 1, Johto_Movement_Face_Down
	waitmovement 1
	applymovement 2, Route25_Johto_Route25MistysDateLeavesMovement2
	waitmovement 2
	removeobject 2
	delay 15
	playbgm MUS_DUMMY, FALSE
	applymovement 1, Johto_Movement_Face_Up
	waitmovement 1
	delay 10
	applymovement 1, Route25_Johto_Route25MistyApproachesPlayerMovement2
	waitmovement 1
	message Route25_Johto_Route25MistyDateText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Up
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Route25_Johto_Route25MistyLeavesPlayerMovement2
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Left
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Route25_Johto_Route25MistyLeavesMovement
	waitmovement 1
	removeobject 1
	clearflag FLAG_JOHTO_TRAINERS_IN_CERULEAN_GYM
	setvar VAR_JOHTO_SCENE_ROUTE_25, 0
	fadedefaultbgm
	releaseall
	end

Route25_Johto_TrainerCooltrainermKevin:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_COOLTRAINERM_KEVIN, Route25_Johto_TrainerCooltrainermKevin_AfterBattle
	goto_if_set FLAG_JOHTO_CLEARED_NUGGET_BRIDGE, Route25_Johto_TrainerCooltrainermKevin_AfterNuggetBridge
	message Route25_Johto_CooltrainermKevinNuggetText
	waitmessage
	waitbuttonpress
	giveitem ITEM_NUGGET
	goto_if_eq VAR_RESULT, 0, Route25_Johto_TrainerCooltrainermKevin_NoRoomForNugget
	setflag FLAG_JOHTO_CLEARED_NUGGET_BRIDGE

Route25_Johto_TrainerCooltrainermKevin_AfterNuggetBridge:
	message Route25_Johto_CooltrainermKevinSeenText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext CooltrainermKevinBeatenText, 0
	goto Johto_EventScript_Unimplemented

Route25_Johto_TrainerCooltrainermKevin_AfterBattle:
	message Route25_Johto_CooltrainermKevinAfterBattleText
	waitmessage
	waitbuttonpress

Route25_Johto_TrainerCooltrainermKevin_NoRoomForNugget:
	closemessage
	releaseall
	end

Route25_Johto_BillsHouseSign:
	message Route25_Johto_BillsHouseSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route25_Johto_Route25MistysDateLeavesMovement1:
	walk_fast_down
	step_end

Route25_Johto_Route25MistysDateLeavesMovement2:
	walk_fast_down
	walk_fast_down
	step_end

Route25_Johto_Route25MistyApproachesPlayerMovement1:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

Route25_Johto_Route25MistyApproachesPlayerMovement2:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

Route25_Johto_Route25MistyLeavesPlayerMovement1:
	walk_down
	walk_left
	step_end

Route25_Johto_Route25MistyLeavesPlayerMovement2:
	walk_up
	walk_left
	step_end

Route25_Johto_Route25MistyLeavesMovement:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route25_Johto_Route25MistyDateText:
	.string "MISTY: Aww! Why\n"
	.string "did you have to"
	.string "\pshow up and bug us\n"
	.string "now?"
	.string "\pDo you know what\n"
	.string "they call people\l"
	.string "like you?"
	.string "\pPests! You heard\n"
	.string "me right, pest!"
	.string "\p…"
	.string "\p…Oh? Those BADGES\n"
	.string "you have… Are they\l"
	.string "JOHTO GYM BADGES?"
	.string "\pIf you have eight,\n"
	.string "you must be good."
	.string "\pOK, then. Come to\n"
	.string "CERULEAN GYM."
	.string "\pI'll be happy to\n"
	.string "take you on."
	.string "\pI'm MISTY, the\n"
	.string "GYM LEADER in\l"
	.string "CERULEAN.$"

Route25_Johto_CooltrainermKevinNuggetText:
	.string "You took on one\n"
	.string "more battle than"
	.string "\pyou expected, but\n"
	.string "you won anyway."
	.string "\pAs promised, you\n"
	.string "win a prize.$"

Route25_Johto_CooltrainermKevinSeenText:
	.string "But after seeing\n"
	.string "how you battle, I"
	.string "\pwant to see how\n"
	.string "I'll fare."
	.string "\pHow about it? Let\n"
	.string "me take you on.$"

Route25_Johto_CooltrainermKevinAfterBattleText:
	.string "That was a great\n"
	.string "battle!"
	.string "\pYou and your POKé-\n"
	.string "MON are truly out-\l"
	.string "standing!$"

Route25_Johto_BillsHouseSignText:
	.string "SEA COTTAGE\n"
	.string "BILL'S HOUSE$"
