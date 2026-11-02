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
	@ TODO unsupported: winlosstext SageLiBeatenText, 0
	goto Johto_EventScript_Unimplemented

SproutTower3F_Johto_SageLiScript_GotFlash:
	message SproutTower3F_Johto_SageLiAfterBattleText
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

SproutTower3F_Johto_SageLiAfterBattleText:
	.string "I hope you learn\n"
	.string "and grow from your\l"
	.string "journey.$"

SproutTower3F_Johto_SproutTower3FPaintingText:
	.string "It's a powerful\n"
	.string "painting of a\l"
	.string "BELLSPROUT.$"

SproutTower3F_Johto_SproutTower3FStatueText:
	.string "A POKéMON statue…"
	.string "\pIt looks very\n"
	.string "distinguished.$"
