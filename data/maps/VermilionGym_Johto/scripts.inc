VermilionGym_Johto_MapScripts::
	.byte 0

VermilionGym_Johto_VermilionGymSurgeScript_Entry::
	lockall
	goto VermilionGym_Johto_VermilionGymSurgeScript

VermilionGym_Johto_VermilionGymGuideScript_Entry::
	lockall
	goto VermilionGym_Johto_VermilionGymGuideScript

VermilionGym_Johto_VermilionGymTrashCan_Entry::
	lockall
	goto VermilionGym_Johto_VermilionGymTrashCan

VermilionGym_Johto_VermilionGymStatue_Entry::
	lockall
	goto VermilionGym_Johto_VermilionGymStatue


VermilionGym_Johto_VermilionGymSurgeScript:
	faceplayer
	goto_if_set FLAG_JOHTO_ENGINE_THUNDERBADGE, VermilionGym_Johto_VermilionGymSurgeScript_FightDone
	message VermilionGym_Johto_LtSurgeIntroText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext LtSurgeWinLossText, 0
	goto Johto_EventScript_Unimplemented

VermilionGym_Johto_VermilionGymSurgeScript_FightDone:
	message VermilionGym_Johto_LtSurgeFightDoneText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionGym_Johto_VermilionGymGuideScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_LTSURGE, VermilionGym_Johto_VermilionGymGuideScript_VermilionGymGuideWinScript
	message VermilionGym_Johto_VermilionGymGuideText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionGym_Johto_VermilionGymGuideScript_VermilionGymGuideWinScript:
	message VermilionGym_Johto_VermilionGymGuideWinText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionGym_Johto_VermilionGymTrashCan:
	message VermilionGym_Johto_VermilionGymTrashCanText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

VermilionGym_Johto_VermilionGymStatue:
	goto_if_set FLAG_JOHTO_ENGINE_THUNDERBADGE, VermilionGym_Johto_VermilionGymStatue_Beaten
	goto Johto_Std_GymStatue1Script

VermilionGym_Johto_VermilionGymStatue_Beaten:
	@ TODO unsupported: gettrainername STRING_BUFFER_4, LT_SURGE, LT_SURGE1
	goto Johto_EventScript_Unimplemented

VermilionGym_Johto_LtSurgeIntroText:
	.string "SURGE: Hey, you\n"
	.string "little tyke!"
	.string "\pI have to hand it\n"
	.string "to you. It may not"
	.string "\pbe very smart to\n"
	.string "challenge me, but\l"
	.string "it takes guts!"
	.string "\pWhen it comes to\n"
	.string "electric POKéMON,\l"
	.string "I'm number one!"
	.string "\pI've never lost on\n"
	.string "the battlefield."
	.string "\pI'll zap you just\n"
	.string "like I did my\l"
	.string "enemies in war!$"

VermilionGym_Johto_LtSurgeFightDoneText:
	.string "SURGE: Hey, kid!\n"
	.string "Still slugging and\l"
	.string "chugging away?"
	.string "\pMy POKéMON and I\n"
	.string "are still at it!$"

VermilionGym_Johto_VermilionGymGuideText:
	.string "Yo! CHAMP in\n"
	.string "making!"
	.string "\pYou lucked out\n"
	.string "this time."
	.string "\pLT.SURGE is very\n"
	.string "cautious. He has"
	.string "\ptraps set all over\n"
	.string "the GYM."
	.string "\pBut--he-heh--the\n"
	.string "traps aren't\l"
	.string "active right now."
	.string "\pYou'll have no\n"
	.string "problem getting to\l"
	.string "LT.SURGE.$"

VermilionGym_Johto_VermilionGymGuideWinText:
	.string "Whew! That was an\n"
	.string "electrifying bout!"
	.string "\pIt sure made me\n"
	.string "nervous.$"

VermilionGym_Johto_VermilionGymTrashCanText:
	.string "Nope! Nothing here\n"
	.string "but trash.$"
