LakeOfRage_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LakeOfRage_Johto_OnTransition
	.byte 0

LakeOfRage_Johto_OnTransition:
	call LakeOfRage_Johto_LakeOfRageFlypointCallback_Sub
	call LakeOfRage_Johto_LakeOfRageWesleyCallback_Sub
	end

LakeOfRage_Johto_LakeOfRageLanceScript_Entry::
	lockall
	goto LakeOfRage_Johto_LakeOfRageLanceScript

LakeOfRage_Johto_LakeOfRageGrampsScript_Entry::
	lockall
	goto LakeOfRage_Johto_LakeOfRageGrampsScript

LakeOfRage_Johto_LakeOfRageSuperNerdScript_Entry::
	lockall
	goto LakeOfRage_Johto_LakeOfRageSuperNerdScript

LakeOfRage_Johto_LakeOfRageCooltrainerFScript_Entry::
	lockall
	goto LakeOfRage_Johto_LakeOfRageCooltrainerFScript

LakeOfRage_Johto_RedGyarados_Entry::
	lockall
	goto LakeOfRage_Johto_RedGyarados

LakeOfRage_Johto_WesleyScript_Entry::
	lockall
	goto LakeOfRage_Johto_WesleyScript

LakeOfRage_Johto_LakeOfRageSign_Entry::
	lockall
	goto LakeOfRage_Johto_LakeOfRageSign

LakeOfRage_Johto_MagikarpHouseSignScript_Entry::
	lockall
	goto LakeOfRage_Johto_MagikarpHouseSignScript


LakeOfRage_Johto_LakeOfRageLanceScript:
	goto_if_set FLAG_JOHTO_REFUSED_TO_HELP_LANCE_AT_LAKE_OF_RAGE, LakeOfRage_Johto_LakeOfRageLanceScript_AskAgainForHelp
	message LakeOfRage_Johto_LakeOfRageLanceForcedToEvolveText
	waitmessage
	waitbuttonpress
	faceplayer
	message LakeOfRage_Johto_LakeOfRageLanceIntroText
	waitmessage
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, 0, LakeOfRage_Johto_LakeOfRageLanceScript_RefusedToHelp

LakeOfRage_Johto_LakeOfRageLanceScript_AgreedToHelp:
	message LakeOfRage_Johto_LakeOfRageLanceRadioSignalText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: playsound SFX_WARP_TO
	goto Johto_EventScript_Unimplemented

LakeOfRage_Johto_LakeOfRageLanceScript_RefusedToHelp:
	message LakeOfRage_Johto_LakeOfRageLanceRefusedText
	waitmessage
	waitbuttonpress
	closemessage
	setflag FLAG_JOHTO_REFUSED_TO_HELP_LANCE_AT_LAKE_OF_RAGE
	releaseall
	end

LakeOfRage_Johto_LakeOfRageLanceScript_AskAgainForHelp:
	faceplayer
	message LakeOfRage_Johto_LakeOfRageLanceAskHelpText
	waitmessage
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, 0, LakeOfRage_Johto_LakeOfRageLanceScript_RefusedToHelp
	goto LakeOfRage_Johto_LakeOfRageLanceScript_AgreedToHelp

LakeOfRage_Johto_RedGyarados:
	message LakeOfRage_Johto_LakeOfRageGyaradosCryText
	waitmessage
	delay 15
	playmoncry SPECIES_GYARADOS, CRY_MODE_NORMAL
	waitmoncry
	closemessage
	@ TODO unsupported: loadwildmon GYARADOS, 30
	goto Johto_EventScript_Unimplemented

LakeOfRage_Johto_LakeOfRageGrampsScript:
	faceplayer
	goto_if_set FLAG_JOHTO_CLEARED_ROCKET_HIDEOUT, LakeOfRage_Johto_LakeOfRageGrampsScript_ClearedRocketHideout
	message LakeOfRage_Johto_LakeOfRageGrampsText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

LakeOfRage_Johto_LakeOfRageGrampsScript_ClearedRocketHideout:
	message LakeOfRage_Johto_LakeOfRageGrampsText_ClearedRocketHideout
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

LakeOfRage_Johto_LakeOfRageSuperNerdScript:
	faceplayer
	message LakeOfRage_Johto_LakeOfRageSuperNerdText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

LakeOfRage_Johto_LakeOfRageCooltrainerFScript:
	faceplayer
	message LakeOfRage_Johto_LakeOfRageCooltrainerFText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

LakeOfRage_Johto_LakeOfRageSign:
	message LakeOfRage_Johto_LakeOfRageSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

