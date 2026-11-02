RuinsOfAlphOmanyteItemRoom_Johto_MapScripts::
	.byte 0

RuinsOfAlphOmanyteItemRoom_Johto_RuinsOfAlphOmanyteItemRoomAncientReplica_Entry::
	lockall
	goto RuinsOfAlphOmanyteItemRoom_Johto_RuinsOfAlphOmanyteItemRoomAncientReplica


RuinsOfAlphOmanyteItemRoom_Johto_RuinsOfAlphOmanyteItemRoomAncientReplica:
	message RuinsOfAlphOmanyteItemRoom_Johto_RuinsOfAlphOmanyteItemRoomAncientReplicaText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

RuinsOfAlphOmanyteItemRoom_Johto_RuinsOfAlphOmanyteItemRoomAncientReplicaText:
	.string "It's a replica of\n"
	.string "an ancient POKé-\l"
	.string "MON.$"
