Route37_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route37_Johto_OnTransition
	.byte 0

Route37_Johto_OnTransition:
	call Route37_Johto_Route37SunnyCallback_Sub
	end

Route37_Johto_Route37FruitTree1_Entry::
	lockall
	goto Route37_Johto_Route37FruitTree1

Route37_Johto_SunnyScript_Entry::
	lockall
	goto Route37_Johto_SunnyScript

Route37_Johto_Route37FruitTree2_Entry::
	lockall
	goto Route37_Johto_Route37FruitTree2

Route37_Johto_Route37FruitTree3_Entry::
	lockall
	goto Route37_Johto_Route37FruitTree3

Route37_Johto_Route37Sign_Entry::
	lockall
	goto Route37_Johto_Route37Sign


Route37_Johto_SunnyScript:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_MAGNET_FROM_SUNNY, Route37_Johto_SunnySundayScript
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

Route37_Johto_SunnySundayScript:
	message Route37_Johto_SunnySundayText
	waitmessage
	waitbuttonpress

Route37_Johto_SunnyDoneScript:
	closemessage
	releaseall
	end

Route37_Johto_Route37Sign:
	message Route37_Johto_Route37SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route37_Johto_Route37FruitTree1:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_37_1
	goto Johto_EventScript_Unimplemented

Route37_Johto_Route37FruitTree2:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_37_2
	goto Johto_EventScript_Unimplemented

Route37_Johto_Route37FruitTree3:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_37_3
	goto Johto_EventScript_Unimplemented

Route37_Johto_Route37SunnyCallback_Sub:
	@ TODO unsupported: readvar VAR_WEEKDAY
	return

Route37_Johto_SunnySundayText:
	.string "SUNNY: My sisters\n"
	.string "and brothers are\l"
	.string "MONICA, TUSCANY,\l"
	.string "WESLEY, ARTHUR,\l"
	.string "FRIEDA and SANTOS."
	.string "\pThey're all older\n"
	.string "than me!$"

Route37_Johto_Route37SignText:
	.string "ROUTE 37$"
