SproutTower2F_Johto_MapScripts::
	.byte 0

SproutTower2F_Johto_SproutTower2FStatue_Entry::
	lockall
	goto SproutTower2F_Johto_SproutTower2FStatue


SproutTower2F_Johto_SproutTower2FStatue:
	message SproutTower2F_Johto_SproutTower2FStatueText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SproutTower2F_Johto_SproutTower2FStatueText:
	.string "A POKéMON statue…"
	.string "\pIt looks very\n"
	.string "distinguished.$"
