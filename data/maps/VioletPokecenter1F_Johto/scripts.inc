VioletPokecenter1F_Johto_MapScripts::
	.byte 0

VioletPokecenter1F_Johto_VioletPokecenterNurse_Entry::
	lockall
	goto VioletPokecenter1F_Johto_VioletPokecenterNurse

VioletPokecenter1F_Johto_VioletPokecenter1FGameboyKidScript_Entry::
	lockall
	goto VioletPokecenter1F_Johto_VioletPokecenter1FGameboyKidScript

VioletPokecenter1F_Johto_VioletPokecenter1FGentlemanScript_Entry::
	lockall
	goto VioletPokecenter1F_Johto_VioletPokecenter1FGentlemanScript

VioletPokecenter1F_Johto_VioletPokecenter1FYoungsterScript_Entry::
	lockall
	goto VioletPokecenter1F_Johto_VioletPokecenter1FYoungsterScript

VioletPokecenter1F_Johto_VioletPokecenter1F_ElmsAideScript_Entry::
	lockall
	goto VioletPokecenter1F_Johto_VioletPokecenter1F_ElmsAideScript


VioletPokecenter1F_Johto_VioletPokecenterNurse:
	goto Johto_Std_PokecenterNurseScript

VioletPokecenter1F_Johto_VioletPokecenter1F_ElmsAideScript:
	faceplayer
	goto_if_set FLAG_JOHTO_REFUSED_TO_TAKE_EGG_FROM_ELMS_AIDE, VioletPokecenter1F_Johto_VioletPokecenter1F_ElmsAideScript_SecondTimeAsking
	message VioletPokecenter1F_Johto_VioletPokecenterElmsAideFavorText
	waitmessage

VioletPokecenter1F_Johto_VioletPokecenter1F_ElmsAideScript_AskTakeEgg:
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, 0, VioletPokecenter1F_Johto_VioletPokecenter1F_ElmsAideScript_RefusedEgg
	getpartysize
	@ TODO unsupported: ifequal PARTY_LENGTH, .PartyFull
	goto Johto_EventScript_Unimplemented

VioletPokecenter1F_Johto_VioletPokecenter1F_ElmsAideScript_RefusedEgg:
	message VioletPokecenter1F_Johto_VioletPokecenterElmsAideRefuseText
	waitmessage
	waitbuttonpress
	closemessage
	setflag FLAG_JOHTO_REFUSED_TO_TAKE_EGG_FROM_ELMS_AIDE
	releaseall
	end

VioletPokecenter1F_Johto_VioletPokecenter1F_ElmsAideScript_SecondTimeAsking:
	message VioletPokecenter1F_Johto_VioletPokecenterElmsAideAskEggText
	waitmessage
	goto VioletPokecenter1F_Johto_VioletPokecenter1F_ElmsAideScript_AskTakeEgg

VioletPokecenter1F_Johto_VioletPokecenter1FGameboyKidScript:
	faceplayer
	message VioletPokecenter1F_Johto_VioletPokecenter1FGameboyKidText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VioletPokecenter1F_Johto_VioletPokecenter1FGentlemanScript:
	faceplayer
	message VioletPokecenter1F_Johto_VioletPokecenter1FGentlemanText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VioletPokecenter1F_Johto_VioletPokecenter1FYoungsterScript:
	faceplayer
	message VioletPokecenter1F_Johto_VioletPokecenter1FYoungsterText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VioletPokecenter1F_Johto_VioletPokecenterElmsAideFavorText:
	.string "{PLAYER}, long\n"
	.string "time, no see."
	.string "\pPROF.ELM asked me\n"
	.string "to find you."
	.string "\pHe has another\n"
	.string "favor to ask."
	.string "\pWould you take the\n"
	.string "POKéMON EGG?$"

VioletPokecenter1F_Johto_VioletPokecenterElmsAideRefuseText:
	.string "B-but… PROF.ELM\n"
	.string "asked for you…$"

VioletPokecenter1F_Johto_VioletPokecenterElmsAideAskEggText:
	.string "{PLAYER}, will you\n"
	.string "take the EGG?$"

VioletPokecenter1F_Johto_VioletPokecenter1FGameboyKidText:
	.string "A guy named BILL\n"
	.string "made the POKéMON\l"
	.string "PC storage system.$"

VioletPokecenter1F_Johto_VioletPokecenter1FGentlemanText:
	.string "It was around\n"
	.string "three years ago."
	.string "\pTEAM ROCKET was up\n"
	.string "to no good with\l"
	.string "POKéMON."
	.string "\pBut justice pre-\n"
	.string "vailed--a young\l"
	.string "kid broke 'em up.$"

VioletPokecenter1F_Johto_VioletPokecenter1FYoungsterText:
	.string "POKéMON are smart.\n"
	.string "They won't obey a"
	.string "\ptrainer they don't\n"
	.string "respect."
	.string "\pWithout the right\n"
	.string "GYM BADGES, they"
	.string "\pwill just do as\n"
	.string "they please.$"
