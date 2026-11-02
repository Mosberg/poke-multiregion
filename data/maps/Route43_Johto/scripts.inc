Route43_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route43_Johto_OnTransition
	.byte 0

Route43_Johto_OnTransition:
	call Route43_Johto_Route43CheckIfRocketsScene_Sub
	end

Route43_Johto_Route43FruitTree_Entry::
	lockall
	goto Route43_Johto_Route43FruitTree

Route43_Johto_Route43Sign1_Entry::
	lockall
	goto Route43_Johto_Route43Sign1

Route43_Johto_Route43Sign2_Entry::
	lockall
	goto Route43_Johto_Route43Sign2

Route43_Johto_Route43TrainerTips_Entry::
	lockall
	goto Route43_Johto_Route43TrainerTips


Route43_Johto_Route43Sign1:
	message Route43_Johto_Route43Sign1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route43_Johto_Route43Sign2:
	message Route43_Johto_Route43Sign2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route43_Johto_Route43TrainerTips:
	message Route43_Johto_Route43TrainerTipsText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route43_Johto_Route43FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_43
	goto Johto_EventScript_Unimplemented

Route43_Johto_Route43CheckIfRocketsScene_Sub:
	goto_if_set FLAG_JOHTO_CLEARED_ROCKET_HIDEOUT, Route43_Johto_Route43CheckIfRocketsScene_NoRockets_Sub
	setvar VAR_JOHTO_SCENE_ROUTE_43_GATE, 0
	return

Route43_Johto_Route43CheckIfRocketsScene_NoRockets_Sub:
	setvar VAR_JOHTO_SCENE_ROUTE_43_GATE, 1
	return

Route43_Johto_Route43Sign1Text:
	.string "ROUTE 43"
	.string "\pLAKE OF RAGE -\n"
	.string "MAHOGANY TOWN$"

Route43_Johto_Route43Sign2Text:
	.string "ROUTE 43"
	.string "\pLAKE OF RAGE -\n"
	.string "MAHOGANY TOWN$"

Route43_Johto_Route43TrainerTipsText:
	.string "TRAINER TIPS"
	.string "\pAll POKéMON have\n"
	.string "pros and cons"
	.string "\pdepending on their\n"
	.string "types."
	.string "\pIf their types\n"
	.string "differ, a higher-"
	.string "\plevel POKéMON may\n"
	.string "lose in battle."
	.string "\pLearn which types\n"
	.string "are strong and"
	.string "\pweak against your\n"
	.string "POKéMON's type.$"
