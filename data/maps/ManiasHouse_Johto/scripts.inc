ManiasHouse_Johto_MapScripts::
	.byte 0

ManiasHouse_Johto_ManiaScript_Entry::
	lockall
	goto ManiasHouse_Johto_ManiaScript


ManiasHouse_Johto_ManiaScript:
	faceplayer
	@ TODO unsupported: iftrue .default_postevent
	goto Johto_EventScript_Unimplemented
