TrainerTower_2F_MapScripts:: @ 81646E6
	map_script MAP_SCRIPT_ON_RESUME, TrainerTower_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerTower_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerTower_OnFrame
	.byte 0

@ Below scripts are unused, the identical versions in the 1F script are used instead

TrainerTower_2F_EventScript_DoublesTrainer1:: @ 81646F6
	call TrainerTower_EventScript_SpeakToDoublesTrainer1
	end

TrainerTower_2F_EventScript_SinglesTrainer:: @ 81646FC
	call TrainerTower_EventScript_SpeakToSinglesTrainer
	end

TrainerTower_2F_EventScript_KnockoutTrainer:: @ 8164702
	call TrainerTower_EventScript_SpeakToKnockoutTrainer
	end

TrainerTower_2F_EventScript_DoublesTrainer2:: @ 8164708
	call TrainerTower_EventScript_SpeakToDoublesTrainer2
	end

TrainerTower_2F_EventScript_Owner:: @ 816470E
	call TrainerTower_EventScript_SpeakToOwner
	end
