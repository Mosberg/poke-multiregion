Route30_Johto_MapScripts::
	.byte 0

Route30_Johto_YoungsterJoey_ImportantBattleScript_Entry::
	lockall
	goto Route30_Johto_YoungsterJoey_ImportantBattleScript

Route30_Johto_Route30YoungsterScript_Entry::
	lockall
	goto Route30_Johto_Route30YoungsterScript

Route30_Johto_Route30FruitTree1_Entry::
	lockall
	goto Route30_Johto_Route30FruitTree1

Route30_Johto_Route30FruitTree2_Entry::
	lockall
	goto Route30_Johto_Route30FruitTree2

Route30_Johto_Route30CooltrainerFScript_Entry::
	lockall
	goto Route30_Johto_Route30CooltrainerFScript

Route30_Johto_Route30Sign_Entry::
	lockall
	goto Route30_Johto_Route30Sign

Route30_Johto_MrPokemonsHouseDirectionsSign_Entry::
	lockall
	goto Route30_Johto_MrPokemonsHouseDirectionsSign

Route30_Johto_MrPokemonsHouseSign_Entry::
	lockall
	goto Route30_Johto_MrPokemonsHouseSign

Route30_Johto_Route30TrainerTips_Entry::
	lockall
	goto Route30_Johto_Route30TrainerTips


Route30_Johto_YoungsterJoey_ImportantBattleScript:
	waitse
	playbgm MUS_DUMMY, FALSE
	message Route30_Johto_Text_UseTackle
	waitmessage
	delay 30
	closemessage
	playse SE_M_TAIL_WHIP
	applymovement 7, Route30_Johto_Route30_JoeysRattataAttacksMovement
	waitmovement 7
	faceplayer
	message Route30_Johto_Text_ThisIsABigBattle
	waitmessage
	waitbuttonpress
	applymovement 1, Johto_Movement_Face_Up
	waitmovement 1
	closemessage
	playse SE_M_TAIL_WHIP
	applymovement 6, Route30_Johto_Route30_MikeysRattataAttacksMovement
	waitmovement 6
	fadedefaultbgm
	releaseall
	end

Route30_Johto_Route30YoungsterScript:
	faceplayer
	goto_if_set FLAG_JOHTO_GAVE_MYSTERY_EGG_TO_ELM, Route30_Johto_Route30YoungsterScript_CompletedEggQuest
	message Route30_Johto_Route30YoungsterText_DirectionsToMrPokemonsHouse
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route30_Johto_Route30YoungsterScript_CompletedEggQuest:
	message Route30_Johto_Route30YoungsterText_EveryoneIsBattling
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route30_Johto_Route30CooltrainerFScript:
	faceplayer
	message Route30_Johto_Route30CooltrainerFText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route30_Johto_Route30Sign:
	message Route30_Johto_Route30SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route30_Johto_MrPokemonsHouseDirectionsSign:
	message Route30_Johto_MrPokemonsHouseDirectionsSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route30_Johto_MrPokemonsHouseSign:
	message Route30_Johto_MrPokemonsHouseSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route30_Johto_Route30TrainerTips:
	message Route30_Johto_Route30TrainerTipsText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route30_Johto_Route30FruitTree1:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_30_1
	goto Johto_EventScript_Unimplemented

Route30_Johto_Route30FruitTree2:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_30_2
	goto Johto_EventScript_Unimplemented

Route30_Johto_Route30_JoeysRattataAttacksMovement:
	lock_facing_direction
	walk_fast_up
	walk_fast_down
	step_end

Route30_Johto_Route30_MikeysRattataAttacksMovement:
	lock_facing_direction
	walk_fast_down
	walk_fast_up
	step_end

Route30_Johto_Text_UseTackle:
	.string "Go, RATTATA!"
	.string "\pTACKLE!$"

Route30_Johto_Text_ThisIsABigBattle:
	.string "What? This is a\n"
	.string "big battle!\l"
	.string "Leave me alone!$"

Route30_Johto_Route30YoungsterText_DirectionsToMrPokemonsHouse:
	.string "MR.POKéMON's\n"
	.string "house? It's a bit\l"
	.string "farther ahead.$"

Route30_Johto_Route30YoungsterText_EveryoneIsBattling:
	.string "Everyone's having\n"
	.string "fun battling!\l"
	.string "You should too!$"

Route30_Johto_Route30CooltrainerFText:
	.string "I'm not a trainer."
	.string "\pBut if you look\n"
	.string "one in the eyes,\l"
	.string "prepare to battle.$"

Route30_Johto_Route30SignText:
	.string "ROUTE 30"
	.string "\pVIOLET CITY -\n"
	.string "CHERRYGROVE CITY$"

Route30_Johto_MrPokemonsHouseDirectionsSignText:
	.string "MR.POKéMON'S HOUSE\n"
	.string "STRAIGHT AHEAD!$"

Route30_Johto_MrPokemonsHouseSignText:
	.string "MR.POKéMON'S HOUSE$"

Route30_Johto_Route30TrainerTipsText:
	.string "TRAINER TIPS"
	.string "\pNo stealing other\n"
	.string "people's POKéMON!"
	.string "\pPOKé BALLS are to\n"
	.string "be thrown only at\l"
	.string "wild POKéMON!$"
