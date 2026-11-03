DayCare_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DayCare_Johto_OnTransition
	.byte 0

DayCare_Johto_OnTransition:
	call DayCare_Johto_DayCareEggCheckCallback_Cb
	end

DayCare_Johto_DayCareManScript_Inside_Entry::
	lockall
	goto DayCare_Johto_DayCareManScript_Inside

DayCare_Johto_DayCareLadyScript_Entry::
	lockall
	goto DayCare_Johto_DayCareLadyScript

DayCare_Johto_DayCareBookshelf_Entry::
	lockall
	goto DayCare_Johto_DayCareBookshelf


DayCare_Johto_DayCareManScript_Inside:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_ODD_EGG, DayCare_Johto_DayCareManScript_Inside_AlreadyHaveOddEgg
	message DayCare_Johto_DayCareManText_GiveOddEgg
	waitmessage
	waitbuttonpress
	closemessage
	getpartysize
	goto_if_eq VAR_RESULT, 6, DayCare_Johto_DayCareManScript_Inside_PartyFull
	@ TODO unsupported: special GiveOddEgg
	goto Johto_EventScript_Unimplemented

DayCare_Johto_DayCareManScript_Inside_PartyFull:
	message DayCare_Johto_DayCareText_PartyFull
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

DayCare_Johto_DayCareManScript_Inside_AlreadyHaveOddEgg:
	@ TODO unsupported: special DayCareMan
	goto Johto_EventScript_Unimplemented

DayCare_Johto_DayCareLadyScript:
	faceplayer
	goto_if_set FLAG_JOHTO_ENGINE_DAY_CARE_MAN_HAS_EGG, DayCare_Johto_DayCareLadyScript_HusbandWasLookingForYou
	@ TODO unsupported: special DayCareLady
	goto Johto_EventScript_Unimplemented

DayCare_Johto_DayCareLadyScript_HusbandWasLookingForYou:
	message DayCare_Johto_Text_GrampsLookingForYou
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

DayCare_Johto_DayCareBookshelf:
	goto Johto_Std_DifficultBookshelfScript

DayCare_Johto_DayCareEggCheckCallback_Cb:
	goto_if_set FLAG_JOHTO_ENGINE_DAY_CARE_MAN_HAS_EGG, DayCare_Johto_DayCareEggCheckCallback_PutDayCareManOutside_Cb
	clearflag FLAG_JOHTO_DAY_CARE_MAN_IN_DAY_CARE
	setflag FLAG_JOHTO_DAY_CARE_MAN_ON_ROUTE_34
	return

DayCare_Johto_DayCareEggCheckCallback_PutDayCareManOutside_Cb:
	setflag FLAG_JOHTO_DAY_CARE_MAN_IN_DAY_CARE
	clearflag FLAG_JOHTO_DAY_CARE_MAN_ON_ROUTE_34
	return

DayCare_Johto_Text_GrampsLookingForYou:
	.string "Gramps was looking\n"
	.string "for you.$"

DayCare_Johto_DayCareManText_GiveOddEgg:
	.string "I'm the DAY-CARE\n"
	.string "MAN."
	.string "\pDo you know about\n"
	.string "EGGS?"
	.string "\pI was raising\n"
	.string "POKéMON with my\l"
	.string "wife, you see."
	.string "\pWe were shocked to\n"
	.string "find an EGG!"
	.string "\pHow incredible is\n"
	.string "that?"
	.string "\pWell, wouldn't you\n"
	.string "like this EGG?"
	.string "\pThen fine, this is\n"
	.string "yours to keep!$"

DayCare_Johto_DayCareText_PartyFull:
	.string "You've no room for\n"
	.string "this.$"
