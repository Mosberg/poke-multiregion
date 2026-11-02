SproutTower1F_Johto_MapScripts::
	.byte 0

SproutTower1F_Johto_SproutTower1FSage1Script_Entry::
	lockall
	goto SproutTower1F_Johto_SproutTower1FSage1Script

SproutTower1F_Johto_SproutTower1FSage2Script_Entry::
	lockall
	goto SproutTower1F_Johto_SproutTower1FSage2Script

SproutTower1F_Johto_SproutTower1FGrannyScript_Entry::
	lockall
	goto SproutTower1F_Johto_SproutTower1FGrannyScript

SproutTower1F_Johto_SproutTower1FTeacherScript_Entry::
	lockall
	goto SproutTower1F_Johto_SproutTower1FTeacherScript

SproutTower1F_Johto_SproutTower1FStatue_Entry::
	lockall
	goto SproutTower1F_Johto_SproutTower1FStatue


SproutTower1F_Johto_SproutTower1FSage1Script:
	faceplayer
	message SproutTower1F_Johto_SproutTower1FSage1Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SproutTower1F_Johto_SproutTower1FSage2Script:
	faceplayer
	message SproutTower1F_Johto_SproutTower1FSage2Text
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SproutTower1F_Johto_SproutTower1FGrannyScript:
	faceplayer
	message SproutTower1F_Johto_SproutTower1FGrannyText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SproutTower1F_Johto_SproutTower1FTeacherScript:
	faceplayer
	message SproutTower1F_Johto_SproutTower1FTeacherText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SproutTower1F_Johto_SproutTower1FStatue:
	message SproutTower1F_Johto_SproutTower1FStatueText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

SproutTower1F_Johto_SproutTower1FSage1Text:
	.string "Only if you reach\n"
	.string "the top will you\l"
	.string "obtain an HM.$"

SproutTower1F_Johto_SproutTower1FSage2Text:
	.string "SPROUT TOWER was\n"
	.string "built long ago"
	.string "\pas a place for\n"
	.string "POKéMON training.$"

SproutTower1F_Johto_SproutTower1FGrannyText:
	.string "A BELLSPROUT over\n"
	.string "100 feet tall…"
	.string "\pPeople say that it\n"
	.string "became the center\l"
	.string "pillar here.$"

SproutTower1F_Johto_SproutTower1FTeacherText:
	.string "See the pillar\n"
	.string "shaking?"
	.string "\pPeople are train-\n"
	.string "ing upstairs.$"

SproutTower1F_Johto_SproutTower1FStatueText:
	.string "A POKéMON statue…"
	.string "\pIt looks very\n"
	.string "distinguished.$"
