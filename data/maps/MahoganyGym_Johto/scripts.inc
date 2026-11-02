MahoganyGym_Johto_MapScripts::
	.byte 0

MahoganyGym_Johto_MahoganyGymPryceScript_Entry::
	lockall
	goto MahoganyGym_Johto_MahoganyGymPryceScript

MahoganyGym_Johto_MahoganyGymGuideScript_Entry::
	lockall
	goto MahoganyGym_Johto_MahoganyGymGuideScript

MahoganyGym_Johto_MahoganyGymStatue_Entry::
	lockall
	goto MahoganyGym_Johto_MahoganyGymStatue


MahoganyGym_Johto_MahoganyGymPryceScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_PRYCE, MahoganyGym_Johto_MahoganyGymPryceScript_FightDone
	message MahoganyGym_Johto_PryceText_Intro
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext PryceText_Impressed, 0
	goto Johto_EventScript_Unimplemented

MahoganyGym_Johto_MahoganyGymPryceScript_FightDone:
	goto_if_set FLAG_JOHTO_GOT_TM16_ICY_WIND, MahoganyGym_Johto_PryceScript_Defeat
	setflag FLAG_JOHTO_BEAT_SKIER_ROXANNE
	setflag FLAG_JOHTO_BEAT_SKIER_CLARISSA
	setflag FLAG_JOHTO_BEAT_BOARDER_RONALD
	setflag FLAG_JOHTO_BEAT_BOARDER_BRAD
	setflag FLAG_JOHTO_BEAT_BOARDER_DOUGLAS
	message MahoganyGym_Johto_PryceText_GlacierBadgeSpeech
	waitmessage
	waitbuttonpress
	@ TODO unsupported: verbosegiveitem TM_ICY_WIND
	goto Johto_EventScript_Unimplemented

MahoganyGym_Johto_PryceScript_Defeat:
	message MahoganyGym_Johto_PryceText_CherishYourPokemon
	waitmessage
	waitbuttonpress

MahoganyGym_Johto_MahoganyGym_NoRoomForIcyWind:
	closemessage
	releaseall
	end

MahoganyGym_Johto_MahoganyGymGuideScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_PRYCE, MahoganyGym_Johto_MahoganyGymGuideScript_MahoganyGymGuideWinScript
	message MahoganyGym_Johto_MahoganyGymGuideText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

MahoganyGym_Johto_MahoganyGymGuideScript_MahoganyGymGuideWinScript:
	message MahoganyGym_Johto_MahoganyGymGuideWinText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

MahoganyGym_Johto_MahoganyGymStatue:
	goto_if_set FLAG_JOHTO_ENGINE_GLACIERBADGE, MahoganyGym_Johto_MahoganyGymStatue_Beaten
	goto Johto_Std_GymStatue1Script

MahoganyGym_Johto_MahoganyGymStatue_Beaten:
	@ TODO unsupported: gettrainername STRING_BUFFER_4, PRYCE, PRYCE1
	goto Johto_EventScript_Unimplemented

MahoganyGym_Johto_PryceText_Intro:
	.string "POKéMON have many\n"
	.string "experiences in"
	.string "\ptheir lives, just \n"
	.string "like we do. "
	.string "\pI, too, have seen\n"
	.string "and suffered much\l"
	.string "in my life."
	.string "\pSince I am your\n"
	.string "elder, let me show\l"
	.string "you what I mean."
	.string "\pI have been with\n"
	.string "POKéMON since"
	.string "\pbefore you were\n"
	.string "born."
	.string "\pI do not lose\n"
	.string "easily."
	.string "\pI, PRYCE--the\n"
	.string "winter trainer--"
	.string "\pshall demonstrate\n"
	.string "my power!$"

MahoganyGym_Johto_PryceText_GlacierBadgeSpeech:
	.string "That BADGE will\n"
	.string "raise the SPECIAL\l"
	.string "stats of POKéMON."
	.string "\pIt also lets your\n"
	.string "POKéMON use WHIRL-\l"
	.string "POOL to get across\l"
	.string "real whirlpools."
	.string "\pAnd this… This is\n"
	.string "a gift from me!$"

MahoganyGym_Johto_PryceText_CherishYourPokemon:
	.string "When the ice and\n"
	.string "snow melt, spring\l"
	.string "arrives."
	.string "\pYou and your POKé-\n"
	.string "MON will be to-"
	.string "\pgether for many\n"
	.string "years to come."
	.string "\pCherish your time\n"
	.string "together!$"

MahoganyGym_Johto_MahoganyGymGuideText:
	.string "PRYCE is a veteran\n"
	.string "who has trained"
	.string "\pPOKéMON for some\n"
	.string "50 years."
	.string "\pHe's said to be\n"
	.string "good at freezing"
	.string "\popponents with\n"
	.string "ice-type moves."
	.string "\pThat means you\n"
	.string "should melt him"
	.string "\pwith your burning\n"
	.string "ambition!$"

MahoganyGym_Johto_MahoganyGymGuideWinText:
	.string "PRYCE is some-\n"
	.string "thing, but you're\l"
	.string "something else!"
	.string "\pThat was a hot\n"
	.string "battle that"
	.string "\pbridged the gen-\n"
	.string "eration gap!$"
