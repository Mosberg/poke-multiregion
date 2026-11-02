LakeOfRage_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LakeOfRage_Johto_OnTransition
	.byte 0

LakeOfRage_Johto_OnTransition:
	call LakeOfRage_Johto_LakeOfRageFlypointCallback_Cb
	call LakeOfRage_Johto_LakeOfRageWesleyCallback_Cb
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

LakeOfRage_Johto_TrainerFisherAndre::
	trainerbattle_single TRAINER_JOHTO_FISHER_ANDRE, LakeOfRage_Johto_FisherAndreSeenText, LakeOfRage_Johto_FisherAndreBeatenText
	setflag FLAG_JOHTO_BEAT_FISHER_ANDRE
	lock
	faceplayer
	goto LakeOfRage_Johto_TrainerFisherAndre_Script

LakeOfRage_Johto_TrainerFisherAndre_Script:
	message LakeOfRage_Johto_FisherAndreAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

LakeOfRage_Johto_TrainerFisherRaymond::
	trainerbattle_single TRAINER_JOHTO_FISHER_RAYMOND, LakeOfRage_Johto_FisherRaymondSeenText, LakeOfRage_Johto_FisherRaymondBeatenText
	setflag FLAG_JOHTO_BEAT_FISHER_RAYMOND
	lock
	faceplayer
	goto LakeOfRage_Johto_TrainerFisherRaymond_Script

LakeOfRage_Johto_TrainerFisherRaymond_Script:
	message LakeOfRage_Johto_FisherRaymondAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

LakeOfRage_Johto_TrainerCooltrainermAaron::
	trainerbattle_single TRAINER_JOHTO_COOLTRAINERM_AARON, LakeOfRage_Johto_CooltrainermAaronSeenText, LakeOfRage_Johto_CooltrainermAaronBeatenText
	setflag FLAG_JOHTO_BEAT_COOLTRAINERM_AARON
	lock
	faceplayer
	goto LakeOfRage_Johto_TrainerCooltrainermAaron_Script

LakeOfRage_Johto_TrainerCooltrainermAaron_Script:
	message LakeOfRage_Johto_CooltrainermAaronAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

LakeOfRage_Johto_TrainerCooltrainerfLois::
	trainerbattle_single TRAINER_JOHTO_COOLTRAINERF_LOIS, LakeOfRage_Johto_CooltrainerfLoisSeenText, LakeOfRage_Johto_CooltrainerfLoisBeatenText
	setflag FLAG_JOHTO_BEAT_COOLTRAINERF_LOIS
	lock
	faceplayer
	goto LakeOfRage_Johto_TrainerCooltrainerfLois_Script

LakeOfRage_Johto_TrainerCooltrainerfLois_Script:
	message LakeOfRage_Johto_CooltrainerfLoisAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

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

LakeOfRage_Johto_LakeOfRageFlypointCallback_Cb:
	setflag FLAG_JOHTO_ENGINE_FLYPOINT_LAKE_OF_RAGE
	return

LakeOfRage_Johto_LakeOfRageWesleyCallback_Cb:
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

LakeOfRage_Johto_FisherAndreSeenText:
	.string "Let me battle with\n"
	.string "the POKéMON I just\l"
	.string "caught!$"

LakeOfRage_Johto_FisherAndreBeatenText:
	.string "I might be an ex-\n"
	.string "pert angler, but"
	.string "\pI stink as a POKé-\n"
	.string "MON trainer…$"

LakeOfRage_Johto_FisherAndreAfterBattleText:
	.string "I won't lose as an\n"
	.string "angler! I catch\l"
	.string "POKéMON all day.$"

LakeOfRage_Johto_FisherRaymondSeenText:
	.string "No matter what I\n"
	.string "do, all I catch"
	.string "\pare the same POKé-\n"
	.string "MON…$"

LakeOfRage_Johto_FisherRaymondBeatenText:
	.string "My line's all\n"
	.string "tangled up…$"

LakeOfRage_Johto_FisherRaymondAfterBattleText:
	.string "Why can't I catch\n"
	.string "any good POKéMON?$"

LakeOfRage_Johto_CooltrainermAaronSeenText:
	.string "If a trainer spots\n"
	.string "another trainer,"
	.string "\phe has to make a\n"
	.string "challenge."
	.string "\pThat is our\n"
	.string "destiny.$"

LakeOfRage_Johto_CooltrainermAaronBeatenText:
	.string "Whew…\n"
	.string "Good battle.$"

LakeOfRage_Johto_CooltrainermAaronAfterBattleText:
	.string "POKéMON and their\n"
	.string "trainer become"
	.string "\ppowerful through\n"
	.string "constant battling.$"

LakeOfRage_Johto_CooltrainerfLoisSeenText:
	.string "What happened to\n"
	.string "the red GYARADOS?"
	.string "\pIt's gone?"
	.string "\pOh, darn. I came\n"
	.string "here for nothing?"
	.string "\pI know--let's\n"
	.string "battle!$"

LakeOfRage_Johto_CooltrainerfLoisBeatenText:
	.string "Good going!$"

LakeOfRage_Johto_CooltrainerfLoisAfterBattleText:
	.string "Come to think of\n"
	.string "it, I've seen a\l"
	.string "pink BUTTERFREE.$"

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
