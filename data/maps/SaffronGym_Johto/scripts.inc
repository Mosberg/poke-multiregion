SaffronGym_Johto_MapScripts::
	.byte 0

SaffronGym_Johto_SaffronGymSabrinaScript_Entry::
	lockall
	goto SaffronGym_Johto_SaffronGymSabrinaScript

SaffronGym_Johto_SaffronGymGuideScript_Entry::
	lockall
	goto SaffronGym_Johto_SaffronGymGuideScript

SaffronGym_Johto_SaffronGymStatue_Entry::
	lockall
	goto SaffronGym_Johto_SaffronGymStatue


SaffronGym_Johto_SaffronGymSabrinaScript:
	faceplayer
	goto_if_set FLAG_JOHTO_ENGINE_MARSHBADGE, SaffronGym_Johto_SaffronGymSabrinaScript_FightDone
	message SaffronGym_Johto_SabrinaIntroText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext SabrinaWinLossText, 0
	goto Johto_EventScript_Unimplemented

SaffronGym_Johto_SaffronGymSabrinaScript_FightDone:
	message SaffronGym_Johto_SabrinaFightDoneText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SaffronGym_Johto_SaffronGymGuideScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_SABRINA, SaffronGym_Johto_SaffronGymGuideScript_SaffronGymGuideWinScript
	message SaffronGym_Johto_SaffronGymGuideText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SaffronGym_Johto_SaffronGymGuideScript_SaffronGymGuideWinScript:
	message SaffronGym_Johto_SaffronGymGuideWinText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SaffronGym_Johto_SaffronGymStatue:
	goto_if_set FLAG_JOHTO_ENGINE_MARSHBADGE, SaffronGym_Johto_SaffronGymStatue_Beaten
	goto Johto_Std_GymStatue1Script

SaffronGym_Johto_SaffronGymStatue_Beaten:
	@ TODO unsupported: gettrainername STRING_BUFFER_4, SABRINA, SABRINA1
	goto Johto_EventScript_Unimplemented

SaffronGym_Johto_SabrinaIntroText:
	.string "SABRINA: I knew\n"
	.string "you were coming…"
	.string "\pThree years ago I\n"
	.string "had a vision of\l"
	.string "your arrival."
	.string "\pYou're after my\n"
	.string "BADGE."
	.string "\pI don't enjoy bat-\n"
	.string "tling, but it's my"
	.string "\pduty as a LEADER\n"
	.string "to confer BADGES"
	.string "\pon anyone who has\n"
	.string "proven him- or\l"
	.string "herself worthy."
	.string "\pSince you wish it,\n"
	.string "I will show you my\l"
	.string "psychic powers!$"

SaffronGym_Johto_SabrinaFightDoneText:
	.string "SABRINA: Your love\n"
	.string "for your POKéMON"
	.string "\poverwhelmed my\n"
	.string "psychic power…"
	.string "\pThe power of love,\n"
	.string "I think, is also a"
	.string "\pkind of psychic\n"
	.string "power…$"

SaffronGym_Johto_SaffronGymGuideText:
	.string "Yo, CHAMP in\n"
	.string "making!"
	.string "\pA trainer as\n"
	.string "skilled as you"
	.string "\pdoesn't need to be\n"
	.string "told how to deal"
	.string "\pwith psychic-type\n"
	.string "POKéMON, right?"
	.string "\pI expect great\n"
	.string "things from you!"
	.string "\pGood luck!$"

SaffronGym_Johto_SaffronGymGuideWinText:
	.string "That was another\n"
	.string "fantastic battle!$"
