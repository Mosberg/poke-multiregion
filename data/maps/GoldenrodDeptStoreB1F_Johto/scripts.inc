GoldenrodDeptStoreB1F_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodDeptStoreB1F_Johto_OnTransition
	.byte 0

GoldenrodDeptStoreB1F_Johto_OnTransition:
	call GoldenrodDeptStoreB1F_Johto_GoldenRodDeptStoreUnblockCallback_Sub
	end

GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt1Script_Entry::
	lockall
	goto GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt1Script

GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt2Script_Entry::
	lockall
	goto GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt2Script

GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt3Script_Entry::
	lockall
	goto GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt3Script

GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FMachopScript_Entry::
	lockall
	goto GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FMachopScript


GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt1Script:
	faceplayer
	message GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt2Script:
	faceplayer
	message GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt3Script:
	faceplayer
	message GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt3Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FMachopScript:
	message GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FMachokeText
	waitmessage
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
	waitmoncry
	waitbuttonpress
	closemessage
	releaseall
	end

GoldenrodDeptStoreB1F_Johto_GoldenRodDeptStoreUnblockCallback_Sub:
	clearflag FLAG_JOHTO_GOLDENROD_UNDERGROUND_WAREHOUSE_BLOCKED_OFF
	return

GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt1Text:
	.string "Hey, kid! You're\n"
	.string "holding us up!"
	.string "\pOur policy is to\n"
	.string "work behind the"
	.string "\pscenes where no\n"
	.string "one can see us!$"

GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt2Text:
	.string "I lose my passion\n"
	.string "for work if some-\l"
	.string "one's watching."
	.string "\pCome on, kid,\n"
	.string "scoot!$"

GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FBlackBelt3Text:
	.string "Oohah! Oohah!"
	.string "\pThe stuff on the\n"
	.string "ground's junk."
	.string "\pTake it if you\n"
	.string "want it!$"

GoldenrodDeptStoreB1F_Johto_GoldenrodDeptStoreB1FMachokeText:
	.string "MACHOKE: Maaacho!$"
