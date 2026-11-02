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
