CianwoodGym_Johto_MapScripts::
	.byte 0

CianwoodGym_Johto_CianwoodGymChuckScript_Entry::
	lockall
	goto CianwoodGym_Johto_CianwoodGymChuckScript

CianwoodGym_Johto_CianwoodGymBoulder_Entry::
	lockall
	goto CianwoodGym_Johto_CianwoodGymBoulder

CianwoodGym_Johto_CianwoodGymStatue_Entry::
	lockall
	goto CianwoodGym_Johto_CianwoodGymStatue


CianwoodGym_Johto_CianwoodGymChuckScript:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_CHUCK, CianwoodGym_Johto_CianwoodGymChuckScript_FightDone
	message CianwoodGym_Johto_ChuckIntroText1
	waitmessage
	waitbuttonpress
	closemessage
	applymovement 1, Johto_Movement_Face_Right
	waitmovement 1
	message CianwoodGym_Johto_ChuckIntroText2
	waitmessage
	waitbuttonpress
	closemessage
	applymovement 6, CianwoodGym_Johto_CianwoodGymMovement_ChuckChucksBoulder
	waitmovement 6
	@ TODO unsupported: playsound SFX_STRENGTH
	goto Johto_EventScript_Unimplemented

CianwoodGym_Johto_CianwoodGymChuckScript_FightDone:
	goto_if_set FLAG_JOHTO_GOT_TM01_DYNAMICPUNCH, CianwoodGym_Johto_CianwoodGymChuckScript_AlreadyGotTM
	setflag FLAG_JOHTO_BEAT_BLACKBELT_YOSHI
	setflag FLAG_JOHTO_BEAT_BLACKBELT_LAO
	setflag FLAG_JOHTO_BEAT_BLACKBELT_NOB
	setflag FLAG_JOHTO_BEAT_BLACKBELT_LUNG
	message CianwoodGym_Johto_ChuckExplainBadgeText
	waitmessage
	waitbuttonpress
	@ TODO unsupported: verbosegiveitem TM_DYNAMICPUNCH
	goto Johto_EventScript_Unimplemented

CianwoodGym_Johto_CianwoodGymChuckScript_AlreadyGotTM:
	message CianwoodGym_Johto_ChuckAfterText
	waitmessage
	waitbuttonpress

CianwoodGym_Johto_CianwoodGymChuckScript_BagFull:
	closemessage
	releaseall
	end

CianwoodGym_Johto_TrainerBlackbeltYoshi::
	trainerbattle_single TRAINER_JOHTO_BLACKBELT_T_YOSHI, CianwoodGym_Johto_BlackbeltYoshiSeenText, CianwoodGym_Johto_BlackbeltYoshiBeatenText
	setflag FLAG_JOHTO_BEAT_BLACKBELT_YOSHI
	lock
	faceplayer
	goto CianwoodGym_Johto_TrainerBlackbeltYoshi_Script

CianwoodGym_Johto_TrainerBlackbeltYoshi_Script:
	message CianwoodGym_Johto_BlackbeltYoshiAfterText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CianwoodGym_Johto_TrainerBlackbeltLao::
	trainerbattle_single TRAINER_JOHTO_BLACKBELT_T_LAO, CianwoodGym_Johto_BlackbeltLaoSeenText, CianwoodGym_Johto_BlackbeltLaoBeatenText
	setflag FLAG_JOHTO_BEAT_BLACKBELT_LAO
	lock
	faceplayer
	goto CianwoodGym_Johto_TrainerBlackbeltLao_Script

CianwoodGym_Johto_TrainerBlackbeltLao_Script:
	message CianwoodGym_Johto_BlackbeltLaoAfterText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CianwoodGym_Johto_TrainerBlackbeltNob::
	trainerbattle_single TRAINER_JOHTO_BLACKBELT_T_NOB, CianwoodGym_Johto_BlackbeltNobSeenText, CianwoodGym_Johto_BlackbeltNobBeatenText
	setflag FLAG_JOHTO_BEAT_BLACKBELT_NOB
	lock
	faceplayer
	goto CianwoodGym_Johto_TrainerBlackbeltNob_Script

