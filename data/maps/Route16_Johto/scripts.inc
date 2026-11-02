Route16_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_Johto_OnTransition
	.byte 0

Route16_Johto_OnTransition:
	call Route16_Johto_Route16AlwaysOnBikeCallback_Sub
	end

Route16_Johto_CyclingRoadSign_Entry::
	lockall
	goto Route16_Johto_CyclingRoadSign


Route16_Johto_CyclingRoadSign:
	message Route16_Johto_CyclingRoadSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route16_Johto_Route16AlwaysOnBikeCallback_Sub:
	@ TODO unsupported: readvar VAR_YCOORD
	return

Route16_Johto_CyclingRoadSignText:
	.string "CYCLING ROAD"
	.string "\pDOWNHILL COASTING\n"
	.string "ALL THE WAY!$"
