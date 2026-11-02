Route46_Johto_MapScripts::
	.byte 0

Route46_Johto_Route46FruitTree1_Entry::
	lockall
	goto Route46_Johto_Route46FruitTree1

Route46_Johto_Route46FruitTree2_Entry::
	lockall
	goto Route46_Johto_Route46FruitTree2

Route46_Johto_Route46Sign_Entry::
	lockall
	goto Route46_Johto_Route46Sign


Route46_Johto_TrainerCamperTed::
	trainerbattle_single TRAINER_JOHTO_CAMPER_TED, Route46_Johto_CamperTedSeenText, Route46_Johto_CamperTedBeatenText
	setflag FLAG_JOHTO_BEAT_CAMPER_TED
	lock
	faceplayer
	goto Route46_Johto_TrainerCamperTed_Script

Route46_Johto_TrainerCamperTed_Script:
	message Route46_Johto_CamperTedAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route46_Johto_TrainerPicnickerErin1::
	trainerbattle_single TRAINER_JOHTO_PICNICKER_ERIN1, Route46_Johto_PicnickerErin1SeenText, Route46_Johto_PicnickerErin1BeatenText
	setflag FLAG_JOHTO_BEAT_PICNICKER_ERIN
	lock
	faceplayer
	goto Route46_Johto_TrainerPicnickerErin1_Script

Route46_Johto_TrainerPicnickerErin1_Script:
	@ TODO unsupported: loadvar VAR_CALLERID, PHONE_PICNICKER_ERIN
	goto Johto_EventScript_Unimplemented

Route46_Johto_TrainerHikerBailey::
	trainerbattle_single TRAINER_JOHTO_HIKER_BAILEY, Route46_Johto_HikerBaileySeenText, Route46_Johto_HikerBaileyBeatenText
	setflag FLAG_JOHTO_BEAT_HIKER_BAILEY
	lock
	faceplayer
	goto Route46_Johto_TrainerHikerBailey_Script

Route46_Johto_TrainerHikerBailey_Script:
	message Route46_Johto_HikerBaileyAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route46_Johto_Route46Sign:
	message Route46_Johto_Route46SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route46_Johto_Route46FruitTree1:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_46_1
	goto Johto_EventScript_Unimplemented

Route46_Johto_Route46FruitTree2:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_46_2
	goto Johto_EventScript_Unimplemented

Route46_Johto_HikerBaileySeenText:
	.string "Awright! I'll show\n"
	.string "you the power of\l"
	.string "mountain POKéMON!$"

Route46_Johto_HikerBaileyBeatenText:
	.string "Mercy! You showed\n"
	.string "me your power!$"

Route46_Johto_HikerBaileyAfterBattleText:
	.string "It's over. I don't\n"
	.string "mind. We HIKERS\l"
	.string "are like that.$"

Route46_Johto_CamperTedSeenText:
	.string "I'm raising POKé-\n"
	.string "MON too!"
	.string "\pWill you battle\n"
	.string "with me?$"

Route46_Johto_CamperTedBeatenText:
	.string "Wha…?$"

Route46_Johto_CamperTedAfterBattleText:
	.string "I did my best but\n"
	.string "came up short."
	.string "\pNo excuses--I\n"
	.string "admit I lost.$"

Route46_Johto_PicnickerErin1SeenText:
	.string "I raise POKéMON\n"
	.string "too!"
	.string "\pWill you battle\n"
	.string "with me?$"

Route46_Johto_PicnickerErin1BeatenText:
	.string "Oh, rats!$"

Route46_Johto_Route46SignText:
	.string "ROUTE 46\n"
	.string "MOUNTAIN RD. AHEAD$"
