SproutTower3F_Johto_MapScripts::
	.byte 0

SproutTower3F_Johto_SageLiScript_Entry::
	lockall
	goto SproutTower3F_Johto_SageLiScript

SproutTower3F_Johto_SproutTower3FStatue_Entry::
	lockall
	goto SproutTower3F_Johto_SproutTower3FStatue

SproutTower3F_Johto_SproutTower3FPainting_Entry::
	lockall
	goto SproutTower3F_Johto_SproutTower3FPainting

SproutTower3F_Johto_SproutTower3FRivalScene_Entry::
	lockall
	goto SproutTower3F_Johto_SproutTower3FRivalScene


SproutTower3F_Johto_SproutTower3FRivalScene:
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Face_Up
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Emote_exclamation_mark
	waitmovement OBJ_EVENT_ID_PLAYER
	fadeoutbgm 4
	playse SE_M_TAIL_WHIP
	@ TODO unsupported: playsound SFX_ELEVATOR
	goto Johto_EventScript_Unimplemented

SproutTower3F_Johto_SageLiScript:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_HM05_FLASH, SproutTower3F_Johto_SageLiScript_GotFlash
	message SproutTower3F_Johto_SageLiSeenText
	waitmessage
	waitbuttonpress
	closemessage
	trainerbattle_no_intro TRAINER_JOHTO_SAGE_LI, SproutTower3F_Johto_SageLiBeatenText
	message SproutTower3F_Johto_SageLiTakeThisFlashText
	waitmessage
	waitbuttonpress
	giveitem ITEM_HM_FLASH
	setflag FLAG_JOHTO_GOT_HM05_FLASH
	setflag FLAG_JOHTO_BEAT_SAGE_LI
	message SproutTower3F_Johto_SageLiFlashExplanationText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SproutTower3F_Johto_SageLiScript_GotFlash:
	message SproutTower3F_Johto_SageLiAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SproutTower3F_Johto_TrainerSageJin::
	trainerbattle_single TRAINER_JOHTO_SAGE_JIN, SproutTower3F_Johto_SageJinSeenText, SproutTower3F_Johto_SageJinBeatenText
	setflag FLAG_JOHTO_BEAT_SAGE_JIN
	lock
	faceplayer
	goto SproutTower3F_Johto_TrainerSageJin_Script

SproutTower3F_Johto_TrainerSageJin_Script:
	message SproutTower3F_Johto_SageJinAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SproutTower3F_Johto_TrainerSageTroy::
	trainerbattle_single TRAINER_JOHTO_SAGE_TROY, SproutTower3F_Johto_SageTroySeenText, SproutTower3F_Johto_SageTroyBeatenText
	setflag FLAG_JOHTO_BEAT_SAGE_TROY
	lock
	faceplayer
	goto SproutTower3F_Johto_TrainerSageTroy_Script

SproutTower3F_Johto_TrainerSageTroy_Script:
	message SproutTower3F_Johto_SageTroyAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SproutTower3F_Johto_TrainerSageNeal::
	trainerbattle_single TRAINER_JOHTO_SAGE_NEAL, SproutTower3F_Johto_SageNealSeenText, SproutTower3F_Johto_SageNealBeatenText
	setflag FLAG_JOHTO_BEAT_SAGE_NEAL
	lock
	faceplayer
	goto SproutTower3F_Johto_TrainerSageNeal_Script

SproutTower3F_Johto_TrainerSageNeal_Script:
	message SproutTower3F_Johto_SageNealAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SproutTower3F_Johto_SproutTower3FPainting:
	message SproutTower3F_Johto_SproutTower3FPaintingText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SproutTower3F_Johto_SproutTower3FStatue:
	message SproutTower3F_Johto_SproutTower3FStatueText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SproutTower3F_Johto_SageLiSeenText:
	.string "So good of you to\n"
	.string "come here!"
	.string "\pSPROUT TOWER is a\n"
	.string "place of training."
	.string "\pPeople and POKéMON\n"
	.string "test their bonds"
	.string "\pto build a bright\n"
	.string "future together."
	.string "\pI am the final\n"
	.string "test."
	.string "\pAllow me to check\n"
	.string "the ties between"
	.string "\pyour POKéMON and\n"
	.string "you!$"

SproutTower3F_Johto_SageLiBeatenText:
	.string "Ah, excellent!$"

SproutTower3F_Johto_SageLiTakeThisFlashText:
	.string "You and your POKé-\n"
	.string "MON should have"
	.string "\pno problem using\n"
	.string "this move."
	.string "\pTake this FLASH\n"
	.string "HM.$"

SproutTower3F_Johto_SageLiFlashExplanationText:
	.string "FLASH illuminates\n"
	.string "even the darkest\l"
	.string "of all places."
	.string "\pBut to use it out\n"
	.string "of battle, you"
	.string "\pneed the BADGE\n"
	.string "from VIOLET's GYM.$"

SproutTower3F_Johto_SageLiAfterBattleText:
	.string "I hope you learn\n"
	.string "and grow from your\l"
	.string "journey.$"

SproutTower3F_Johto_SageJinSeenText:
	.string "I train to find\n"
	.string "enlightenment in\l"
	.string "POKéMON!$"

SproutTower3F_Johto_SageJinBeatenText:
	.string "My training is\n"
	.string "incomplete…$"

SproutTower3F_Johto_SageJinAfterBattleText:
	.string "As POKéMON grow\n"
	.string "stronger, so does\l"
	.string "the trainer."
	.string "\pNo, wait. As the\n"
	.string "trainer grows"
	.string "\pstronger, so do\n"
	.string "the POKéMON.$"

SproutTower3F_Johto_SageTroySeenText:
	.string "Let me see how\n"
	.string "much you trust\l"
	.string "your POKéMON.$"

SproutTower3F_Johto_SageTroyBeatenText:
	.string "Yes, your trust is\n"
	.string "real!$"

SproutTower3F_Johto_SageTroyAfterBattleText:
	.string "It is not far to\n"
	.string "the ELDER.$"

SproutTower3F_Johto_SageNealSeenText:
	.string "The ELDER's HM\n"
	.string "lights even pitch-\l"
	.string "black darkness.$"

SproutTower3F_Johto_SageNealBeatenText:
	.string "It is my head that\n"
	.string "is bright!$"

SproutTower3F_Johto_SageNealAfterBattleText:
	.string "Let there be light\n"
	.string "on your journey.$"

SproutTower3F_Johto_SproutTower3FPaintingText:
	.string "It's a powerful\n"
	.string "painting of a\l"
	.string "BELLSPROUT.$"

SproutTower3F_Johto_SproutTower3FStatueText:
	.string "A POKéMON statue…"
	.string "\pIt looks very\n"
	.string "distinguished.$"
