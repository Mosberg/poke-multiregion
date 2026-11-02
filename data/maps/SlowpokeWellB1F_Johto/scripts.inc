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
