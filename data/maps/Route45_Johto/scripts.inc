Route45_Johto_MapScripts::
	.byte 0

Route45_Johto_Route45FruitTree_Entry::
	lockall
	goto Route45_Johto_Route45FruitTree

Route45_Johto_TrainerCamperQuentin_Entry::
	lockall
	goto Route45_Johto_TrainerCamperQuentin

Route45_Johto_Route45Sign_Entry::
	lockall
	goto Route45_Johto_Route45Sign


Route45_Johto_TrainerCamperQuentin:
	faceplayer
	goto_if_set FLAG_JOHTO_BEAT_CAMPER_QUENTIN, Route45_Johto_TrainerCamperQuentin_Defeated
	message Route45_Johto_CamperQuentinSeenText
	waitmessage
	waitbuttonpress
	closemessage
	@ TODO unsupported: winlosstext CamperQuentinBeatenText, 0
	goto Johto_EventScript_Unimplemented

Route45_Johto_TrainerCamperQuentin_Defeated:
	message Route45_Johto_CamperQuentinAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route45_Johto_Route45Sign:
	message Route45_Johto_Route45SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route45_Johto_Route45FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_45
	goto Johto_EventScript_Unimplemented

Route45_Johto_CamperQuentinSeenText:
	.string "I'm really, really\n"
	.string "tough!$"

Route45_Johto_CamperQuentinAfterBattleText:
	.string "Have you been to\n"
	.string "the BATTLE TOWER?"
	.string "\pI never, ever lose\n"
	.string "there, but…$"

Route45_Johto_Route45SignText:
	.string "ROUTE 45\n"
	.string "MOUNTAIN RD. AHEAD$"
