OlivineTimsHouse_Johto_MapScripts::
	.byte 0

OlivineTimsHouse_Johto_Tim_Entry::
	lockall
	goto OlivineTimsHouse_Johto_Tim

OlivineTimsHouse_Johto_TimsHouseBookshelf_Entry::
	lockall
	goto OlivineTimsHouse_Johto_TimsHouseBookshelf


OlivineTimsHouse_Johto_Tim:
	faceplayer
	@ TODO unsupported: trade NPC_TRADE_TIM
	goto Johto_EventScript_Unimplemented

OlivineTimsHouse_Johto_TimsHouseBookshelf:
	goto Johto_Std_MagazineBookshelfScript
