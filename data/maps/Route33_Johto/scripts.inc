Route33_Johto_MapScripts::
	.byte 0

Route33_Johto_Route33LassScript_Entry::
	lockall
	goto Route33_Johto_Route33LassScript

Route33_Johto_Route33FruitTree_Entry::
	lockall
	goto Route33_Johto_Route33FruitTree

Route33_Johto_Route33Sign_Entry::
	lockall
	goto Route33_Johto_Route33Sign


Route33_Johto_Route33LassScript:
	faceplayer
	message Route33_Johto_Route33LassText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route33_Johto_TrainerHikerAnthony::
	trainerbattle_single TRAINER_JOHTO_HIKER_ANTHONY2, Route33_Johto_HikerAnthony2SeenText, Route33_Johto_HikerAnthony2BeatenText
	setflag FLAG_JOHTO_BEAT_HIKER_ANTHONY
	lock
	faceplayer
	goto Route33_Johto_TrainerHikerAnthony_Script

Route33_Johto_TrainerHikerAnthony_Script:
	@ TODO unsupported: loadvar VAR_CALLERID, PHONE_HIKER_ANTHONY
	goto Johto_EventScript_Unimplemented

Route33_Johto_Route33Sign:
	message Route33_Johto_Route33SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route33_Johto_Route33FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_33
	goto Johto_EventScript_Unimplemented

Route33_Johto_HikerAnthony2SeenText:
	.string "I came through the\n"
	.string "tunnel, but I"
	.string "\pstill have plenty\n"
	.string "of energy left.$"

Route33_Johto_HikerAnthony2BeatenText:
	.string "Whoa! You've got\n"
	.string "more zip than me!$"

Route33_Johto_Route33LassText:
	.string "Pant, pant…"
	.string "\pI finally got\n"
	.string "through that cave."
	.string "\pIt was much bigger\n"
	.string "than I'd expected."
	.string "\pI got too tired to\n"
	.string "explore the whole"
	.string "\pthing, so I came\n"
	.string "outside.$"

Route33_Johto_Route33SignText:
	.string "ROUTE 33$"
