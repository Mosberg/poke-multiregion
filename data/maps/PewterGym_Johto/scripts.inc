PewterGym_Johto_MapScripts::
	.byte 0

PewterGym_Johto_PewterGymBrockScript_Entry::
	lockall
	goto PewterGym_Johto_PewterGymBrockScript

PewterGym_Johto_PewterGymGuideScript_Entry::
	lockall
	goto PewterGym_Johto_PewterGymGuideScript

PewterGym_Johto_PewterGymStatue_Entry::
	lockall
	goto PewterGym_Johto_PewterGymStatue


PewterGym_Johto_PewterGymBrockScript:
	faceplayer
	goto_if_set FLAG_JOHTO_ENGINE_BOULDERBADGE, PewterGym_Johto_PewterGymBrockScript_FightDone
	message PewterGym_Johto_BrockIntroText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext BrockWinLossText, 0
	goto Johto_EventScript_Unimplemented

PewterGym_Johto_PewterGymBrockScript_FightDone:
	message PewterGym_Johto_BrockFightDoneText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

PewterGym_Johto_PewterGymGuideScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_BROCK, PewterGym_Johto_PewterGymGuideScript_PewterGymGuideWinScript
	message PewterGym_Johto_PewterGymGuideText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

PewterGym_Johto_PewterGymGuideScript_PewterGymGuideWinScript:
	message PewterGym_Johto_PewterGymGuideWinText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

PewterGym_Johto_PewterGymStatue:
	goto_if_set FLAG_JOHTO_ENGINE_BOULDERBADGE, PewterGym_Johto_PewterGymStatue_Beaten
	goto Johto_Std_GymStatue1Script

PewterGym_Johto_PewterGymStatue_Beaten:
	@ TODO unsupported: gettrainername STRING_BUFFER_4, BROCK, BROCK1
	goto Johto_EventScript_Unimplemented

PewterGym_Johto_BrockIntroText:
	.string "BROCK: Wow, it's\n"
	.string "not often that we"
	.string "\pget a challenger\n"
	.string "from JOHTO."
	.string "\pI'm BROCK, the\n"
	.string "PEWTER GYM LEADER."
	.string "\pI'm an expert on\n"
	.string "rock-type POKéMON."
	.string "\pMy POKéMON are im-\n"
	.string "pervious to most"
	.string "\pphysical attacks.\n"
	.string "You'll have a hard"
	.string "\ptime inflicting\n"
	.string "any damage."
	.string "\pCome on!$"

PewterGym_Johto_BrockFightDoneText:
	.string "BROCK: The world\n"
	.string "is huge. There are"
	.string "\pstill many strong\n"
	.string "trainers like you."
	.string "\pJust wait and see.\n"
	.string "I'm going to be-\l"
	.string "come a lot strong-\l"
	.string "er too.$"

PewterGym_Johto_PewterGymGuideText:
	.string "Yo! CHAMP in\n"
	.string "making! You're"
	.string "\preally rocking.\n"
	.string "Are you battling"
	.string "\pthe GYM LEADERS of\n"
	.string "KANTO?"
	.string "\pThey're strong and\n"
	.string "dedicated people,"
	.string "\pjust like JOHTO's\n"
	.string "GYM LEADERS.$"

PewterGym_Johto_PewterGymGuideWinText:
	.string "Yo! CHAMP in\n"
	.string "making! That GYM"
	.string "\pdidn't give you\n"
	.string "much trouble."
	.string "\pThe way you took\n"
	.string "charge was really"
	.string "\pinspiring. I mean\n"
	.string "that seriously.$"
