OlivineLighthouse6F_Johto_MapScripts::
	.byte 0

OlivineLighthouse6F_Johto_OlivineLighthouseJasmine_Entry::
	lockall
	goto OlivineLighthouse6F_Johto_OlivineLighthouseJasmine

OlivineLighthouse6F_Johto_OlivineLighthouseAmphy_Entry::
	lockall
	goto OlivineLighthouse6F_Johto_OlivineLighthouseAmphy


OlivineLighthouse6F_Johto_OlivineLighthouseJasmine:
	faceplayer
	@ TODO unsupported: checkitem SECRETPOTION
	goto Johto_EventScript_Unimplemented

OlivineLighthouse6F_Johto_OlivineLighthouseAmphy:
	faceplayer
	goto_if_set FLAG_JOHTO_JASMINE_RETURNED_TO_GYM, OlivineLighthouse6F_Johto_OlivineLighthouseAmphy_HealthyNow
	message OlivineLighthouse6F_Johto_AmphyPalPalooText
	waitmessage
	@ TODO unsupported: setval AMPHAROS
	goto Johto_EventScript_Unimplemented

OlivineLighthouse6F_Johto_OlivineLighthouseAmphy_HealthyNow:
	message OlivineLighthouse6F_Johto_AmphyPaluPaluluText
	waitmessage
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	waitmoncry
	waitbuttonpress
	closemessage
	fadescreen FADE_TO_WHITE
	fadescreen FADE_FROM_WHITE
	fadescreen FADE_TO_WHITE
	fadescreen FADE_FROM_WHITE
	releaseall
	end

OlivineLighthouse6F_Johto_AmphyPalPalooText:
	.string "AMPHY: …\n"
	.string "…Pa… paloo…$"

OlivineLighthouse6F_Johto_AmphyPaluPaluluText:
	.string "AMPHY: Palu!\n"
	.string "Palulu!$"
