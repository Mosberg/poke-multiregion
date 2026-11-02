RuinsOfAlphKabutoItemRoom_Johto_MapScripts::
	.byte 0

RuinsOfAlphKabutoItemRoom_Johto_RuinsOfAlphKabutoItemRoomAncientReplica_Entry::
	lockall
	goto RuinsOfAlphKabutoItemRoom_Johto_RuinsOfAlphKabutoItemRoomAncientReplica


RuinsOfAlphKabutoItemRoom_Johto_RuinsOfAlphKabutoItemRoomAncientReplica:
	message RuinsOfAlphKabutoItemRoom_Johto_RuinsOfAlphKabutoItemRoomAncientReplicaText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

RuinsOfAlphKabutoItemRoom_Johto_RuinsOfAlphKabutoItemRoomAncientReplicaText:
	.string "It's a replica of\n"
	.string "an ancient POKé-\l"
	.string "MON.$"