LakeOfRage_Johto_MagikarpHouseSignScript:
	message LakeOfRage_Johto_FishingGurusHouseSignText
	waitmessage
	goto_if_set FLAG_JOHTO_CLEARED_ROCKET_HIDEOUT, LakeOfRage_Johto_MagikarpHouseSignScript_MagikarpLengthRecord
	waitbuttonpress
	closemessage
	releaseall
	end

LakeOfRage_Johto_MagikarpHouseSignScript_MagikarpLengthRecord:
	waitbuttonpress
	@ TODO unsupported: special MagikarpHouseSign
	goto Johto_EventScript_Unimplemented

LakeOfRage_Johto_WesleyScript:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_BLACKBELT_FROM_WESLEY, LakeOfRage_Johto_WesleyWednesdayScript
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

LakeOfRage_Johto_WesleyWednesdayScript:
	message LakeOfRage_Johto_WesleyWednesdayText
	waitmessage
	waitbuttonpress

LakeOfRage_Johto_WesleyDoneScript:
	closemessage
	releaseall
	end

LakeOfRage_Johto_LakeOfRageFlypointCallback_Sub:
	setflag FLAG_JOHTO_ENGINE_FLYPOINT_LAKE_OF_RAGE
	return

LakeOfRage_Johto_LakeOfRageWesleyCallback_Sub:
	@ TODO unsupported: readvar VAR_WEEKDAY
	return

LakeOfRage_Johto_LakeOfRageLanceForcedToEvolveText:
	.string "This lake is full\n"
	.string "of GYARADOS but\l"
	.string "nothing else…"
	.string "\pSo the MAGIKARP\n"
	.string "are being forced\l"
	.string "to evolve…$"

LakeOfRage_Johto_LakeOfRageLanceIntroText:
	.string "Did you come here\n"
	.string "because of the\l"
	.string "rumors?"
	.string "\pYou're {PLAYER}?\n"
	.string "I'm LANCE, a\l"
	.string "trainer like you."
	.string "\pI heard some ru-\n"
	.string "mors, so I came to\l"
	.string "investigate…"
	.string "\pI saw the way you\n"
	.string "battled earlier,\l"
	.string "{PLAYER}."
	.string "\pI can tell that\n"
	.string "you're a trainer"
	.string "\pwith considerable\n"
	.string "skill."
	.string "\pIf you don't mind,\n"
	.string "could you help me\l"
	.string "investigate?$"

LakeOfRage_Johto_LakeOfRageLanceRadioSignalText:
	.string "LANCE: Excellent!"
	.string "\pIt seems that the\n"
	.string "LAKE's MAGIKARP"
	.string "\pare being forced\n"
	.string "to evolve."
	.string "\pA mysterious radio\n"
	.string "broadcast coming"
	.string "\pfrom MAHOGANY is\n"
	.string "the cause."
	.string "\pI'll be waiting\n"
	.string "for you, {PLAYER}.$"

LakeOfRage_Johto_LakeOfRageLanceRefusedText:
	.string "Oh… Well, if you\n"
	.string "change your mind,\l"
	.string "please help me.$"

LakeOfRage_Johto_LakeOfRageLanceAskHelpText:
	.string "LANCE: Hm? Are you\n"
	.string "going to help me?$"

LakeOfRage_Johto_LakeOfRageGyaradosCryText:
	.string "GYARADOS: Gyashaa!$"

LakeOfRage_Johto_LakeOfRageGrampsText:
	.string "The GYARADOS are\n"
	.string "angry!"
	.string "\pIt's a bad omen!$"

LakeOfRage_Johto_LakeOfRageGrampsText_ClearedRocketHideout:
	.string "Hahah! The MAGI-\n"
	.string "KARP are biting!$"

LakeOfRage_Johto_LakeOfRageSuperNerdText:
	.string "I heard this lake\n"
	.string "was made by ram-\l"
	.string "paging GYARADOS."
	.string "\pI wonder if there\n"
	.string "is any connection"
	.string "\pto their mass out-\n"
	.string "break now?$"

LakeOfRage_Johto_LakeOfRageCooltrainerFText:
	.string "Did my eyes de-\n"
	.string "ceive me? I saw a"
	.string "\pred GYARADOS in\n"
	.string "the LAKE…"
	.string "\pBut I thought\n"
	.string "GYARADOS were\l"
	.string "usually blue?$"

LakeOfRage_Johto_WesleyWednesdayText:
	.string "WESLEY: Since you\n"
	.string "found me, you must"
	.string "\phave met my broth-\n"
	.string "ers and sisters."
	.string "\pOr did you just\n"
	.string "get lucky?$"

LakeOfRage_Johto_LakeOfRageSignText:
	.string "LAKE OF RAGE,\n"
	.string "also known as\l"
	.string "GYARADOS LAKE.$"

LakeOfRage_Johto_FishingGurusHouseSignText:
	.string "FISHING GURU'S\n"
	.string "HOUSE$"
