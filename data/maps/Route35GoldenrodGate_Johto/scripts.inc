Route35GoldenrodGate_Johto_MapScripts::
	.byte 0

Route35GoldenrodGate_Johto_RandyScript_Entry::
	lockall
	goto Route35GoldenrodGate_Johto_RandyScript

Route35GoldenrodGate_Johto_Route35GoldenrodGatePokefanFScript_Entry::
	lockall
	goto Route35GoldenrodGate_Johto_Route35GoldenrodGatePokefanFScript

Route35GoldenrodGate_Johto_Route35GoldenrodGateFisherScript_Entry::
	lockall
	goto Route35GoldenrodGate_Johto_Route35GoldenrodGateFisherScript


Route35GoldenrodGate_Johto_RandyScript:
	faceplayer
	@ TODO unsupported: iftrue .gothpup
	goto Johto_EventScript_Unimplemented

Route35GoldenrodGate_Johto_Route35GoldenrodGatePokefanFScript:
	faceplayer
	@ TODO unsupported: iftrue .FoughtSudowoodo
	goto Johto_EventScript_Unimplemented

Route35GoldenrodGate_Johto_Route35GoldenrodGateFisherScript:
	faceplayer
	message Route35GoldenrodGate_Johto_Route35GoldenrodGateFisherText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35GoldenrodGate_Johto_Route35GoldenrodGateFisherText:
	.string "I wonder how many\n"
	.string "kinds of POKéMON"
	.string "\pthere are in the\n"
	.string "world."
	.string "\pThree years ago,\n"
	.string "PROF.OAK said that"
	.string "\pthere were 150\n"
	.string "different kinds.$"
