RuinsOfAlphAerodactylItemRoom_Johto_MapScripts::
	.byte 0

RuinsOfAlphAerodactylItemRoom_Johto_RuinsOfAlphAerodactylItemRoomAncientReplica_Entry::
	lockall
	goto RuinsOfAlphAerodactylItemRoom_Johto_RuinsOfAlphAerodactylItemRoomAncientReplica


RuinsOfAlphAerodactylItemRoom_Johto_RuinsOfAlphAerodactylItemRoomAncientReplica:
	message RuinsOfAlphAerodactylItemRoom_Johto_RuinsOfAlphAerodactylItemRoomAncientReplicaText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

RuinsOfAlphAerodactylItemRoom_Johto_RuinsOfAlphAerodactylItemRoomAncientReplicaText:
	.string "It's a replica of\n"
	.string "an ancient POKé-\l"
	.string "MON.$"
