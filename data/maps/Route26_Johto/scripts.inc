Route26_Johto_MapScripts::
	.byte 0

Route26_Johto_Route26FruitTree_Entry::
	lockall
	goto Route26_Johto_Route26FruitTree

Route26_Johto_Route26Sign_Entry::
	lockall
	goto Route26_Johto_Route26Sign


Route26_Johto_TrainerCooltrainermJake::
	trainerbattle_single TRAINER_JOHTO_COOLTRAINERM_JAKE, Route26_Johto_CooltrainermJakeSeenText, Route26_Johto_CooltrainermJakeBeatenText
	setflag FLAG_JOHTO_BEAT_COOLTRAINERM_JAKE
	lock
	faceplayer
	goto Route26_Johto_TrainerCooltrainermJake_Script

Route26_Johto_TrainerCooltrainermJake_Script:
	message Route26_Johto_CooltrainermJakeAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route26_Johto_TrainerCooltrainermGaven3::
	trainerbattle_single TRAINER_JOHTO_COOLTRAINERM_GAVEN3, Route26_Johto_CooltrainermGaven3SeenText, Route26_Johto_CooltrainermGaven3BeatenText
	setflag FLAG_JOHTO_BEAT_COOLTRAINERM_GAVEN
	lock
	faceplayer
	goto Route26_Johto_TrainerCooltrainermGaven3_Script

Route26_Johto_TrainerCooltrainermGaven3_Script:
	@ TODO unsupported: loadvar VAR_CALLERID, PHONE_COOLTRAINERM_GAVEN
	goto Johto_EventScript_Unimplemented

Route26_Johto_TrainerCooltrainerfJoyce::
	trainerbattle_single TRAINER_JOHTO_COOLTRAINERF_JOYCE, Route26_Johto_CooltrainerfJoyceSeenText, Route26_Johto_CooltrainerfJoyceBeatenText
	setflag FLAG_JOHTO_BEAT_COOLTRAINERF_JOYCE
	lock
	faceplayer
	goto Route26_Johto_TrainerCooltrainerfJoyce_Script

Route26_Johto_TrainerCooltrainerfJoyce_Script:
	message Route26_Johto_CooltrainerfJoyceAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route26_Johto_TrainerCooltrainerfBeth1::
	trainerbattle_single TRAINER_JOHTO_COOLTRAINERF_BETH1, Route26_Johto_CooltrainerfBeth1SeenText, Route26_Johto_CooltrainerfBeth1BeatenText
	setflag FLAG_JOHTO_BEAT_COOLTRAINERF_BETH
	lock
	faceplayer
	goto Route26_Johto_TrainerCooltrainerfBeth1_Script

Route26_Johto_TrainerCooltrainerfBeth1_Script:
	@ TODO unsupported: loadvar VAR_CALLERID, PHONE_COOLTRAINERF_BETH
	goto Johto_EventScript_Unimplemented

Route26_Johto_TrainerPsychicRichard::
	trainerbattle_single TRAINER_JOHTO_PSYCHIC_T_RICHARD, Route26_Johto_PsychicRichardSeenText, Route26_Johto_PsychicRichardBeatenText
	setflag FLAG_JOHTO_BEAT_PSYCHIC_RICHARD
	lock
	faceplayer
	goto Route26_Johto_TrainerPsychicRichard_Script

Route26_Johto_TrainerPsychicRichard_Script:
	message Route26_Johto_PsychicRichardAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route26_Johto_TrainerFisherScott::
	trainerbattle_single TRAINER_JOHTO_FISHER_SCOTT, Route26_Johto_FisherScottSeenText, Route26_Johto_FisherScottBeatenText
	setflag FLAG_JOHTO_BEAT_FISHER_SCOTT
	lock
	faceplayer
	goto Route26_Johto_TrainerFisherScott_Script

Route26_Johto_TrainerFisherScott_Script:
	message Route26_Johto_FisherScottAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route26_Johto_Route26Sign:
	message Route26_Johto_Route26SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route26_Johto_Route26FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_26
	goto Johto_EventScript_Unimplemented

Route26_Johto_CooltrainermJakeSeenText:
	.string "I'm making my\n"
	.string "final preparations"
	.string "\pfor the POKéMON\n"
	.string "LEAGUE.$"

Route26_Johto_CooltrainermJakeBeatenText:
	.string "I blew it!$"

Route26_Johto_CooltrainermJakeAfterBattleText:
	.string "It's going to be\n"
	.string "tough to win at\l"
	.string "the LEAGUE."
	.string "\pI need to do some\n"
	.string "more training."
	.string "\pI hear that the\n"
	.string "LEAGUE's ELITE"
	.string "\pFOUR are tougher\n"
	.string "than GYM LEADERS.$"

Route26_Johto_CooltrainermGaven3SeenText:
	.string "By experiencing\n"
	.string "tough battles, you\l"
	.string "gain power.$"

Route26_Johto_CooltrainermGaven3BeatenText:
	.string "Gaah! Life is even\n"
	.string "tougher!$"

Route26_Johto_CooltrainerfJoyceSeenText:
	.string "Since you've come\n"
	.string "this far, you must\l"
	.string "be good."
	.string "\pI'm going to give\n"
	.string "this battle every-\l"
	.string "thing I've got!$"

Route26_Johto_CooltrainerfJoyceBeatenText:
	.string "No! I don't\n"
	.string "believe this!$"

Route26_Johto_CooltrainerfJoyceAfterBattleText:
	.string "I've defeated\n"
	.string "eight GYM LEADERS,"
	.string "\pso I was feeling\n"
	.string "confident."
	.string "\pI'll have to try\n"
	.string "harder next time.$"

Route26_Johto_CooltrainerfBeth1SeenText:
	.string "I lost to a train-\n"
	.string "er named SILVER."
	.string "\pHe was really\n"
	.string "strong, but…"
	.string "\pIt was as if he\n"
	.string "absolutely had to\l"
	.string "win at any cost."
	.string "\pI felt sorry for\n"
	.string "his POKéMON.$"

Route26_Johto_CooltrainerfBeth1BeatenText:
	.string "POKéMON aren't\n"
	.string "tools of war.$"

Route26_Johto_PsychicRichardSeenText:
	.string "Wow, look at all\n"
	.string "those BADGES!\l"
	.string "I'm impressed."
	.string "\pBut you're not\n"
	.string "satisfied by just"
	.string "\pcollecting them,\n"
	.string "right?$"

Route26_Johto_PsychicRichardBeatenText:
	.string "Good battle!$"

Route26_Johto_PsychicRichardAfterBattleText:
	.string "People and POKéMON\n"
	.string "grow from their\l"
	.string "experiences."
	.string "\pDon't get lazy and\n"
	.string "complacent.$"

Route26_Johto_FisherScottSeenText:
	.string "I'm feeling great\n"
	.string "today!"
	.string "\pI feel like I\n"
	.string "could boot even\l"
	.string "the LEAGUE CHAMP!$"

Route26_Johto_FisherScottBeatenText:
	.string "No! Not in this\n"
	.string "battle!$"

Route26_Johto_FisherScottAfterBattleText:
	.string "Just like in fish-\n"
	.string "ing, it's all over"
	.string "\pin POKéMON if you\n"
	.string "give up.$"

Route26_Johto_Route26SignText:
	.string "ROUTE 26"
	.string "\pPOKéMON LEAGUE\n"
	.string "RECEPTION GATE$"
