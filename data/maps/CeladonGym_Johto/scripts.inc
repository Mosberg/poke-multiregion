CeladonGym_Johto_MapScripts::
	.byte 0

CeladonGym_Johto_CeladonGymErikaScript_Entry::
	lockall
	goto CeladonGym_Johto_CeladonGymErikaScript

CeladonGym_Johto_CeladonGymStatue_Entry::
	lockall
	goto CeladonGym_Johto_CeladonGymStatue


CeladonGym_Johto_CeladonGymErikaScript:
	faceplayer
	goto_if_set FLAG_JOHTO_ENGINE_RAINBOWBADGE, CeladonGym_Johto_CeladonGymErikaScript_FightDone
	message CeladonGym_Johto_ErikaBeforeBattleText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext ErikaBeatenText, 0
	goto Johto_EventScript_Unimplemented

CeladonGym_Johto_CeladonGymErikaScript_FightDone:
	goto_if_set FLAG_JOHTO_GOT_TM19_GIGA_DRAIN, CeladonGym_Johto_CeladonGymErikaScript_GotGigaDrain
	message CeladonGym_Johto_ErikaExplainTMText
	waitmessage
	waitbuttonpress
	@ TODO unsupported: verbosegiveitem TM_GIGA_DRAIN
	goto Johto_EventScript_Unimplemented

CeladonGym_Johto_CeladonGymErikaScript_GotGigaDrain:
	message CeladonGym_Johto_ErikaAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CeladonGym_Johto_CeladonGymStatue:
	goto_if_set FLAG_JOHTO_ENGINE_RAINBOWBADGE, CeladonGym_Johto_CeladonGymStatue_Beaten
	goto Johto_Std_GymStatue1Script

CeladonGym_Johto_CeladonGymStatue_Beaten:
	@ TODO unsupported: gettrainername STRING_BUFFER_4, ERIKA, ERIKA1
	goto Johto_EventScript_Unimplemented

CeladonGym_Johto_ErikaBeforeBattleText:
	.string "ERIKA: Hello…\n"
	.string "Lovely weather,"
	.string "\pisn't it?\n"
	.string "It's so pleasant…"
	.string "\p…I'm afraid I may\n"
	.string "doze off…"
	.string "\pMy name is ERIKA.\n"
	.string "I am the LEADER of\l"
	.string "CELADON GYM."
	.string "\p…Oh? All the way\n"
	.string "from JOHTO, you\l"
	.string "say? How nice…"
	.string "\pOh. I'm sorry, I\n"
	.string "didn't realize"
	.string "\pthat you wished to\n"
	.string "challenge me."
	.string "\pVery well, but I\n"
	.string "shall not lose.$"

CeladonGym_Johto_ErikaExplainTMText:
	.string "ERIKA: That was a\n"
	.string "delightful match."
	.string "\pI felt inspired.\n"
	.string "Please, I wish you\l"
	.string "to have this TM."
	.string "\pIt is GIGA DRAIN."
	.string "\pIt is a wonderful\n"
	.string "move that drains"
	.string "\phalf the damage it\n"
	.string "inflicts to heal\l"
	.string "your POKéMON."
	.string "\pPlease use it if\n"
	.string "it pleases you…$"

CeladonGym_Johto_ErikaAfterBattleText:
	.string "ERIKA: Losing\n"
	.string "leaves a bitter\l"
	.string "aftertaste…"
	.string "\pBut knowing that\n"
	.string "there are strong"
	.string "\ptrainers spurs me\n"
	.string "to do better…$"
