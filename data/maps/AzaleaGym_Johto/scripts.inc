AzaleaGym_Johto_MapScripts::
	.byte 0

AzaleaGym_Johto_AzaleaGymBugsyScript_Entry::
	lockall
	goto AzaleaGym_Johto_AzaleaGymBugsyScript

AzaleaGym_Johto_AzaleaGymGuideScript_Entry::
	lockall
	goto AzaleaGym_Johto_AzaleaGymGuideScript

AzaleaGym_Johto_AzaleaGymStatue_Entry::
	lockall
	goto AzaleaGym_Johto_AzaleaGymStatue


AzaleaGym_Johto_AzaleaGymBugsyScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_BUGSY, AzaleaGym_Johto_AzaleaGymBugsyScript_FightDone
	message AzaleaGym_Johto_BugsyText_INeverLose
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext BugsyText_ResearchIncomplete, 0
	goto Johto_EventScript_Unimplemented

AzaleaGym_Johto_AzaleaGymBugsyScript_FightDone:
	goto_if_set FLAG_JOHTO_GOT_TM49_FURY_CUTTER, AzaleaGym_Johto_AzaleaGymBugsyScript_GotFuryCutter
	setflag FLAG_JOHTO_BEAT_TWINS_AMY_AND_MAY
	setflag FLAG_JOHTO_BEAT_BUG_CATCHER_BENNY
	setflag FLAG_JOHTO_BEAT_BUG_CATCHER_AL
	setflag FLAG_JOHTO_BEAT_BUG_CATCHER_JOSH
	message AzaleaGym_Johto_BugsyText_HiveBadgeSpeech
	waitmessage
	waitbuttonpress
	@ TODO unsupported: verbosegiveitem TM_FURY_CUTTER
	goto Johto_EventScript_Unimplemented

AzaleaGym_Johto_AzaleaGymBugsyScript_GotFuryCutter:
	message AzaleaGym_Johto_BugsyText_BugMonsAreDeep
	waitmessage
	waitbuttonpress

AzaleaGym_Johto_AzaleaGymBugsyScript_NoRoomForFuryCutter:
	closemessage
	releaseall
	end

AzaleaGym_Johto_AzaleaGymGuideScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_BUGSY, AzaleaGym_Johto_AzaleaGymGuideScript_AzaleaGymGuideWinScript
	message AzaleaGym_Johto_AzaleaGymGuideText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

AzaleaGym_Johto_AzaleaGymGuideScript_AzaleaGymGuideWinScript:
	message AzaleaGym_Johto_AzaleaGymGuideWinText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

AzaleaGym_Johto_AzaleaGymStatue:
	goto_if_set FLAG_JOHTO_ENGINE_HIVEBADGE, AzaleaGym_Johto_AzaleaGymStatue_Beaten
	goto Johto_Std_GymStatue1Script

AzaleaGym_Johto_AzaleaGymStatue_Beaten:
	@ TODO unsupported: gettrainername STRING_BUFFER_4, BUGSY, BUGSY1
	goto Johto_EventScript_Unimplemented

AzaleaGym_Johto_BugsyText_INeverLose:
	.string "I'm BUGSY!\n"
	.string "I never lose when"
	.string "\pit comes to bug\n"
	.string "POKéMON."
	.string "\pMy research is\n"
	.string "going to make me"
	.string "\pthe authority on\n"
	.string "bug POKéMON!"
	.string "\pLet me demonstrate\n"
	.string "what I've learned\l"
	.string "from my studies.$"

AzaleaGym_Johto_BugsyText_HiveBadgeSpeech:
	.string "Do you know the\n"
	.string "benefits of HIVE-\l"
	.string "BADGE?"
	.string "\pIf you have it,\n"
	.string "POKéMON up to L30"
	.string "\pwill obey you,\n"
	.string "even traded ones."
	.string "\pPOKéMON that know\n"
	.string "CUT will be able"
	.string "\pto use it outside\n"
	.string "of battle too."
	.string "\pHere, I also want\n"
	.string "you to have this.$"

AzaleaGym_Johto_BugsyText_BugMonsAreDeep:
	.string "Bug POKéMON are\n"
	.string "deep. There are"
	.string "\pmany mysteries to\n"
	.string "be explored."
	.string "\pStudy your favor-\n"
	.string "ites thoroughly.$"

AzaleaGym_Johto_AzaleaGymGuideText:
	.string "Yo, challenger!"
	.string "\pBUGSY's young, but\n"
	.string "his knowledge of"
	.string "\pbug POKéMON is for\n"
	.string "real."
	.string "\pIt's going to be\n"
	.string "tough without my\l"
	.string "advice."
	.string "\pLet's see… Bug\n"
	.string "POKéMON don't like\l"
	.string "fire."
	.string "\pFlying-type moves\n"
	.string "are super-effec-\l"
	.string "tive too.$"

AzaleaGym_Johto_AzaleaGymGuideWinText:
	.string "Well done! That\n"
	.string "was a great clash"
	.string "\pof talented young\n"
	.string "trainers."
	.string "\pWith people like\n"
	.string "you, the future of\l"
	.string "POKéMON is bright!$"