CianwoodGym_Johto_TrainerBlackbeltNob_Script:
	message CianwoodGym_Johto_BlackbeltNobAfterText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CianwoodGym_Johto_TrainerBlackbeltLung::
	trainerbattle_single TRAINER_JOHTO_BLACKBELT_T_LUNG, CianwoodGym_Johto_BlackbeltLungSeenText, CianwoodGym_Johto_BlackbeltLungBeatenText
	setflag FLAG_JOHTO_BEAT_BLACKBELT_LUNG
	lock
	faceplayer
	goto CianwoodGym_Johto_TrainerBlackbeltLung_Script

CianwoodGym_Johto_TrainerBlackbeltLung_Script:
	message CianwoodGym_Johto_BlackbeltLungAfterText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

CianwoodGym_Johto_CianwoodGymBoulder:
	goto Johto_Std_StrengthBoulderScript

CianwoodGym_Johto_CianwoodGymStatue:
	goto_if_set FLAG_JOHTO_ENGINE_STORMBADGE, CianwoodGym_Johto_CianwoodGymStatue_Beaten
	goto Johto_Std_GymStatue1Script

CianwoodGym_Johto_CianwoodGymStatue_Beaten:
	@ TODO unsupported: gettrainername STRING_BUFFER_4, CHUCK, CHUCK1
	goto Johto_EventScript_Unimplemented

CianwoodGym_Johto_CianwoodGymMovement_ChuckChucksBoulder:
	walk_fast_left
	walk_fast_up
	step_end

CianwoodGym_Johto_ChuckIntroText1:
	.string "WAHAHAH!"
	.string "\pSo you've come\n"
	.string "this far!"
	.string "\pLet me tell you,\n"
	.string "I'm tough!"
	.string "\pMy POKéMON will\n"
	.string "crush stones and\l"
	.string "shatter bones!"
	.string "\pWatch this!$"

CianwoodGym_Johto_ChuckIntroText2:
	.string "CHUCK: Urggh!\n"
	.string "…"
	.string "\pOooarrgh!$"

CianwoodGym_Johto_ChuckExplainBadgeText:
	.string "STORMBADGE makes\n"
	.string "all POKéMON up to"
	.string "\pL70 obey, even\n"
	.string "traded ones."
	.string "\pIt also lets your\n"
	.string "POKéMON use FLY"
	.string "\pwhen you're not in\n"
	.string "a battle."
	.string "\pHere, take this\n"
	.string "too!$"

CianwoodGym_Johto_ChuckAfterText:
	.string "WAHAHAH! I enjoyed\n"
	.string "battling you!"
	.string "\pBut a loss is a\n"
	.string "loss!"
	.string "\pFrom now on, I'm\n"
	.string "going to train 24\l"
	.string "hours a day!$"

CianwoodGym_Johto_BlackbeltYoshiSeenText:
	.string "My POKéMON and I\n"
	.string "are bound togeth-\l"
	.string "er by friendship."
	.string "\pOur bond will\n"
	.string "never be broken!$"

CianwoodGym_Johto_BlackbeltYoshiBeatenText:
	.string "This isn't real!$"

CianwoodGym_Johto_BlackbeltYoshiAfterText:
	.string "You seem to have a\n"
	.string "strong bond with\l"
	.string "your POKéMON too!$"

CianwoodGym_Johto_BlackbeltLaoSeenText:
	.string "We martial artists\n"
	.string "fear nothing!$"

CianwoodGym_Johto_BlackbeltLaoBeatenText:
	.string "That's shocking!$"

CianwoodGym_Johto_BlackbeltLaoAfterText:
	.string "Fighting POKéMON\n"
	.string "are afraid of psy-\l"
	.string "chics…$"

CianwoodGym_Johto_BlackbeltNobSeenText:
	.string "Words are useless.\n"
	.string "Let your fists do\l"
	.string "the talking!$"

CianwoodGym_Johto_BlackbeltNobBeatenText:
	.string "…$"

CianwoodGym_Johto_BlackbeltNobAfterText:
	.string "I lost! \n"
	.string "I'm speechless!$"

CianwoodGym_Johto_BlackbeltLungSeenText:
	.string "My raging fists\n"
	.string "will shatter your\l"
	.string "POKéMON!$"

CianwoodGym_Johto_BlackbeltLungBeatenText:
	.string "I got shattered!$"

CianwoodGym_Johto_BlackbeltLungAfterText:
	.string "My POKéMON lost…\n"
	.string "My… my pride is\l"
	.string "shattered…$"
