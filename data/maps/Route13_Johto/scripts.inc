Route13_Johto_MapScripts::
	.byte 0

Route13_Johto_Route13TrainerTips_Entry::
	lockall
	goto Route13_Johto_Route13TrainerTips

Route13_Johto_Route13Sign_Entry::
	lockall
	goto Route13_Johto_Route13Sign

Route13_Johto_Route13DirectionsSign_Entry::
	lockall
	goto Route13_Johto_Route13DirectionsSign


Route13_Johto_Route13TrainerTips:
	message Route13_Johto_Route13TrainerTipsText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route13_Johto_Route13Sign:
	message Route13_Johto_Route13SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route13_Johto_Route13DirectionsSign:
	message Route13_Johto_Route13DirectionsSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route13_Johto_Route13TrainerTipsText:
	.string "TRAINER TIPS"
	.string "\pLook! Right there,\n"
	.string "at the left side\l"
	.string "of the post.$"

Route13_Johto_Route13SignText:
	.string "ROUTE 13"
	.string "\pNORTH TO SILENCE\n"
	.string "BRIDGE$"

Route13_Johto_Route13DirectionsSignText:
	.string "NORTH TO LAVENDER\n"
	.string "TOWN"
	.string "\pWEST TO FUCHSIA\n"
	.string "CITY$"
