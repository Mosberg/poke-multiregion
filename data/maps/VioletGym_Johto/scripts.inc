VioletGym_Johto_MapScripts::
	.byte 0

VioletGym_Johto_VioletGymFalknerScript_Entry::
	lockall
	goto VioletGym_Johto_VioletGymFalknerScript

VioletGym_Johto_VioletGymGuideScript_Entry::
	lockall
	goto VioletGym_Johto_VioletGymGuideScript

VioletGym_Johto_VioletGymStatue_Entry::
	lockall
	goto VioletGym_Johto_VioletGymStatue


VioletGym_Johto_VioletGymFalknerScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_FALKNER, VioletGym_Johto_VioletGymFalknerScript_FightDone
	message VioletGym_Johto_FalknerIntroText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext FalknerWinLossText, 0
	goto Johto_EventScript_Unimplemented

VioletGym_Johto_VioletGymFalknerScript_FightDone:
	goto_if_set FLAG_JOHTO_GOT_TM31_MUD_SLAP, VioletGym_Johto_VioletGymFalknerScript_SpeechAfterTM
	setflag FLAG_JOHTO_BEAT_BIRD_KEEPER_ROD
	setflag FLAG_JOHTO_BEAT_BIRD_KEEPER_ABE
	setvar VAR_JOHTO_SCENE_ELMS_LAB, 2
	@ TODO unsupported: specialphonecall SPECIALCALL_ASSISTANT
	goto Johto_EventScript_Unimplemented

VioletGym_Johto_VioletGymFalknerScript_SpeechAfterTM:
	message VioletGym_Johto_FalknerFightDoneText
	waitmessage
	waitbuttonpress

VioletGym_Johto_VioletGymFalknerScript_NoRoomForMudSlap:
	closemessage
	releaseall
	end

VioletGym_Johto_VioletGymGuideScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_FALKNER, VioletGym_Johto_VioletGymGuideScript_VioletGymGuideWinScript
	message VioletGym_Johto_VioletGymGuideText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VioletGym_Johto_VioletGymGuideScript_VioletGymGuideWinScript:
	message VioletGym_Johto_VioletGymGuideWinText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VioletGym_Johto_VioletGymStatue:
	goto_if_set FLAG_JOHTO_ENGINE_ZEPHYRBADGE, VioletGym_Johto_VioletGymStatue_Beaten
	goto Johto_Std_GymStatue1Script

VioletGym_Johto_VioletGymStatue_Beaten:
	@ TODO unsupported: gettrainername STRING_BUFFER_4, FALKNER, FALKNER1
	goto Johto_EventScript_Unimplemented

VioletGym_Johto_FalknerIntroText:
	.string "I'm FALKNER, the\n"
	.string "VIOLET POKéMON GYM\l"
	.string "leader!"
	.string "\pPeople say you can\n"
	.string "clip flying-type"
	.string "\pPOKéMON's wings\n"
	.string "with a jolt of\l"
	.string "electricity…"
	.string "\pI won't allow such\n"
	.string "insults to bird\l"
	.string "POKéMON!"
	.string "\pI'll show you the\n"
	.string "real power of the"
	.string "\pmagnificent bird\n"
	.string "POKéMON!$"

VioletGym_Johto_FalknerFightDoneText:
	.string "There are POKéMON\n"
	.string "GYMS in cities and\l"
	.string "towns ahead."
	.string "\pYou should test\n"
	.string "your skills at\l"
	.string "these GYMS."
	.string "\pI'm going to train\n"
	.string "harder to become"
	.string "\pthe greatest bird\n"
	.string "master!$"

VioletGym_Johto_VioletGymGuideText:
	.string "Hey! I'm no train-\n"
	.string "er but I can give\l"
	.string "some advice!"
	.string "\pBelieve me!\n"
	.string "If you believe, a"
	.string "\pchampionship dream\n"
	.string "can come true."
	.string "\pYou believe?\n"
	.string "Then listen."
	.string "\pThe grass-type is\n"
	.string "weak against the"
	.string "\pflying-type. Keep\n"
	.string "this in mind.$"

VioletGym_Johto_VioletGymGuideWinText:
	.string "Nice battle! Keep\n"
	.string "it up, and you'll"
	.string "\pbe the CHAMP in no\n"
	.string "time at all!$"
