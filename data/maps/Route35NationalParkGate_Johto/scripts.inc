Route35NationalParkGate_Johto_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route35NationalParkGate_Johto_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route35NationalParkGate_Johto_OnFrame
	.byte 0

Route35NationalParkGate_Johto_OnTransition:
	call Route35NationalParkGate_Johto_Route35NationalParkGateCheckIfContestRunningCallback_Cb
	call Route35NationalParkGate_Johto_Route35NationalParkGateCheckIfContestAvailableCallback_Cb
	end

Route35NationalParkGate_Johto_OnFrame:
	map_script_2 VAR_JOHTO_SCENE_ROUTE_35_NATIONAL_PARK_GATE, 2, Route35NationalParkGate_Johto_Route35NationalParkGateLeavingContestEarlyScript_Entry
	.2byte 0

Route35NationalParkGate_Johto_Route35OfficerScriptContest_Entry::
	lockall
	goto Route35NationalParkGate_Johto_Route35OfficerScriptContest

Route35NationalParkGate_Johto_Route35NationalParkGateYoungsterScript_Entry::
	lockall
	goto Route35NationalParkGate_Johto_Route35NationalParkGateYoungsterScript

Route35NationalParkGate_Johto_Route35NationalParkGateOfficerScript_Entry::
	lockall
	goto Route35NationalParkGate_Johto_Route35NationalParkGateOfficerScript

Route35NationalParkGate_Johto_BugCatchingContestExplanationSign_Entry::
	lockall
	goto Route35NationalParkGate_Johto_BugCatchingContestExplanationSign

Route35NationalParkGate_Johto_Route35NationalParkGateLeavingContestEarlyScript_Entry::
	lockall
	goto Route35NationalParkGate_Johto_Route35NationalParkGateLeavingContestEarlyScript


Route35NationalParkGate_Johto_Route35NationalParkGateLeavingContestEarlyScript:
	applymovement OBJ_EVENT_ID_PLAYER, Route35NationalParkGate_Johto_Route35NationalParkGatePlayerApproachOfficer1Movement
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Johto_Movement_Face_Right
	waitmovement 1
	@ TODO unsupported: readvar VAR_CONTESTMINUTES
	goto Johto_EventScript_Unimplemented

Route35NationalParkGate_Johto_Route35OfficerScriptContest:
	@ TODO unsupported: readvar VAR_WEEKDAY
	goto Johto_EventScript_Unimplemented

Route35NationalParkGate_Johto_Route35NationalParkGate_ContestIsOver:
	message Route35NationalParkGate_Johto_Route35NationalParkGateOfficer1ContestIsOverText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35NationalParkGate_Johto_Route35NationalParkGateOfficerScript:
	faceplayer
	goto_if_set FLAG_JOHTO_ENGINE_DAILY_BUG_CONTEST, Route35NationalParkGate_Johto_Route35NationalParkGate_ContestIsOver
	message Route35NationalParkGate_Johto_Route35NationalParkGateOfficer1WeHoldContestsText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35NationalParkGate_Johto_Route35NationalParkGateYoungsterScript:
	faceplayer
	message Route35NationalParkGate_Johto_Route35NationalParkGateYoungsterText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35NationalParkGate_Johto_BugCatchingContestExplanationSign:
	message Route35NationalParkGate_Johto_BugCatchingContestExplanationText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

Route35NationalParkGate_Johto_Route35NationalParkGateCheckIfContestRunningCallback_Cb:
	goto_if_set FLAG_JOHTO_ENGINE_BUG_CONTEST_TIMER, Route35NationalParkGate_Johto_Route35NationalParkBugContestIsRunningScript_Cb
	setvar VAR_JOHTO_SCENE_ROUTE_35_NATIONAL_PARK_GATE, 0
	return

Route35NationalParkGate_Johto_Route35NationalParkBugContestIsRunningScript_Cb:
	setvar VAR_JOHTO_SCENE_ROUTE_35_NATIONAL_PARK_GATE, 2
	return

Route35NationalParkGate_Johto_Route35NationalParkGateCheckIfContestAvailableCallback_Cb:
	@ TODO unsupported: readvar VAR_WEEKDAY
	return

Route35NationalParkGate_Johto_Route35NationalParkGatePlayerApproachOfficer1Movement:
	walk_down
	face_left
	step_end

Route35NationalParkGate_Johto_Route35NationalParkGateOfficer1ContestIsOverText:
	.string "Today's Contest is\n"
	.string "over. We hope you"
	.string "\pwill participate\n"
	.string "in the future.$"

Route35NationalParkGate_Johto_Route35NationalParkGateOfficer1WeHoldContestsText:
	.string "We hold Contests\n"
	.string "regularly in the"
	.string "\pPARK. You should\n"
	.string "give it a shot.$"

Route35NationalParkGate_Johto_Route35NationalParkGateYoungsterText:
	.string "When is the next\n"
	.string "Bug-Catching Con-\l"
	.string "test going to be?$"

Route35NationalParkGate_Johto_BugCatchingContestExplanationText:
	.string "The Bug-Catching\n"
	.string "Contest is held on"
	.string "\pTuesday, Thursday\n"
	.string "and Saturday."
	.string "\pNot only do you\n"
	.string "earn a prize just"
	.string "\pfor participating,\n"
	.string "you also get to"
	.string "\pkeep the bug\n"
	.string "POKéMON you may"
	.string "\phave at the end of\n"
	.string "the contest.$"
