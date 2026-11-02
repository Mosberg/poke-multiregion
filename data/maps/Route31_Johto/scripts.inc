Route31_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route31_Johto_OnTransition
	.byte 0

Route31_Johto_OnTransition:
	call Route31_Johto_Route31CheckMomCallCallback_Sub
	end

Route31_Johto_Route31MailRecipientScript_Entry::
	lockall
	goto Route31_Johto_Route31MailRecipientScript

Route31_Johto_Route31YoungsterScript_Entry::
	lockall
	goto Route31_Johto_Route31YoungsterScript

Route31_Johto_Route31CooltrainerMScript_Entry::
	lockall
	goto Route31_Johto_Route31CooltrainerMScript

Route31_Johto_Route31FruitTree_Entry::
	lockall
	goto Route31_Johto_Route31FruitTree

Route31_Johto_Route31Sign_Entry::
	lockall
	goto Route31_Johto_Route31Sign

Route31_Johto_DarkCaveSign_Entry::
	lockall
	goto Route31_Johto_DarkCaveSign


Route31_Johto_Route31MailRecipientScript:
	faceplayer
	goto_if_set FLAG_JOHTO_GOT_TM50_NIGHTMARE, Route31_Johto_Route31MailRecipientScript_DescribeNightmare
	goto_if_set FLAG_JOHTO_GOT_KENYA, Route31_Johto_Route31MailRecipientScript_TryGiveKenya
	message Route31_Johto_Text_Route31SleepyMan
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route31_Johto_Route31MailRecipientScript_TryGiveKenya:
	message Route31_Johto_Text_Route31SleepyManGotMail
	waitmessage
	waitbuttonpress
	@ TODO unsupported: checkpokemail ReceivedSpearowMailText
	goto Johto_EventScript_Unimplemented

Route31_Johto_Route31MailRecipientScript_DescribeNightmare:
	message Route31_Johto_Text_Route31DescribeNightmare
	waitmessage
	waitbuttonpress

Route31_Johto_Route31MailRecipientScript_NoRoomForItems:
	closemessage
	releaseall
	end

Route31_Johto_Route31YoungsterScript:
	faceplayer
	message Route31_Johto_Route31YoungsterText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route31_Johto_Route31Sign:
	message Route31_Johto_Route31SignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route31_Johto_DarkCaveSign:
	message Route31_Johto_DarkCaveSignText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route31_Johto_Route31CooltrainerMScript:
	faceplayer
	message Route31_Johto_Route31CooltrainerMText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route31_Johto_Route31FruitTree:
	@ TODO unsupported: fruittree FRUITTREE_ROUTE_31
	goto Johto_EventScript_Unimplemented

Route31_Johto_Route31CheckMomCallCallback_Sub:
	goto_if_unset FLAG_JOHTO_TALKED_TO_MOM_AFTER_MYSTERY_EGG_QUEST, Route31_Johto_Route31CheckMomCallCallback_DoMomCall_Sub
	return

Route31_Johto_Route31CheckMomCallCallback_DoMomCall_Sub:
	@ TODO unsupported: specialphonecall SPECIALCALL_WORRIED
	return

Route31_Johto_Route31CooltrainerMText:
	.string "DARK CAVE…"
	.string "\pIf POKéMON could\n"
	.string "light it up, I'd\l"
	.string "explore it.$"

Route31_Johto_Text_Route31SleepyMan:
	.string "… Hnuurg… Huh?"
	.string "\pI walked too far\n"
	.string "today looking for\l"
	.string "POKéMON."
	.string "\pMy feet hurt and\n"
	.string "I'm sleepy…"
	.string "\pIf I were a wild\n"
	.string "POKéMON, I'd be\l"
	.string "easy to catch…"
	.string "\p…Zzzz…$"

Route31_Johto_Text_Route31SleepyManGotMail:
	.string "…Zzzz… Huh?"
	.string "\pWhat's that? You\n"
	.string "have MAIL for me?$"

Route31_Johto_Text_Route31DescribeNightmare:
	.string "TM50 is NIGHTMARE."
	.string "\pIt's a wicked move\n"
	.string "that steadily cuts"
	.string "\pthe HP of a sleep-\n"
	.string "ing enemy."
	.string "\pOoooh…\n"
	.string "That's scary…"
	.string "\pI don't want to\n"
	.string "have bad dreams.$"

Route31_Johto_Route31YoungsterText:
	.string "I found a good\n"
	.string "POKéMON in DARK\l"
	.string "CAVE."
	.string "\pI'm going to raise\n"
	.string "it to take on\l"
	.string "FALKNER."
	.string "\pHe's the leader of\n"
	.string "VIOLET CITY's GYM.$"

Route31_Johto_Route31SignText:
	.string "ROUTE 31"
	.string "\pVIOLET CITY -\n"
	.string "CHERRYGROVE CITY$"

Route31_Johto_DarkCaveSignText:
	.string "DARK CAVE$"
