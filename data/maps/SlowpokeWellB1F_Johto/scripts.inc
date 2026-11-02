SlowpokeWellB1F_Johto_MapScripts::
	.byte 0

SlowpokeWellB1F_Johto_SlowpokeWellB1FSlowpokeWithMailScript_Entry::
	lockall
	goto SlowpokeWellB1F_Johto_SlowpokeWellB1FSlowpokeWithMailScript

SlowpokeWellB1F_Johto_SlowpokeWellB1FTaillessSlowpokeScript_Entry::
	lockall
	goto SlowpokeWellB1F_Johto_SlowpokeWellB1FTaillessSlowpokeScript

SlowpokeWellB1F_Johto_SlowpokeWellB1FKurtScript_Entry::
	lockall
	goto SlowpokeWellB1F_Johto_SlowpokeWellB1FKurtScript

SlowpokeWellB1F_Johto_SlowpokeWellB1FBoulder_Entry::
	lockall
	goto SlowpokeWellB1F_Johto_SlowpokeWellB1FBoulder


SlowpokeWellB1F_Johto_SlowpokeWellB1FKurtScript:
	faceplayer
	message SlowpokeWellB1F_Johto_SlowpokeWellB1FKurtText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SlowpokeWellB1F_Johto_TrainerGruntM29::
	trainerbattle_single TRAINER_JOHTO_GRUNTM_GRUNTM_29, SlowpokeWellB1F_Johto_GruntM29SeenText, SlowpokeWellB1F_Johto_GruntM29BeatenText
	setflag FLAG_JOHTO_BEAT_ROCKET_GRUNTM_29
	lock
	faceplayer
	goto SlowpokeWellB1F_Johto_TrainerGruntM29_Script

SlowpokeWellB1F_Johto_TrainerGruntM29_Script:
	message SlowpokeWellB1F_Johto_GruntM29AfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SlowpokeWellB1F_Johto_TrainerGruntM1::
	trainerbattle_single TRAINER_JOHTO_GRUNTM_GRUNTM_1, SlowpokeWellB1F_Johto_GruntM1SeenText, SlowpokeWellB1F_Johto_GruntM1BeatenText
	setflag FLAG_JOHTO_BEAT_ROCKET_GRUNTM_1
	lock
	faceplayer
	goto SlowpokeWellB1F_Johto_TrainerGruntM1_Script

SlowpokeWellB1F_Johto_TrainerGruntM1_Script:
	message SlowpokeWellB1F_Johto_TrainerGruntM1WhenTalkText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: special FadeOutToBlack
	goto Johto_EventScript_Unimplemented

SlowpokeWellB1F_Johto_TrainerGruntM2::
	trainerbattle_single TRAINER_JOHTO_GRUNTM_GRUNTM_2, SlowpokeWellB1F_Johto_GruntM2SeenText, SlowpokeWellB1F_Johto_GruntM2BeatenText
	setflag FLAG_JOHTO_BEAT_ROCKET_GRUNTM_2
	lock
	faceplayer
	goto SlowpokeWellB1F_Johto_TrainerGruntM2_Script

SlowpokeWellB1F_Johto_TrainerGruntM2_Script:
	message SlowpokeWellB1F_Johto_GruntM2AfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SlowpokeWellB1F_Johto_TrainerGruntF1::
	trainerbattle_single TRAINER_JOHTO_GRUNTF_GRUNTF_1, SlowpokeWellB1F_Johto_GruntF1SeenText, SlowpokeWellB1F_Johto_GruntF1BeatenText
	setflag FLAG_JOHTO_BEAT_ROCKET_GRUNTF_1
	lock
	faceplayer
	goto SlowpokeWellB1F_Johto_TrainerGruntF1_Script

SlowpokeWellB1F_Johto_TrainerGruntF1_Script:
	message SlowpokeWellB1F_Johto_GruntF1AfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SlowpokeWellB1F_Johto_SlowpokeWellB1FSlowpokeWithMailScript:
	faceplayer
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	waitmoncry
	message SlowpokeWellB1F_Johto_SlowpokeWellB1FSlowpokeWithMailText
	waitmessage
	yesnobox 20, 8
	goto_if_ne VAR_RESULT, 0, SlowpokeWellB1F_Johto_SlowpokeWellB1FSlowpokeWithMailScript_ReadMail
	closemessage
	releaseall
	end

SlowpokeWellB1F_Johto_SlowpokeWellB1FSlowpokeWithMailScript_ReadMail:
	message SlowpokeWellB1F_Johto_SlowpokeWellB1FSlowpokeMailText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SlowpokeWellB1F_Johto_SlowpokeWellB1FTaillessSlowpokeScript:
	faceplayer
	message SlowpokeWellB1F_Johto_SlowpokeWellB1FTaillessSlowpokeText
	waitmessage
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	waitmoncry
	waitbuttonpress
	closemessage
	releaseall
	end

