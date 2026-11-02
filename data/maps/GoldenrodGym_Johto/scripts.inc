GoldenrodGym_Johto_MapScripts::
	.byte 0

GoldenrodGym_Johto_GoldenrodGymWhitneyScript_Entry::
	lockall
	goto GoldenrodGym_Johto_GoldenrodGymWhitneyScript

GoldenrodGym_Johto_GoldenrodGymGuideScript_Entry::
	lockall
	goto GoldenrodGym_Johto_GoldenrodGymGuideScript

GoldenrodGym_Johto_GoldenrodGymStatue_Entry::
	lockall
	goto GoldenrodGym_Johto_GoldenrodGymStatue

GoldenrodGym_Johto_WhitneyCriesScript_Entry::
	lockall
	goto GoldenrodGym_Johto_WhitneyCriesScript


GoldenrodGym_Johto_GoldenrodGymWhitneyScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_WHITNEY, GoldenrodGym_Johto_GoldenrodGymWhitneyScript_FightDone
	message GoldenrodGym_Johto_WhitneyBeforeText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext WhitneyShouldntBeSoSeriousText, 0
	goto Johto_EventScript_Unimplemented

GoldenrodGym_Johto_GoldenrodGymWhitneyScript_FightDone:
	goto_if_unset FLAG_JOHTO_MADE_WHITNEY_CRY, GoldenrodGym_Johto_GoldenrodGymWhitneyScript_StoppedCrying
	message GoldenrodGym_Johto_WhitneyYouMeanieText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodGym_Johto_GoldenrodGymWhitneyScript_StoppedCrying:
	goto_if_set FLAG_JOHTO_GOT_TM45_ATTRACT, GoldenrodGym_Johto_GoldenrodGymWhitneyScript_GotAttract
	goto_if_set FLAG_JOHTO_ENGINE_PLAINBADGE, GoldenrodGym_Johto_GoldenrodGymWhitneyScript_GotPlainBadge
	message GoldenrodGym_Johto_WhitneyWhatDoYouWantText
	waitmessage
	waitbuttonpress
	waitse
	message GoldenrodGym_Johto_PlayerReceivedPlainBadgeText
	waitmessage
	@ TODO unsupported: playsound SFX_GET_BADGE
	goto Johto_EventScript_Unimplemented

GoldenrodGym_Johto_GoldenrodGymWhitneyScript_GotPlainBadge:
	message GoldenrodGym_Johto_WhitneyPlainBadgeText
	waitmessage
	waitbuttonpress
	@ TODO unsupported: verbosegiveitem TM_ATTRACT
	goto Johto_EventScript_Unimplemented

GoldenrodGym_Johto_GoldenrodGymWhitneyScript_GotAttract:
	message GoldenrodGym_Johto_WhitneyGoodCryText
	waitmessage
	waitbuttonpress

GoldenrodGym_Johto_GoldenrodGymWhitneyScript_NoRoomForAttract:
	closemessage
	releaseall
	end

GoldenrodGym_Johto_WhitneyCriesScript:
	applymovement 3, Johto_Movement_Emote_exclamation_mark
	waitmovement 3
	applymovement 3, GoldenrodGym_Johto_BridgetWalksUpMovement
	waitmovement 3
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Down
	waitmovement OBJ_EVENT_ID_PLAYER
	message GoldenrodGym_Johto_BridgetWhitneyCriesText
	waitmessage
	waitbuttonpress
	closemessage
	applymovement 3, GoldenrodGym_Johto_BridgetWalksAwayMovement
	waitmovement 3
	setvar VAR_JOHTO_SCENE_GOLDENROD_GYM, 0
	clearflag FLAG_JOHTO_MADE_WHITNEY_CRY
	releaseall
	end

GoldenrodGym_Johto_GoldenrodGymGuideScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_WHITNEY, GoldenrodGym_Johto_GoldenrodGymGuideScript_GoldenrodGymGuideWinScript
	message GoldenrodGym_Johto_GoldenrodGymGuideText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodGym_Johto_GoldenrodGymGuideScript_GoldenrodGymGuideWinScript:
	message GoldenrodGym_Johto_GoldenrodGymGuideWinText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodGym_Johto_GoldenrodGymStatue:
	goto_if_set FLAG_JOHTO_ENGINE_PLAINBADGE, GoldenrodGym_Johto_GoldenrodGymStatue_Beaten
	goto Johto_Std_GymStatue1Script

GoldenrodGym_Johto_GoldenrodGymStatue_Beaten:
	@ TODO unsupported: gettrainername STRING_BUFFER_4, WHITNEY, WHITNEY1
	goto Johto_EventScript_Unimplemented

GoldenrodGym_Johto_BridgetWalksUpMovement:
	walk_left
	face_up
	step_end

GoldenrodGym_Johto_BridgetWalksAwayMovement:
	walk_right
	face_left
	step_end

GoldenrodGym_Johto_WhitneyBeforeText:
	.string "Hi! I'm WHITNEY!"
	.string "\pEveryone was into\n"
	.string "POKéMON, so I got\l"
	.string "into it too!"
	.string "\pPOKéMON are\n"
	.string "super-cute!"
	.string "\pYou want to bat-\n"
	.string "tle? I'm warning\l"
	.string "you--I'm good!$"

GoldenrodGym_Johto_WhitneyYouMeanieText:
	.string "Waaaaah!"
	.string "\pWaaaaah!"
	.string "\p…Snivel, hic…\n"
	.string "…You meanie!$"

GoldenrodGym_Johto_WhitneyWhatDoYouWantText:
	.string "…Sniff…"
	.string "\pWhat? What do you\n"
	.string "want? A BADGE?"
	.string "\pOh, right.\n"
	.string "I forgot. Here's\l"
	.string "PLAINBADGE.$"

GoldenrodGym_Johto_PlayerReceivedPlainBadgeText:
	.string "{PLAYER} received\n"
	.string "PLAINBADGE.$"

GoldenrodGym_Johto_WhitneyPlainBadgeText:
	.string "PLAINBADGE lets\n"
	.string "your POKéMON use"
	.string "\pSTRENGTH outside\n"
	.string "of battle."
	.string "\pIt also boosts\n"
	.string "your POKéMON's\l"
	.string "SPEED."
	.string "\pOh, you can have\n"
	.string "this too!$"

GoldenrodGym_Johto_WhitneyGoodCryText:
	.string "Ah, that was a\n"
	.string "good cry!"
	.string "\pCome for a visit\n"
	.string "again! Bye-bye!$"

GoldenrodGym_Johto_BridgetWhitneyCriesText:
	.string "Oh, no. You made\n"
	.string "WHITNEY cry."
	.string "\pIt's OK. She'll\n"
	.string "stop soon. She"
	.string "\palways cries when\n"
	.string "she loses.$"

GoldenrodGym_Johto_GoldenrodGymGuideText:
	.string "Yo! CHAMP in\n"
	.string "making!"
	.string "\pThis GYM is home\n"
	.string "to normal-type\l"
	.string "POKéMON trainers."
	.string "\pI recommend you\n"
	.string "use fighting-type\l"
	.string "POKéMON.$"

GoldenrodGym_Johto_GoldenrodGymGuideWinText:
	.string "You won? Great! I\n"
	.string "was busy admiring\l"
	.string "the ladies here.$"
