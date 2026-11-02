BlackthornEmysHouse_Johto_MapScripts::
	.byte 0

BlackthornEmysHouse_Johto_Emy_Entry::
	lockall
	goto BlackthornEmysHouse_Johto_Emy

BlackthornEmysHouse_Johto_EmysHouseBookshelf_Entry::
	lockall
	goto BlackthornEmysHouse_Johto_EmysHouseBookshelf


BlackthornEmysHouse_Johto_Emy:
	faceplayer
	@ TODO unsupported: trade NPC_TRADE_EMY
	goto Johto_EventScript_Unimplemented

BlackthornEmysHouse_Johto_EmysHouseBookshelf:
	goto Johto_Std_MagazineBookshelfScript