SlowpokeWellB1F_Johto_SlowpokeWellB1FBoulder:
	goto Johto_Std_StrengthBoulderScript

SlowpokeWellB1F_Johto_SlowpokeWellB1FKurtText:
	.string "KURT: Hey there,\n"
	.string "{PLAYER}!"
	.string "\pThe guard up top\n"
	.string "took off when I\l"
	.string "shouted at him."
	.string "\pBut then I took a\n"
	.string "tumble down the\l"
	.string "WELL."
	.string "\pI slammed down\n"
	.string "hard on my back,\l"
	.string "so I can't move."
	.string "\pRats! If I were\n"
	.string "fit, my POKéMON"
	.string "\pwould've punished\n"
	.string "them…"
	.string "\pAh, it can't be\n"
	.string "helped."
	.string "\p{PLAYER}, show them\n"
	.string "how gutsy you are\l"
	.string "in my place!$"

SlowpokeWellB1F_Johto_GruntM29SeenText:
	.string "Darn! I was stand-\n"
	.string "ing guard up top"
	.string "\pwhen some old coot\n"
	.string "yelled at me."
	.string "\pHe startled me so\n"
	.string "much that I fell\l"
	.string "down here."
	.string "\pI think I'll vent\n"
	.string "my anger by taking\l"
	.string "it out on you!$"

SlowpokeWellB1F_Johto_GruntM29BeatenText:
	.string "Arrgh! This is NOT\n"
	.string "my day!$"

SlowpokeWellB1F_Johto_GruntM29AfterBattleText:
	.string "Sure, we've been\n"
	.string "hacking the tails"
	.string "\poff SLOWPOKE and\n"
	.string "selling them."
	.string "\pEverything we do\n"
	.string "is for profit."
	.string "\pThat's right!\n"
	.string "We're TEAM ROCKET,"
	.string "\pand we'll do any-\n"
	.string "thing for money!$"

SlowpokeWellB1F_Johto_GruntM1SeenText:
	.string "What do you want?"
	.string "\pIf you interrupt\n"
	.string "our work, don't\l"
	.string "expect any mercy!$"

SlowpokeWellB1F_Johto_GruntM1BeatenText:
	.string "You did OK today,\n"
	.string "but wait till next\l"
	.string "time!$"

SlowpokeWellB1F_Johto_TrainerGruntM1WhenTalkText:
	.string "Yeah, TEAM ROCKET\n"
	.string "was broken up\l"
	.string "three years ago."
	.string "\pBut we continued\n"
	.string "our activities\l"
	.string "underground."
	.string "\pNow you can have\n"
	.string "fun watching us\l"
	.string "stir up trouble!$"

SlowpokeWellB1F_Johto_GruntM2SeenText:
	.string "Quit taking SLOW-\n"
	.string "POKETAILS?"
	.string "\pIf we obeyed you,\n"
	.string "TEAM ROCKET's rep\l"
	.string "would be ruined!$"

SlowpokeWellB1F_Johto_GruntM2BeatenText:
	.string "Just…\n"
	.string "Too strong…$"

SlowpokeWellB1F_Johto_GruntM2AfterBattleText:
	.string "We need the money,\n"
	.string "but selling SLOW-\l"
	.string "POKETAILS?"
	.string "\pIt's tough being a\n"
	.string "ROCKET GRUNT!$"

SlowpokeWellB1F_Johto_GruntF1SeenText:
	.string "Stop taking TAILS?"
	.string "\pYeah, just try to\n"
	.string "defeat all of us!$"

SlowpokeWellB1F_Johto_GruntF1BeatenText:
	.string "You rotten brat!$"

SlowpokeWellB1F_Johto_GruntF1AfterBattleText:
	.string "SLOWPOKETAILS\n"
	.string "grow back fast!"
	.string "\pWhat's wrong with\n"
	.string "selling them?$"

SlowpokeWellB1F_Johto_SlowpokeWellB1FSlowpokeWithMailText:
	.string "A SLOWPOKE with\n"
	.string "its TAIL cut off…"
	.string "\pHuh? It has MAIL.\n"
	.string "Read it?$"

SlowpokeWellB1F_Johto_SlowpokeWellB1FSlowpokeMailText:
	.string "{PLAYER} read the\n"
	.string "MAIL."
	.string "\pBe good and look\n"
	.string "after the house"
	.string "\pwith Grandpa and\n"
	.string "SLOWPOKE."
	.string "\pLove, Dad$"

SlowpokeWellB1F_Johto_SlowpokeWellB1FTaillessSlowpokeText:
	.string "A SLOWPOKE with\n"
	.string "its TAIL cut off…$"
