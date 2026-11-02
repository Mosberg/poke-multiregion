OlivineLighthouse2F_Johto_MapScripts::
	.byte 0



OlivineLighthouse2F_Johto_TrainerGentlemanAlfred::
	trainerbattle_single TRAINER_JOHTO_GENTLEMAN_ALFRED, OlivineLighthouse2F_Johto_GentlemanAlfredSeenText, OlivineLighthouse2F_Johto_GentlemanAlfredBeatenText
	setflag FLAG_JOHTO_BEAT_GENTLEMAN_ALFRED
	lock
	faceplayer
	goto OlivineLighthouse2F_Johto_TrainerGentlemanAlfred_Script

OlivineLighthouse2F_Johto_TrainerGentlemanAlfred_Script:
	message OlivineLighthouse2F_Johto_GentlemanAlfredAfterBattleText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

OlivineLighthouse2F_Johto_TrainerSailorHuey::
	trainerbattle_single TRAINER_JOHTO_SAILOR_HUEY1, OlivineLighthouse2F_Johto_SailorHueySeenText, OlivineLighthouse2F_Johto_SailorHueyBeatenText
	setflag FLAG_JOHTO_BEAT_SAILOR_HUEY
	lock
	faceplayer
	goto OlivineLighthouse2F_Johto_TrainerSailorHuey_Script

OlivineLighthouse2F_Johto_TrainerSailorHuey_Script:
	@ TODO unsupported: loadvar VAR_CALLERID, PHONE_SAILOR_HUEY
	goto Johto_EventScript_Unimplemented

OlivineLighthouse2F_Johto_SailorHueySeenText:
	.string "Men of the sea are\n"
	.string "always spoiling\l"
	.string "for a good fight!$"

OlivineLighthouse2F_Johto_SailorHueyBeatenText:
	.string "Urf!\n"
	.string "I lose!$"

OlivineLighthouse2F_Johto_GentlemanAlfredSeenText:
	.string "Hm? This is no\n"
	.string "place for playing.$"

OlivineLighthouse2F_Johto_GentlemanAlfredBeatenText:
	.string "Ah! I can see that\n"
	.string "you're serious.$"

OlivineLighthouse2F_Johto_GentlemanAlfredAfterBattleText:
	.string "Up top is a POKé-\n"
	.string "MON that keeps the\l"
	.string "LIGHTHOUSE lit."
	.string "\pBut I hear that\n"
	.string "it's sick now and"
	.string "\pcan't be cured by\n"
	.string "ordinary medicine.$"
