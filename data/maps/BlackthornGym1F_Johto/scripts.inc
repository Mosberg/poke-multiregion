BlackthornGym1F_Johto_MapScripts::
	.byte 0

BlackthornGym1F_Johto_BlackthornGymClairScript_Entry::
	lockall
	goto BlackthornGym1F_Johto_BlackthornGymClairScript

BlackthornGym1F_Johto_BlackthornGymGuideScript_Entry::
	lockall
	goto BlackthornGym1F_Johto_BlackthornGymGuideScript

BlackthornGym1F_Johto_BlackthornGymStatue_Entry::
	lockall
	goto BlackthornGym1F_Johto_BlackthornGymStatue


BlackthornGym1F_Johto_BlackthornGymClairScript:
	faceplayer
	goto_if_set FLAG_JOHTO_ENGINE_RISINGBADGE, BlackthornGym1F_Johto_BlackthornGymClairScript_AlreadyGotBadge
	goto_if_set FLAG_JOHTO_BEAT_CLAIR, BlackthornGym1F_Johto_BlackthornGymClairScript_FightDone
	message BlackthornGym1F_Johto_ClairIntroText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext ClairWinText, 0
	goto Johto_EventScript_Unimplemented

BlackthornGym1F_Johto_BlackthornGymClairScript_FightDone:
	message BlackthornGym1F_Johto_ClairText_TooMuchToExpect
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

BlackthornGym1F_Johto_BlackthornGymClairScript_AlreadyGotBadge:
	goto_if_set FLAG_JOHTO_GOT_TM24_DRAGONBREATH, BlackthornGym1F_Johto_BlackthornGymClairScript_GotTM24
	message BlackthornGym1F_Johto_BlackthornGymClairText_YouKeptMeWaiting
	waitmessage
	waitbuttonpress
	@ TODO unsupported: giveitem TM_DRAGONBREATH
	goto Johto_EventScript_Unimplemented

BlackthornGym1F_Johto_BlackthornGymClairScript_GotTM24:
	message BlackthornGym1F_Johto_BlackthornGymClairText_League
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

BlackthornGym1F_Johto_BlackthornGymGuideScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_CLAIR, BlackthornGym1F_Johto_BlackthornGymGuideScript_BlackthornGymGuideWinScript
	message BlackthornGym1F_Johto_BlackthornGymGuideText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

BlackthornGym1F_Johto_BlackthornGymGuideScript_BlackthornGymGuideWinScript:
	message BlackthornGym1F_Johto_BlackthornGymGuideWinText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

BlackthornGym1F_Johto_BlackthornGymStatue:
	goto_if_set FLAG_JOHTO_ENGINE_RISINGBADGE, BlackthornGym1F_Johto_BlackthornGymStatue_Beaten
	goto Johto_Std_GymStatue1Script

BlackthornGym1F_Johto_BlackthornGymStatue_Beaten:
	@ TODO unsupported: gettrainername STRING_BUFFER_4, CLAIR, CLAIR1
	goto Johto_EventScript_Unimplemented

BlackthornGym1F_Johto_ClairIntroText:
	.string "I am CLAIR."
	.string "\pThe world's best\n"
	.string "dragon master."
	.string "\pI can hold my own\n"
	.string "against even the"
	.string "\pPOKéMON LEAGUE's\n"
	.string "ELITE FOUR."
	.string "\pDo you still want\n"
	.string "to take me on?"
	.string "\p…Fine.\n"
	.string "Let's do it!"
	.string "\pAs a GYM LEADER,\n"
	.string "I will use my full"
	.string "\ppower against any\n"
	.string "opponent!$"

BlackthornGym1F_Johto_ClairText_TooMuchToExpect:
	.string "What's the matter?"
	.string "\pIs it too much to\n"
	.string "expect of you?$"

BlackthornGym1F_Johto_BlackthornGymClairText_YouKeptMeWaiting:
	.string "You've kept me\n"
	.string "waiting!"
	.string "\pHere! Take this!$"

BlackthornGym1F_Johto_BlackthornGymClairText_League:
	.string "What's the matter?"
	.string "\pAren't you headed\n"
	.string "to the POKéMON\l"
	.string "LEAGUE?"
	.string "\pDon't you know\n"
	.string "where it is?"
	.string "\pFrom here, go to\n"
	.string "NEW BARK TOWN."
	.string "\pThen SURF east.\n"
	.string "The route there is\l"
	.string "very tough."
	.string "\pDon't you dare\n"
	.string "lose at the POKé-\l"
	.string "MON LEAGUE!"
	.string "\pIf you do, I'll\n"
	.string "feel even worse"
	.string "\pabout having lost\n"
	.string "to you!"
	.string "\pGive it every-\n"
	.string "thing you've got.$"

BlackthornGym1F_Johto_BlackthornGymGuideText:
	.string "Yo! CHAMP in\n"
	.string "making!"
	.string "\pIt's been a long\n"
	.string "journey, but we"
	.string "\pare almost done!\n"
	.string "Count on me!"
	.string "\pCLAIR uses the\n"
	.string "mythical and sac-\l"
	.string "red dragon-type\l"
	.string "POKéMON."
	.string "\pYou can't damage\n"
	.string "them very easily."
	.string "\pBut you know,\n"
	.string "they're supposed"
	.string "\pto be weak against\n"
	.string "ice-type moves.$"

BlackthornGym1F_Johto_BlackthornGymGuideWinText:
	.string "You were great to\n"
	.string "beat CLAIR!"
	.string "\pAll that's left is\n"
	.string "the POKéMON LEAGUE\l"
	.string "challenge."
	.string "\pYou're on the way\n"
	.string "to becoming the\l"
	.string "POKéMON CHAMPION!$"
