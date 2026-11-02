IndigoPlateauPokecenter1F_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateauPokecenter1F_Johto_OnTransition
	.byte 0

IndigoPlateauPokecenter1F_Johto_OnTransition:
	call IndigoPlateauPokecenter1F_Johto_IndigoPlateauPokecenter1FPrepareElite4Callback_Sub
	end

IndigoPlateauPokecenter1F_Johto_IndigoPlateauPokecenter1FNurseScript_Entry::
	lockall
	goto IndigoPlateauPokecenter1F_Johto_IndigoPlateauPokecenter1FNurseScript

IndigoPlateauPokecenter1F_Johto_IndigoPlateauPokecenter1FClerkScript_Entry::
	lockall
	goto IndigoPlateauPokecenter1F_Johto_IndigoPlateauPokecenter1FClerkScript

IndigoPlateauPokecenter1F_Johto_IndigoPlateauPokecenter1FCooltrainerMScript_Entry::
	lockall
	goto IndigoPlateauPokecenter1F_Johto_IndigoPlateauPokecenter1FCooltrainerMScript

IndigoPlateauPokecenter1F_Johto_TeleportGuyScript_Entry::
	lockall
	goto IndigoPlateauPokecenter1F_Johto_TeleportGuyScript

IndigoPlateauPokecenter1F_Johto_AbraScript_Entry::
	lockall
	goto IndigoPlateauPokecenter1F_Johto_AbraScript

IndigoPlateauPokecenter1F_Johto_PlateauRivalBattle1_Entry::
	lockall
	goto IndigoPlateauPokecenter1F_Johto_PlateauRivalBattle1

IndigoPlateauPokecenter1F_Johto_PlateauRivalBattle2_Entry::
	lockall
	goto IndigoPlateauPokecenter1F_Johto_PlateauRivalBattle2


IndigoPlateauPokecenter1F_Johto_PlateauRivalBattle1:
	goto_if_unset FLAG_JOHTO_BEAT_RIVAL_IN_MT_MOON, IndigoPlateauPokecenter1F_Johto_PlateauRivalScriptDone
	goto_if_set FLAG_JOHTO_ENGINE_INDIGO_PLATEAU_RIVAL_FIGHT, IndigoPlateauPokecenter1F_Johto_PlateauRivalScriptDone
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

IndigoPlateauPokecenter1F_Johto_PlateauRivalBattle2:
	goto_if_unset FLAG_JOHTO_BEAT_RIVAL_IN_MT_MOON, IndigoPlateauPokecenter1F_Johto_PlateauRivalScriptDone
	goto_if_set FLAG_JOHTO_ENGINE_INDIGO_PLATEAU_RIVAL_FIGHT, IndigoPlateauPokecenter1F_Johto_PlateauRivalScriptDone
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

IndigoPlateauPokecenter1F_Johto_PlateauRivalScriptDone:
	releaseall
	end

IndigoPlateauPokecenter1F_Johto_IndigoPlateauPokecenter1FNurseScript:
	goto Johto_Std_PokecenterNurseScript

IndigoPlateauPokecenter1F_Johto_IndigoPlateauPokecenter1FClerkScript:
	@ TODO unsupported: pokemart MARTTYPE_STANDARD, MART_INDIGO_PLATEAU
	goto Johto_EventScript_Unimplemented

IndigoPlateauPokecenter1F_Johto_IndigoPlateauPokecenter1FCooltrainerMScript:
	faceplayer
	message IndigoPlateauPokecenter1F_Johto_IndigoPlateauPokecenter1FCooltrainerMText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

IndigoPlateauPokecenter1F_Johto_TeleportGuyScript:
	faceplayer
	message IndigoPlateauPokecenter1F_Johto_TeleportGuyText1
	waitmessage
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, 0, IndigoPlateauPokecenter1F_Johto_TeleportGuyScript_No
	message IndigoPlateauPokecenter1F_Johto_TeleportGuyYesText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: playsound SFX_WARP_TO
	goto Johto_EventScript_Unimplemented

