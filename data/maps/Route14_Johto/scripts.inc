Route14_Johto_MapScripts::
	.byte 0

Route14_Johto_Kim_Entry::
	lockall
	goto Route14_Johto_Kim


Route14_Johto_Kim:
	faceplayer
	@ TODO unsupported: trade NPC_TRADE_KIM
	goto Johto_EventScript_Unimplemented

Route14_Johto_TrainerPokefanmCarter::
	trainerbattle_single TRAINER_JOHTO_POKEFANM_CARTER, Route14_Johto_PokefanmCarterSeenText, Route14_Johto_PokefanmCarterBeatenText
	setflag FLAG_JOHTO_BEAT_POKEFANM_CARTER
	lock
	faceplayer
	goto Route14_Johto_TrainerPokefanmCarter_Script

Route14_Johto_TrainerPokefanmCarter_Script:
	message Route14_Johto_PokefanmCarterAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route14_Johto_TrainerBirdKeeperRoy::
	trainerbattle_single TRAINER_JOHTO_BIRD_KEEPER_ROY, Route14_Johto_BirdKeeperRoySeenText, Route14_Johto_BirdKeeperRoyBeatenText
	setflag FLAG_JOHTO_BEAT_BIRD_KEEPER_ROY
	lock
	faceplayer
	goto Route14_Johto_TrainerBirdKeeperRoy_Script

Route14_Johto_TrainerBirdKeeperRoy_Script:
	message Route14_Johto_BirdKeeperRoyAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route14_Johto_TrainerPokefanmTrevor::
	trainerbattle_single TRAINER_JOHTO_POKEFANM_TREVOR, Route14_Johto_PokefanmTrevorSeenText, Route14_Johto_PokefanmTrevorBeatenText
	setflag FLAG_JOHTO_BEAT_POKEFANM_TREVOR
	lock
	faceplayer
	goto Route14_Johto_TrainerPokefanmTrevor_Script

Route14_Johto_TrainerPokefanmTrevor_Script:
	message Route14_Johto_PokefanmTrevorAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route14_Johto_PokefanmCarterSeenText:
	.string "Let me tell you,\n"
	.string "I had a hard time"
	.string "\pcatching my prized\n"
	.string "POKéMON.$"

Route14_Johto_PokefanmCarterBeatenText:
	.string "Awaaah!$"

Route14_Johto_PokefanmCarterAfterBattleText:
	.string "SQUIRTLE, CHARMAN-\n"
	.string "DER and BULBASAUR…"
	.string "\pI think that's a\n"
	.string "well-balanced mix.$"

Route14_Johto_BirdKeeperRoySeenText:
	.string "My dream is to fly\n"
	.string "with my beloved\l"
	.string "bird POKéMON.$"

Route14_Johto_BirdKeeperRoyBeatenText:
	.string "I can dream, but I\n"
	.string "can't ever fly…$"

Route14_Johto_BirdKeeperRoyAfterBattleText:
	.string "You have POKéMON\n"
	.string "that know the HM"
	.string "\pmove FLY, don't\n"
	.string "you? I envy you.$"

Route14_Johto_PokefanmTrevorSeenText:
	.string "Hi. Did you know…?"
	.string "\pPOKéMON get more\n"
	.string "friendly if you"
	.string "\ptrain them in a\n"
	.string "place that they\l"
	.string "remember.$"

Route14_Johto_PokefanmTrevorBeatenText:
	.string "Where did I meet\n"
	.string "this PSYDUCK?$"

Route14_Johto_PokefanmTrevorAfterBattleText:
	.string "If only there were\n"
	.string "an easy way to"
	.string "\pidentify where I\n"
	.string "got my POKéMON…$"
