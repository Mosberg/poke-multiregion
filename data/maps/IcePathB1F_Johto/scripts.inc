IcePathB1F_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IcePathB1F_Johto_OnTransition
	.byte 0

IcePathB1F_Johto_OnTransition:
	call IcePathB1F_Johto_IcePathB1FSetUpStoneTableCallback_Sub
	end

IcePathB1F_Johto_IcePathB1FBoulder_Entry::
	lockall
	goto IcePathB1F_Johto_IcePathB1FBoulder


IcePathB1F_Johto_IcePathB1FBoulder:
	goto Johto_Std_StrengthBoulderScript

IcePathB1F_Johto_IcePathB1FSetUpStoneTableCallback_Sub:
	@ TODO unsupported: writecmdqueue .CommandQueue
	return