IndigoPlateauPokecenter1F_Johto_TeleportGuyScript_No:
	message IndigoPlateauPokecenter1F_Johto_TeleportGuyNoText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

IndigoPlateauPokecenter1F_Johto_AbraScript:
	message IndigoPlateauPokecenter1F_Johto_AbraText
	waitmessage
	playmoncry SPECIES_ABRA, CRY_MODE_NORMAL
	waitmoncry
	waitbuttonpress
	closemessage
	releaseall
	end

IndigoPlateauPokecenter1F_Johto_IndigoPlateauPokecenter1FPrepareElite4Callback_Sub:
	setvar VAR_JOHTO_SCENE_WILLS_ROOM, 0
	setvar VAR_JOHTO_SCENE_KOGAS_ROOM, 0
	setvar VAR_JOHTO_SCENE_BRUNOS_ROOM, 0
	setvar VAR_JOHTO_SCENE_KARENS_ROOM, 0
	setvar VAR_JOHTO_SCENE_LANCES_ROOM, 0
	setvar VAR_JOHTO_SCENE_HALL_OF_FAME, 0
	clearflag FLAG_JOHTO_WILLS_ROOM_ENTRANCE_CLOSED
	clearflag FLAG_JOHTO_WILLS_ROOM_EXIT_OPEN
	clearflag FLAG_JOHTO_KOGAS_ROOM_ENTRANCE_CLOSED
	clearflag FLAG_JOHTO_KOGAS_ROOM_EXIT_OPEN
	clearflag FLAG_JOHTO_BRUNOS_ROOM_ENTRANCE_CLOSED
	clearflag FLAG_JOHTO_BRUNOS_ROOM_EXIT_OPEN
	clearflag FLAG_JOHTO_KARENS_ROOM_ENTRANCE_CLOSED
	clearflag FLAG_JOHTO_KARENS_ROOM_EXIT_OPEN
	clearflag FLAG_JOHTO_LANCES_ROOM_ENTRANCE_CLOSED
	clearflag FLAG_JOHTO_LANCES_ROOM_EXIT_OPEN
	clearflag FLAG_JOHTO_BEAT_ELITE_4_WILL
	clearflag FLAG_JOHTO_BEAT_ELITE_4_KOGA
	clearflag FLAG_JOHTO_BEAT_ELITE_4_BRUNO
	clearflag FLAG_JOHTO_BEAT_ELITE_4_KAREN
	clearflag FLAG_JOHTO_BEAT_CHAMPION_LANCE
	setflag FLAG_JOHTO_LANCES_ROOM_OAK_AND_MARY
	return

IndigoPlateauPokecenter1F_Johto_IndigoPlateauPokecenter1FCooltrainerMText:
	.string "At the POKéMON\n"
	.string "LEAGUE, you'll get"
	.string "\ptested by the\n"
	.string "ELITE FOUR."
	.string "\pYou have to beat\n"
	.string "them all. If you"
	.string "\plose, you have to\n"
	.string "start all over!$"

IndigoPlateauPokecenter1F_Johto_TeleportGuyText1:
	.string "Ah! You're chal-\n"
	.string "lenging the ELITE"
	.string "\pFOUR? Are you sure\n"
	.string "you're ready?"
	.string "\pIf you need to\n"
	.string "train some more,"
	.string "\pmy ABRA can help\n"
	.string "you."
	.string "\pIt can TELEPORT\n"
	.string "you home."
	.string "\pWould you like to\n"
	.string "go home now?$"

IndigoPlateauPokecenter1F_Johto_TeleportGuyYesText:
	.string "OK, OK. Picture\n"
	.string "your house in your\l"
	.string "mind…$"

IndigoPlateauPokecenter1F_Johto_TeleportGuyNoText:
	.string "OK, OK. The best\n"
	.string "of luck to you!$"

IndigoPlateauPokecenter1F_Johto_AbraText:
	.string "ABRA: Aabra…$"
