UnionCaveB2F_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, UnionCaveB2F_Johto_OnTransition
	.byte 0

UnionCaveB2F_Johto_OnTransition:
	call UnionCaveB2F_Johto_UnionCaveB2FLaprasCallback_Sub
	end

UnionCaveB2F_Johto_UnionCaveLapras_Entry::
	lockall
	goto UnionCaveB2F_Johto_UnionCaveLapras


UnionCaveB2F_Johto_UnionCaveLapras:
	faceplayer
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
	waitmoncry
	@ TODO unsupported: loadwildmon LAPRAS, 20
	goto Johto_EventScript_Unimplemented

UnionCaveB2F_Johto_UnionCaveB2FLaprasCallback_Sub:
	goto_if_set FLAG_JOHTO_ENGINE_UNION_CAVE_LAPRAS, UnionCaveB2F_Johto_UnionCaveB2FLaprasCallback_NoAppear_Sub
	@ TODO unsupported: readvar VAR_WEEKDAY
	return

UnionCaveB2F_Johto_UnionCaveB2FLaprasCallback_NoAppear_Sub:
	removeobject 6
	return
