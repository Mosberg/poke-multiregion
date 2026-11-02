SeafoamGym_Johto_MapScripts::
	.byte 0

SeafoamGym_Johto_SeafoamGymBlaineScript_Entry::
	lockall
	goto SeafoamGym_Johto_SeafoamGymBlaineScript

SeafoamGym_Johto_SeafoamGymGuideScript_Entry::
	lockall
	goto SeafoamGym_Johto_SeafoamGymGuideScript


SeafoamGym_Johto_SeafoamGymBlaineScript:
	faceplayer
	goto_if_set FLAG_JOHTO_ENGINE_VOLCANOBADGE, SeafoamGym_Johto_SeafoamGymBlaineScript_FightDone
	message SeafoamGym_Johto_BlaineIntroText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext BlaineWinLossText, 0
	goto Johto_EventScript_Unimplemented

SeafoamGym_Johto_SeafoamGymBlaineScript_FightDone:
	message SeafoamGym_Johto_BlaineFightDoneText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SeafoamGym_Johto_SeafoamGymGuideScript:
	faceplayer
	goto_if_set FLAG_JOHTO_TALKED_TO_SEAFOAM_GYM_GUIDE_ONCE, SeafoamGym_Johto_SeafoamGymGuideScript_TalkedToSeafoamGymGuideScript
	message SeafoamGym_Johto_SeafoamGymGuideWinText
	waitmessage
	waitbuttonpress
	closemessage
	setflag FLAG_JOHTO_TALKED_TO_SEAFOAM_GYM_GUIDE_ONCE
	releaseall
	end

SeafoamGym_Johto_SeafoamGymGuideScript_TalkedToSeafoamGymGuideScript:
	message SeafoamGym_Johto_SeafoamGymGuideWinText2
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SeafoamGym_Johto_BlaineIntroText:
	.string "BLAINE: Waaah!"
	.string "\pMy GYM in CINNABAR\n"
	.string "burned down."
	.string "\pMy fire-breathing\n"
	.string "POKéMON and I are"
	.string "\phomeless because\n"
	.string "of the volcano."
	.string "\pWaaah!"
	.string "\pBut I'm back in\n"
	.string "business as a GYM"
	.string "\pLEADER here in\n"
	.string "this cave."
	.string "\pIf you can beat\n"
	.string "me, I'll give you\l"
	.string "a BADGE."
	.string "\pHa! You'd better\n"
	.string "have BURN HEAL!$"

SeafoamGym_Johto_BlaineFightDoneText:
	.string "BLAINE: My fire\n"
	.string "POKéMON will be"
	.string "\peven stronger.\n"
	.string "Just you watch!$"

SeafoamGym_Johto_SeafoamGymGuideWinText:
	.string "Yo!"
	.string "\p… Huh? It's over\n"
	.string "already?"
	.string "\pSorry, sorry!"
	.string "\pCINNABAR GYM was\n"
	.string "gone, so I didn't"
	.string "\pknow where to find\n"
	.string "you."
	.string "\pBut, hey, you're\n"
	.string "plenty strong even"
	.string "\pwithout my advice.\n"
	.string "I knew you'd win!$"

SeafoamGym_Johto_SeafoamGymGuideWinText2:
	.string "A POKéMON GYM can\n"
	.string "be anywhere as"
	.string "\plong as the GYM\n"
	.string "LEADER is there."
	.string "\pThere's no need\n"
	.string "for a building.$"
