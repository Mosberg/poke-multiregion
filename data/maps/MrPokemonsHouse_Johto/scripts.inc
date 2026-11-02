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
	@ TODO unsupported: giveitem MYSTERY_EGG
	goto Johto_EventScript_Unimplemented

MrPokemonsHouse_Johto_MrPokemonsHouse_MrPokemonScript:
	faceplayer
	@ TODO unsupported: checkitem RED_SCALE
	goto Johto_EventScript_Unimplemented

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
