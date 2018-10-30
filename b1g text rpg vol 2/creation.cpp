#include "creation.h"
#include "includes.h"
#include "player.h"
#include "menu.h"
#include "structs.h"



void createPlayer()
{
	struct modifier r_stats[4]{
	{0,0,0,0,0,0,0,"Human" },//Hu
	{-2,+1,+2,+5,-25,+50,0,"Elf" },//El
	{-3,+4,-1,+15,-50,-50,+50,"Halfling" },//Ha
	{+2,-2,-2,-5,+50,-80,+75,"Dwarf" }//Dwa
	};

	struct modifier c_stats[5]{
	{+2,+1,-3,0,+10,-20,+10,"Warrior"},//war
	{-2,0,+2,0,-10,+20,-10,"Mage"},//mag
	{+1,+2,-3,+5,0,0,+10,"Ranger"},//rang
	{-2,+4,-2,+10,-20,0,+20,"Rogue"},//rog
	{0,0,0,0,0,0,0,"Adventurer"}//adv
	};

	Player plr;
	int x = -1;
	int y = 0;
	int increment = 0;
	int reader = (sizeof(c_stats)/sizeof(*c_stats));
	std::string rtxt = "	SELECT YOUR RACE\n\n";
	std::string ctxt = "	SELECT YOUR CLASS\n\n";;

	plr.setName();
	
	while (x == -1) {
		reader = (sizeof(r_stats) / sizeof(*r_stats));
		increment = 0;
			
		system("cls");	
	
		std::cout << rtxt;
			do
			{
				if (increment == y)
					std::cout << "-->	" << r_stats[increment].desc << "\n	str: " << plr.readStr() + r_stats[increment].str << "	dex: " << plr.readDex() + r_stats[increment].dex << "	int: " << plr.readInt() + r_stats[increment].int_ << "	speed: " << plr.readSpd() + r_stats[increment].speed << "\n	Health: " << plr.readHp() + r_stats[increment].hp << "	Mana: " << plr.readMp() + r_stats[increment].mp << "	Stamina: " << plr.readSp() + r_stats[increment].sp << "\n\n";
				else
					std::cout << "	" << r_stats[increment].desc << "\n	str: " << plr.readStr() + r_stats[increment].str << "	dex: " << plr.readDex() + r_stats[increment].dex << "	int: " << plr.readInt() + r_stats[increment].int_ << "	speed: " << plr.readSpd() + r_stats[increment].speed << "\n	Health: " << plr.readHp() + r_stats[increment].hp << "	Mana: " << plr.readMp() + r_stats[increment].mp << "	Stamina: " << plr.readSp() + r_stats[increment].sp << "\n\n";
					++increment;
			} while (increment < reader);
			y = Selection((sizeof(r_stats) / sizeof(*r_stats))-1, y, x);
			Sleep(100);
	}

	plr.setRace((Race)x);
	x = -1;
	y = 0;
	while (x == -1) {
		reader = (sizeof(c_stats) / sizeof(*c_stats));
		increment = 0;

		system("cls");

		std::cout << ctxt;
		do
		{
			if (increment == y)
				std::cout << "-->	" << c_stats[increment].desc << "\n	str: " << plr.readStr() + c_stats[increment].str << "	dex: " << plr.readDex() + c_stats[increment].dex << "	int: " << plr.readInt() + c_stats[increment].int_ << "	speed: " << plr.readSpd() + c_stats[increment].speed << "\n	Health: " << plr.readHp() + c_stats[increment].hp << "	Mana: " << plr.readMp() + c_stats[increment].mp << "	Stamina: " << plr.readSp() + c_stats[increment].sp << "\n\n";
			else
				std::cout << "	" << c_stats[increment].desc << "\n	str: " << plr.readStr() + c_stats[increment].str << "	dex: " << plr.readDex() + c_stats[increment].dex << "	int: " << plr.readInt() + c_stats[increment].int_ << "	speed: " << plr.readSpd() + c_stats[increment].speed << "\n	Health: " << plr.readHp() + c_stats[increment].hp << "	Mana: " << plr.readMp() + c_stats[increment].mp << "	Stamina: " << plr.readSp() + c_stats[increment].sp << "\n\n";
			++increment;
		} while (increment < reader);
		y = Selection((sizeof(c_stats) / sizeof(*c_stats)) - 1, y, x);
		Sleep(100);
	}
	plr.setClass((Class)x);
	plr.readStats();
	system("pause");
	}
