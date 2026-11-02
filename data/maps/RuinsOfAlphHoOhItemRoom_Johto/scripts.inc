RuinsOfAlphHoOhItemRoom_Johto_MapScripts::
	.byte 0

RuinsOfAlphHoOhItemRoom_Johto_RuinsOfAlphHoOhItemRoomAncientReplica_Entry::
	lockall
	goto RuinsOfAlphHoOhItemRoom_Johto_RuinsOfAlphHoOhItemRoomAncientReplica


RuinsOfAlphHoOhItemRoom_Johto_RuinsOfAlphHoOhItemRoomAncientReplica:
	message RuinsOfAlphHoOhItemRoom_Johto_RuinsOfAlphHoOhItemRoomAncientReplicaText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

RuinsOfAlphHoOhItemRoom_Johto_RuinsOfAlphHoOhItemRoomAncientReplicaText:
	.string "It's a replica of\n"
	.string "an ancient POKé-\l"
	.string "MON.$"
