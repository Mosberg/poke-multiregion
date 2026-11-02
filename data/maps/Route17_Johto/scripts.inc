Route17_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route17_Johto_OnTransition
	.byte 0

Route17_Johto_OnTransition:
	call Route17_Johto_Route17AlwaysOnBikeCallback_Sub
	end



Route17_Johto_Route17AlwaysOnBikeCallback_Sub:
	setflag FLAG_JOHTO_ENGINE_ALWAYS_ON_BIKE
	setflag FLAG_JOHTO_ENGINE_DOWNHILL
	return
