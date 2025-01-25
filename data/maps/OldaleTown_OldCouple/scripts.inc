.set LOCALID_OLD_MAN, 1

OldaleTown_OldCouple_MapScripts::
	.byte 0

OldaleTown_OldCouple_EventScript_Woman::
	msgbox OldaleTown_OldCouple_Text_HaveACookie, MSGBOX_NPC
	end

OldaleTown_OldCouple_EventScript_Man::
	msgbox OldaleTown_OldCouple_Text_TimeFlows, MSGBOX_NPC
	applymovement LOCALID_OLD_MAN, Common_Movement_FaceOriginalDirection
	end

OldaleTown_OldCouple_EventScript_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox OldaleTown_OldCouple_Text_Text_Pikachu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OldaleTown_OldCouple_Text_HaveACookie::
	.string "Life is too short to be stingy.\n"
	.string "I wish I learned that earlier.\p"
	.string "I hope you are always ready to give\n"
	.string "someone what they need.$"

OldaleTown_OldCouple_Text_TimeFlows::
	.string "I like spend all my time looking\n"
	.string "out on the bay.\p"
	.string "....\l"
	.string "It's a peaceful life.$"

OldaleTown_OldCouple_Text_Text_Pikachu::
	.string "Chu chu!$"
