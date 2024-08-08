LittlerootTown_AssistantsHouse_MapScripts::
	.byte 0

AssistantsHouse_Wife_EventScript::
	msgbox AssistantsHouse_Text_Wife, MSGBOX_NPC
	end

AssistantsHouse_TV_EventScript::
	msgbox AssistantsHouse_Text_WatchTV, MSGBOX_SIGN
	end

AssistantsHouse_Text_Wife:
	.string "I like to watch TV while my\n"
	.string "my husband is at work.\p"
	.string "There's all sorts of new\n"
	.string "shows from Mauville lately!$"

AssistantsHouse_Text_WatchTV:
	.string "“We'll be right back from\n"
	.string "our scheduled programming.\p"
	.string "But first, a word from our\n"
	.string "sponsor, Mauville Holdings!”\p"
	.string "The upbeat ad makes it seem\n"
	.string "that paying your power bill\l"
	.string "can be fun!$"
