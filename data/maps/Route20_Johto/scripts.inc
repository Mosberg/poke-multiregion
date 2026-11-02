Route20_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_Johto_OnTransition
	.byte 0

Route20_Johto_OnTransition:
	call Route20_Johto_Route20ClearRocksCallback_Sub
	end

Route20_Johto_CinnabarGymSign_Entry::
	lockall
	goto Route20_Johto_CinnabarGymSign


Route20_Johto_CinnabarGymSign:
	message Route20_Johto_CinnabarGymSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route20_Johto_Route20ClearRocksCallback_Sub:
	setflag FLAG_JOHTO_CINNABAR_ROCKS_CLEARED
	return

Route20_Johto_CinnabarGymSignText:
	.string "What does this\n"
	.string "sign say?"
	.string "\pCINNABAR GYM\n"
	.string "LEADER: BLAINE$"
