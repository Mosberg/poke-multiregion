Route19_Johto_MapScripts::
	.byte 0

Route19_Johto_Route19Fisher1Script_Entry::
	lockall
	goto Route19_Johto_Route19Fisher1Script

Route19_Johto_Route19Fisher2Script_Entry::
	lockall
	goto Route19_Johto_Route19Fisher2Script

Route19_Johto_Route19Sign_Entry::
	lockall
	goto Route19_Johto_Route19Sign

Route19_Johto_CarefulSwimmingSign_Entry::
	lockall
	goto Route19_Johto_CarefulSwimmingSign


Route19_Johto_Route19Fisher1Script:
	faceplayer
	goto_if_set FLAG_JOHTO_CINNABAR_ROCKS_CLEARED, Route19_Johto_Route19Fisher1Script_RocksCleared
	message Route19_Johto_Route19Fisher1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route19_Johto_Route19Fisher1Script_RocksCleared:
	message Route19_Johto_Route19Fisher1Text_RocksCleared
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route19_Johto_Route19Fisher2Script:
	faceplayer
	goto_if_set FLAG_JOHTO_CINNABAR_ROCKS_CLEARED, Route19_Johto_Route19Fisher2Script_RocksCleared
	message Route19_Johto_Route19Fisher2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route19_Johto_Route19Fisher2Script_RocksCleared:
	message Route19_Johto_Route19Fisher2Text_RocksCleared
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route19_Johto_Route19Sign:
	message Route19_Johto_Route19SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route19_Johto_CarefulSwimmingSign:
	message Route19_Johto_CarefulSwimmingSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route19_Johto_Route19Fisher1Text:
	.string "Sorry. This road\n"
	.string "is closed for\l"
	.string "construction."
	.string "\pIf you want to get\n"
	.string "to CINNABAR, you'd"
	.string "\pbetter go south\n"
	.string "from PALLET TOWN.$"

Route19_Johto_Route19Fisher1Text_RocksCleared:
	.string "I'm all sweaty.\n"
	.string "Time for a swim!$"

Route19_Johto_Route19Fisher2Text:
	.string "Who knows how long\n"
	.string "it would take to\l"
	.string "move this boulder…$"

Route19_Johto_Route19Fisher2Text_RocksCleared:
	.string "The roadwork is\n"
	.string "finally finished."
	.string "\pNow I can go\n"
	.string "fishing again.$"

Route19_Johto_Route19SignText:
	.string "ROUTE 19"
	.string "\pFUCHSIA CITY -\n"
	.string "SEAFOAM ISLANDS$"

Route19_Johto_CarefulSwimmingSignText:
	.string "Please be careful\n"
	.string "if you are swim-\l"
	.string "ming to SEAFOAM\l"
	.string "ISLANDS."
	.string "\pFUCHSIA POLICE$"
