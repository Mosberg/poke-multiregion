MrPokemonsHouse_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MrPokemonsHouse_Johto_OnFrame
	.byte 0

MrPokemonsHouse_Johto_OnFrame:
	map_script_2 VAR_JOHTO_SCENE_MR_POKEMONS_HOUSE, 0, MrPokemonsHouse_Johto_MrPokemonsHouseMrPokemonEventScript_Entry
	.2byte 0

MrPokemonsHouse_Johto_MrPokemonsHouse_MrPokemonScript_Entry::
	lockall
	goto MrPokemonsHouse_Johto_MrPokemonsHouse_MrPokemonScript

MrPokemonsHouse_Johto_MrPokemonsHouse_ForeignMagazines_Entry::
	lockall
	goto MrPokemonsHouse_Johto_MrPokemonsHouse_ForeignMagazines

MrPokemonsHouse_Johto_MrPokemonsHouse_BrokenComputer_Entry::
	lockall
	goto MrPokemonsHouse_Johto_MrPokemonsHouse_BrokenComputer

MrPokemonsHouse_Johto_MrPokemonsHouse_StrangeCoins_Entry::
	lockall
	goto MrPokemonsHouse_Johto_MrPokemonsHouse_StrangeCoins

MrPokemonsHouse_Johto_MrPokemonsHouseMrPokemonEventScript_Entry::
	lockall
	goto MrPokemonsHouse_Johto_MrPokemonsHouseMrPokemonEventScript


MrPokemonsHouse_Johto_MrPokemonsHouseMrPokemonEventScript:
	applymovement 1, Johto_Movement_Emote_exclamation_mark
	waitmovement 1
	applymovement 1, Johto_Movement_Face_Down
	waitmovement 1
	message MrPokemonsHouse_Johto_MrPokemonIntroText1
	waitmessage
	waitbuttonpress
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MrPokemonsHouse_Johto_MrPokemonsHouse_PlayerWalksToMrPokemon
	waitmovement OBJ_EVENT_ID_PLAYER
	message MrPokemonsHouse_Johto_MrPokemonIntroText2
	waitmessage
	waitbuttonpress
	waitse
	additem ITEM_MYSTERY_EGG
	message MrPokemonsHouse_Johto_MrPokemonsHouse_GotEggText
	waitmessage
	@ TODO unsupported: playsound SFX_KEY_ITEM
	goto Johto_EventScript_Unimplemented

MrPokemonsHouse_Johto_MrPokemonsHouse_MrPokemonScript:
	faceplayer
	checkitem ITEM_RED_SCALE, 1
	goto_if_ne VAR_RESULT, 0, MrPokemonsHouse_Johto_MrPokemonsHouse_MrPokemonScript_RedScale
	goto_if_set FLAG_JOHTO_GAVE_MYSTERY_EGG_TO_ELM, MrPokemonsHouse_Johto_MrPokemonsHouse_MrPokemonScript_AlwaysNewDiscoveries
	message MrPokemonsHouse_Johto_MrPokemonText_ImDependingOnYou
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

MrPokemonsHouse_Johto_MrPokemonsHouse_MrPokemonScript_AlwaysNewDiscoveries:
	message MrPokemonsHouse_Johto_MrPokemonText_AlwaysNewDiscoveries
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

MrPokemonsHouse_Johto_MrPokemonsHouse_MrPokemonScript_RedScale:
	message MrPokemonsHouse_Johto_MrPokemonText_GimmeTheScale
	waitmessage
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, 0, MrPokemonsHouse_Johto_MrPokemonsHouse_MrPokemonScript_refused
	giveitem ITEM_EXP_SHARE
	goto_if_eq VAR_RESULT, 0, MrPokemonsHouse_Johto_MrPokemonsHouse_MrPokemonScript_full
	removeitem ITEM_RED_SCALE
	goto MrPokemonsHouse_Johto_MrPokemonsHouse_MrPokemonScript_AlwaysNewDiscoveries

MrPokemonsHouse_Johto_MrPokemonsHouse_MrPokemonScript_refused:
	message MrPokemonsHouse_Johto_MrPokemonText_Disappointed
	waitmessage
	waitbuttonpress

MrPokemonsHouse_Johto_MrPokemonsHouse_MrPokemonScript_full:
	closemessage
	releaseall
	end

MrPokemonsHouse_Johto_MrPokemonsHouse_ForeignMagazines:
	message MrPokemonsHouse_Johto_MrPokemonsHouse_ForeignMagazinesText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

MrPokemonsHouse_Johto_MrPokemonsHouse_BrokenComputer:
	message MrPokemonsHouse_Johto_MrPokemonsHouse_BrokenComputerText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

MrPokemonsHouse_Johto_MrPokemonsHouse_StrangeCoins:
	message MrPokemonsHouse_Johto_MrPokemonsHouse_StrangeCoinsText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

MrPokemonsHouse_Johto_MrPokemonsHouse_PlayerWalksToMrPokemon:
	walk_right
	walk_up
	step_end

MrPokemonsHouse_Johto_MrPokemonIntroText1:
	.string "Hello, hello! You\n"
	.string "must be {PLAYER}."
	.string "\pPROF.ELM said that\n"
	.string "you would visit.$"

MrPokemonsHouse_Johto_MrPokemonIntroText2:
	.string "This is what I\n"
	.string "want PROF.ELM to\l"
	.string "examine.$"

MrPokemonsHouse_Johto_MrPokemonsHouse_GotEggText:
	.string "{PLAYER} received\n"
	.string "MYSTERY EGG.$"

MrPokemonsHouse_Johto_MrPokemonText_ImDependingOnYou:
	.string "I'm depending on\n"
	.string "you!$"

MrPokemonsHouse_Johto_MrPokemonText_AlwaysNewDiscoveries:
	.string "Life is delight-\n"
	.string "ful! Always, new"
	.string "\pdiscoveries to be\n"
	.string "made!$"

MrPokemonsHouse_Johto_MrPokemonText_GimmeTheScale:
	.string "Hm? That SCALE!\n"
	.string "What's that?\l"
	.string "A red GYARADOS?"
	.string "\pThat's rare! \n"
	.string "I, I want it…"
	.string "\p{PLAYER}, would you\n"
	.string "care to trade it?"
	.string "\pI can offer this\n"
	.string "EXP.SHARE I got\l"
	.string "from PROF.OAK.$"

MrPokemonsHouse_Johto_MrPokemonText_Disappointed:
	.string "That's disappoint-\n"
	.string "ing. That happens\l"
	.string "to be very rare.$"

MrPokemonsHouse_Johto_MrPokemonsHouse_ForeignMagazinesText:
	.string "It's packed with\n"
	.string "foreign magazines."
	.string "\pCan't even read\n"
	.string "their titles…$"

MrPokemonsHouse_Johto_MrPokemonsHouse_BrokenComputerText:
	.string "It's a big com-\n"
	.string "puter. Hmm. It's\l"
	.string "broken.$"

MrPokemonsHouse_Johto_MrPokemonsHouse_StrangeCoinsText:
	.string "A whole pile of\n"
	.string "strange coins!"
	.string "\pMaybe they're from\n"
	.string "another country…$"
