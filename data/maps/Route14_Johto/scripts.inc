Route14_Johto_MapScripts::
	.byte 0

Route14_Johto_Kim_Entry::
	lockall
	goto Route14_Johto_Kim


Route14_Johto_Kim:
	faceplayer
	@ TODO unsupported: trade NPC_TRADE_KIM
	goto Johto_EventScript_Unimplemented
