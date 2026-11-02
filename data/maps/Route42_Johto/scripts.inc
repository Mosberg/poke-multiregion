Route42_Johto_MapScripts::
	.byte 0

Route42_Johto_Route42FruitTree1_Entry::
	lockall
	goto Route42_Johto_Route42FruitTree1

Route42_Johto_Route42FruitTree2_Entry::
	lockall
	goto Route42_Johto_Route42FruitTree2

Route42_Johto_Route42FruitTree3_Entry::
	lockall
	goto Route42_Johto_Route42FruitTree3

Route42_Johto_Route42Sign1_Entry::
	lockall
	goto Route42_Johto_Route42Sign1

Route42_Johto_MtMortarSign1_Entry::
	lockall
	goto Route42_Johto_MtMortarSign1

Route42_Johto_MtMortarSign2_Entry::
	lockall
	goto Route42_Johto_MtMortarSign2

Route42_Johto_Route42Sign2_Entry::
	lockall
	goto Route42_Johto_Route42Sign2

Route42_Johto_Route42SuicuneScript_Entry::
	lockall
	goto Route42_Johto_Route42SuicuneScript


Route42_Johto_Route42SuicuneScript:
	applymovement OBJ_EVENT_ID_PLAYER, Johto_Movement_Emote_exclamation_mark
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 15
	@ TODO unsupported: playsound SFX_WARP_FROM
	goto Johto_EventScript_Unimplemented

Route42_Johto_TrainerFisherTully::
	trainerbattle_single TRAINER_JOHTO_FISHER_TULLY1, Route42_Johto_FisherTullySeenText, Route42_Johto_FisherTullyBeatenText
	setflag FLAG_JOHTO_BEAT_FISHER_TULLY
	lock
	faceplayer
	goto Route42_Johto_TrainerFisherTully_Script

Route42_Johto_TrainerFisherTully_Script:
	@ TODO unsupported: loadvar VAR_CALLERID, PHONE_FISHER_TULLY
	goto Johto_EventScript_Unimplemented

Route42_Johto_TrainerPokemaniacShane::
	trainerbattle_single TRAINER_JOHTO_POKEMANIAC_SHANE, Route42_Johto_PokemaniacShaneSeenText, Route42_Johto_PokemaniacShaneBeatenText
	setflag FLAG_JOHTO_BEAT_POKEMANIAC_SHANE
	lock
	faceplayer
	goto Route42_Johto_TrainerPokemaniacShane_Script

Route42_Johto_TrainerPokemaniacShane_Script:
	message Route42_Johto_PokemaniacShaneAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route42_Johto_TrainerHikerBenjamin::
	trainerbattle_single TRAINER_JOHTO_HIKER_BENJAMIN, Route42_Johto_HikerBenjaminSeenText, Route42_Johto_HikerBenjaminBeatenText
	setflag FLAG_JOHTO_BEAT_HIKER_BENJAMIN
	lock
	faceplayer
	goto Route42_Johto_TrainerHikerBenjamin_Script

Route42_Johto_TrainerHikerBenjamin_Script:
	message Route42_Johto_HikerBenjaminAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route42_Johto_Route42Sign1:
	message Route42_Johto_Route42Sign1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route42_Johto_MtMortarSign1:
	message Route42_Johto_MtMortarSign1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route42_Johto_MtMortarSign2:
	message Route42_Johto_MtMortarSign2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route42_Johto_Route42Sign2:
	message Route42_Johto_Route42Sign2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route42_Johto_Route42FruitTree1:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_42_1
	goto Johto_EventScript_Unimplemented

Route42_Johto_Route42FruitTree2:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_42_2
	goto Johto_EventScript_Unimplemented

Route42_Johto_Route42FruitTree3:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_42_3
	goto Johto_EventScript_Unimplemented

Route42_Johto_FisherTullySeenText:
	.string "Let me demonstrate\n"
	.string "the power of the\l"
	.string "POKéMON I caught!$"

Route42_Johto_FisherTullyBeatenText:
	.string "What? That's not\n"
	.string "right.$"

Route42_Johto_HikerBenjaminSeenText:
	.string "Ah, it's good to\n"
	.string "be outside!\l"
	.string "I feel so free!$"

Route42_Johto_HikerBenjaminBeatenText:
	.string "Gahahah!$"

Route42_Johto_HikerBenjaminAfterBattleText:
	.string "Losing feels in-\n"
	.string "significant if you"
	.string "\plook up at the big\n"
	.string "sky!$"

Route42_Johto_PokemaniacShaneSeenText:
	.string "HEY!"
	.string "\pThis is my secret\n"
	.string "place! Get lost,\l"
	.string "you outsider!$"

Route42_Johto_PokemaniacShaneBeatenText:
	.string "I should have used\n"
	.string "my MOON STONE…$"

Route42_Johto_PokemaniacShaneAfterBattleText:
	.string "You're working on\n"
	.string "a POKéDEX?"
	.string "\pWow, you must know\n"
	.string "some pretty rare\l"
	.string "POKéMON!"
	.string "\pMay I please see\n"
	.string "it. Please?$"

Route42_Johto_Route42Sign1Text:
	.string "ROUTE 42"
	.string "\pECRUTEAK CITY -\n"
	.string "MAHOGANY TOWN$"

Route42_Johto_MtMortarSign1Text:
	.string "MT.MORTAR"
	.string "\pWATERFALL CAVE\n"
	.string "INSIDE$"

Route42_Johto_MtMortarSign2Text:
	.string "MT.MORTAR"
	.string "\pWATERFALL CAVE\n"
	.string "INSIDE$"

Route42_Johto_Route42Sign2Text:
	.string "ROUTE 42"
	.string "\pECRUTEAK CITY -\n"
	.string "MAHOGANY TOWN$"
