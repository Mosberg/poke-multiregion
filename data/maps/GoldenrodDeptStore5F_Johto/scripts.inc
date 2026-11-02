GoldenrodDeptStore5F_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodDeptStore5F_Johto_OnTransition
	.byte 0

GoldenrodDeptStore5F_Johto_OnTransition:
	call GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FCheckIfSundayCallback_Cb
	end

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FClerkScript_Entry::
	lockall
	goto GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FClerkScript

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FLassScript_Entry::
	lockall
	goto GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FLassScript

GoldenrodDeptStore5F_Johto_Mike_Entry::
	lockall
	goto GoldenrodDeptStore5F_Johto_Mike

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FPokefanMScript_Entry::
	lockall
	goto GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FPokefanMScript

GoldenrodDeptStore5F_Johto_Carrie_Entry::
	lockall
	goto GoldenrodDeptStore5F_Johto_Carrie

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FReceptionistScript_Entry::
	lockall
	goto GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FReceptionistScript

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FDirectory_Entry::
	lockall
	goto GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FDirectory

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FElevatorButton_Entry::
	lockall
	goto GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FElevatorButton


GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FClerkScript:
	faceplayer
	@ TODO unsupported: iftrue .headbutt
	goto Johto_EventScript_Unimplemented

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FReceptionistScript:
	faceplayer
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

GoldenrodDeptStore5F_Johto_Carrie:
	faceplayer
	@ TODO unsupported: special GameboyCheck
	goto Johto_EventScript_Unimplemented

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FLassScript:
	faceplayer
	message GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FLassText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodDeptStore5F_Johto_Mike:
	faceplayer
	@ TODO unsupported: trade NPC_TRADE_MIKE
	goto Johto_EventScript_Unimplemented

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FPokefanMScript:
	faceplayer
	message GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FPokefanMText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FDirectory:
	message GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FDirectoryText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FElevatorButton:
	goto Johto_Std_ElevatorButtonScript

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FCheckIfSundayCallback_Cb:
	@ TODO unsupported: readvar VAR_WEEKDAY
	return

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FLassText:
	.string "On Sundays, a lady\n"
	.string "comes to check out\l"
	.string "POKéMON."
	.string "\pShe even gives\n"
	.string "away TMs!$"

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FPokefanMText:
	.string "You can't rename a\n"
	.string "POKéMON you get in\l"
	.string "a trade."
	.string "\pThe name is a re-\n"
	.string "flection of the"
	.string "\poriginal trainer's\n"
	.string "feelings for it.$"

GoldenrodDeptStore5F_Johto_GoldenrodDeptStore5FDirectoryText:
	.string "Customize Your\n"
	.string "POKéMON"
	.string "\p5F TM CORNER$"
