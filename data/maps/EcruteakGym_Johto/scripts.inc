EcruteakGym_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EcruteakGym_Johto_OnFrame
	.byte 0

EcruteakGym_Johto_OnFrame:
	map_script_2 VAR_JOHTO_SCENE_ECRUTEAK_GYM, 0, EcruteakGym_Johto_EcruteakGymClosed_Entry
	.2byte 0

EcruteakGym_Johto_EcruteakGymMortyScript_Entry::
	lockall
	goto EcruteakGym_Johto_EcruteakGymMortyScript

EcruteakGym_Johto_EcruteakGymGuideScript_Entry::
	lockall
	goto EcruteakGym_Johto_EcruteakGymGuideScript

EcruteakGym_Johto_EcruteakGymStatue_Entry::
	lockall
	goto EcruteakGym_Johto_EcruteakGymStatue

EcruteakGym_Johto_EcruteakGymClosed_Entry::
	lockall
	goto EcruteakGym_Johto_EcruteakGymClosed


EcruteakGym_Johto_EcruteakGymMortyScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_MORTY, EcruteakGym_Johto_EcruteakGymMortyScript_FightDone
	message EcruteakGym_Johto_MortyIntroText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext MortyWinLossText, 0
	goto Johto_EventScript_Unimplemented

EcruteakGym_Johto_EcruteakGymMortyScript_FightDone:
	goto_if_set FLAG_JOHTO_GOT_TM30_SHADOW_BALL, EcruteakGym_Johto_EcruteakGymMortyScript_GotShadowBall
	setflag FLAG_JOHTO_BEAT_SAGE_JEFFREY
	setflag FLAG_JOHTO_BEAT_SAGE_PING
	setflag FLAG_JOHTO_BEAT_MEDIUM_MARTHA
	setflag FLAG_JOHTO_BEAT_MEDIUM_GRACE
	message EcruteakGym_Johto_MortyText_FogBadgeSpeech
	waitmessage
	waitbuttonpress
	@ TODO unsupported: verbosegiveitem TM_SHADOW_BALL
	goto Johto_EventScript_Unimplemented

EcruteakGym_Johto_EcruteakGymMortyScript_GotShadowBall:
	message EcruteakGym_Johto_MortyFightDoneText
	waitmessage
	waitbuttonpress

EcruteakGym_Johto_EcruteakGymMortyScript_NoRoomForShadowBall:
	closemessage
	releaseall
	end

EcruteakGym_Johto_EcruteakGymClosed:
	applymovement OBJ_EVENT_ID_PLAYER, EcruteakGym_Johto_EcruteakGymPlayerStepUpMovement
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 7, EcruteakGym_Johto_EcruteakGymGrampsSlowStepDownMovement
	waitmovement 7
	message EcruteakGym_Johto_EcruteakGymClosedText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement 7, EcruteakGym_Johto_EcruteakGymPlayerSlowStepDownMovement
	applymovement OBJ_EVENT_ID_PLAYER, EcruteakGym_Johto_EcruteakGymPlayerSlowStepDownMovement
	waitmovement OBJ_EVENT_ID_PLAYER
	@ TODO unsupported: special FadeOutToWhite
	goto Johto_EventScript_Unimplemented

EcruteakGym_Johto_EcruteakGymGuideScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_MORTY, EcruteakGym_Johto_EcruteakGymGuideScript_EcruteakGymGuideWinScript
	message EcruteakGym_Johto_EcruteakGymGuideText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

EcruteakGym_Johto_EcruteakGymGuideScript_EcruteakGymGuideWinScript:
	message EcruteakGym_Johto_EcruteakGymGuideWinText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

EcruteakGym_Johto_EcruteakGymStatue:
	goto_if_set FLAG_JOHTO_ENGINE_FOGBADGE, EcruteakGym_Johto_EcruteakGymStatue_Beaten
	goto Johto_Std_GymStatue1Script

EcruteakGym_Johto_EcruteakGymStatue_Beaten:
	@ TODO unsupported: gettrainername STRING_BUFFER_4, MORTY, MORTY1
	goto Johto_EventScript_Unimplemented

EcruteakGym_Johto_EcruteakGymPlayerStepUpMovement:
	walk_up
	step_end

EcruteakGym_Johto_EcruteakGymPlayerSlowStepDownMovement:
	lock_facing_direction
	walk_slow_down
	unlock_facing_direction
	step_end

EcruteakGym_Johto_EcruteakGymGrampsSlowStepDownMovement:
	walk_slow_down
	step_end

EcruteakGym_Johto_MortyIntroText:
	.string "Good of you to\n"
	.string "have come."
	.string "\pHere in ECRUTEAK,\n"
	.string "POKéMON have been\l"
	.string "revered."
	.string "\pIt's said that a\n"
	.string "rainbow-colored"
	.string "\pPOKéMON will come\n"
	.string "down to appear"
	.string "\pbefore a truly\n"
	.string "powerful trainer."
	.string "\pI believed that\n"
	.string "tale, so I have"
	.string "\psecretly trained\n"
	.string "here all my life."
	.string "\pAs a result, I can\n"
	.string "now see what\l"
	.string "others cannot."
	.string "\pJust a bit more…"
	.string "\pWith a little\n"
	.string "more, I could see"
	.string "\pa future in which\n"
	.string "I meet the POKéMON\l"
	.string "of rainbow colors."
	.string "\pYou're going to\n"
	.string "help me reach that\l"
	.string "level!$"

EcruteakGym_Johto_MortyText_FogBadgeSpeech:
	.string "By having FOG-\n"
	.string "BADGE, POKéMON up"
	.string "\pto L50 will obey\n"
	.string "you."
	.string "\pAlso, POKéMON that\n"
	.string "know SURF will be"
	.string "\pable to use that\n"
	.string "move anytime."
	.string "\pI want you to have\n"
	.string "this too.$"

EcruteakGym_Johto_MortyFightDoneText:
	.string "I see…"
	.string "\pYour journey has\n"
	.string "taken you to far-\l"
	.string "away places."
	.string "\pAnd you have wit-\n"
	.string "nessed much more\l"
	.string "than I."
	.string "\pI envy you for\n"
	.string "that…$"

EcruteakGym_Johto_EcruteakGymGuideText:
	.string "The trainers here\n"
	.string "have secret mo-\l"
	.string "tives."
	.string "\pIf you win, they\n"
	.string "may tell you some"
	.string "\pdeep secrets about\n"
	.string "ECRUTEAK.$"

EcruteakGym_Johto_EcruteakGymGuideWinText:
	.string "Whew, {PLAYER}.\n"
	.string "You did great!"
	.string "\pI was cowering in\n"
	.string "the corner out of\l"
	.string "pure terror!$"

EcruteakGym_Johto_EcruteakGymClosedText:
	.string "MORTY, the GYM\n"
	.string "LEADER, is absent."
	.string "\pSorry, but you'll\n"
	.string "have to leave."
	.string "\pHohohoho.$"
