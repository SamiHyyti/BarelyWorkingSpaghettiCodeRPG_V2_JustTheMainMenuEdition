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

	plr.setName();
	system("cls");
	std::cout << "	SELECT YOUR RACE\n\n" <<
		"-->	Human\n	str: " << plr.readStr() + r_stats[Human].str << "	dex: " << plr.readDex() + r_stats[Human].dex << "	int: " << plr.readInt() + r_stats[Human].int_ << "	speed: " << plr.readSpd() + r_stats[Human].speed << "\n	Health: " << plr.readHp() + r_stats[Human].hp << "	Mana: " << plr.readMp() + r_stats[Human].mp << "	Stamina: " << plr.readSp() + r_stats[Human].sp << "\n\n" <<
		"	Elf\n	str: " << plr.readStr() + r_stats[Elf].str << "	dex: " << plr.readDex() + r_stats[Elf].dex << "	int: " << plr.readInt() + r_stats[Elf].int_ << "	speed: " << plr.readSpd() + r_stats[Elf].speed << "\n	Health: " << plr.readHp() + r_stats[Elf].hp << "	Mana: " << plr.readMp() + r_stats[Elf].mp << "	Stamina: " << plr.readSp() + r_stats[Elf].sp << "\n\n" <<
		"	Halfling\n	str: " << plr.readStr() + r_stats[Halfling].str << "	dex: " << plr.readDex() + r_stats[Halfling].dex << "	int: " << plr.readInt() + r_stats[Halfling].int_ << "	speed: " << plr.readSpd() + r_stats[Halfling].speed << "\n	Health: " << plr.readHp() + r_stats[Halfling].hp << "	Mana: " << plr.readMp() + r_stats[Halfling].mp << "	Stamina: " << plr.readSp() + r_stats[Halfling].sp << "\n\n" <<
		"	Dwarf\n	str: " << plr.readStr() + r_stats[Dwarf].str << "	dex: " << plr.readDex() + r_stats[Dwarf].dex << "	int: " << plr.readInt() + r_stats[Dwarf].int_ << "	speed: " << plr.readSpd() + r_stats[Dwarf].speed << "\n	Health: " << plr.readHp() + r_stats[Dwarf].hp << "	Mana: " << plr.readMp() + r_stats[Dwarf].mp << "	Stamina: " << plr.readSp() + r_stats[Dwarf].sp << std::endl;
	while (x == -1) {
		y = Selection(3,y,x);
		Sleep(100);
		if (y == Human) {
			system("cls");
			std::cout << "	SELECT YOUR RACE\n\n" <<
				"-->	Human\n	str: " << plr.readStr() + r_stats[Human].str << "	dex: " << plr.readDex() + r_stats[Human].dex << "	int: " << plr.readInt() + r_stats[Human].int_ << "	speed: " << plr.readSpd() + r_stats[Human].speed << "\n	Health: " << plr.readHp() + r_stats[Human].hp << "	Mana: " << plr.readMp() + r_stats[Human].mp << "	Stamina: " << plr.readSp() + r_stats[Human].sp << "\n\n" <<
				"	Elf\n	str: " << plr.readStr() + r_stats[Elf].str << "	dex: " << plr.readDex() + r_stats[Elf].dex << "	int: " << plr.readInt() + r_stats[Elf].int_ << "	speed: " << plr.readSpd() + r_stats[Elf].speed << "\n	Health: " << plr.readHp() + r_stats[Elf].hp << "	Mana: " << plr.readMp() + r_stats[Elf].mp << "	Stamina: " << plr.readSp() + r_stats[Elf].sp << "\n\n" <<
				"	Halfling\n	str: " << plr.readStr() + r_stats[Halfling].str << "	dex: " << plr.readDex() + r_stats[Halfling].dex << "	int: " << plr.readInt() + r_stats[Halfling].int_ << "	speed: " << plr.readSpd() + r_stats[Halfling].speed << "\n	Health: " << plr.readHp() + r_stats[Halfling].hp << "	Mana: " << plr.readMp() + r_stats[Halfling].mp << "	Stamina: " << plr.readSp() + r_stats[Halfling].sp << "\n\n" <<
				"	Dwarf\n	str: " << plr.readStr() + r_stats[Dwarf].str << "	dex: " << plr.readDex() + r_stats[Dwarf].dex << "	int: " << plr.readInt() + r_stats[Dwarf].int_ << "	speed: " << plr.readSpd() + r_stats[Dwarf].speed << "\n	Health: " << plr.readHp() + r_stats[Dwarf].hp << "	Mana: " << plr.readMp() + r_stats[Dwarf].mp << "	Stamina: " << plr.readSp() + r_stats[Dwarf].sp << std::endl;
		}
		else if (y == Elf) {
			system("cls");
			std::cout << "	SELECT YOUR RACE\n\n" <<
				"	Human\n	str: " << plr.readStr() + r_stats[Human].str << "	dex: " << plr.readDex() + r_stats[Human].dex << "	int: " << plr.readInt() + r_stats[Human].int_ << "	speed: " << plr.readSpd() + r_stats[Human].speed << "\n	Health: " << plr.readHp() + r_stats[Human].hp << "	Mana: " << plr.readMp() + r_stats[Human].mp << "	Stamina: " << plr.readSp() + r_stats[Human].sp << "\n\n" <<
				"-->	Elf\n	str: " << plr.readStr() + r_stats[Elf].str << "	dex: " << plr.readDex() + r_stats[Elf].dex << "	int: " << plr.readInt() + r_stats[Elf].int_ << "	speed: " << plr.readSpd() + r_stats[Elf].speed << "\n	Health: " << plr.readHp() + r_stats[Elf].hp << "	Mana: " << plr.readMp() + r_stats[Elf].mp << "	Stamina: " << plr.readSp() + r_stats[Elf].sp << "\n\n" <<
				"	Halfling\n	str: " << plr.readStr() + r_stats[Halfling].str << "	dex: " << plr.readDex() + r_stats[Halfling].dex << "	int: " << plr.readInt() + r_stats[Halfling].int_ << "	speed: " << plr.readSpd() + r_stats[Halfling].speed << "\n	Health: " << plr.readHp() + r_stats[Halfling].hp << "	Mana: " << plr.readMp() + r_stats[Halfling].mp << "	Stamina: " << plr.readSp() + r_stats[Halfling].sp << "\n\n" <<
				"	Dwarf\n	str: " << plr.readStr() + r_stats[Dwarf].str << "	dex: " << plr.readDex() + r_stats[Dwarf].dex << "	int: " << plr.readInt() + r_stats[Dwarf].int_ << "	speed: " << plr.readSpd() + r_stats[Dwarf].speed << "\n	Health: " << plr.readHp() + r_stats[Dwarf].hp << "	Mana: " << plr.readMp() + r_stats[Dwarf].mp << "	Stamina: " << plr.readSp() + r_stats[Dwarf].sp << std::endl;
		}
		else if (y == Halfling) {
			system("cls");
			std::cout << "	SELECT YOUR RACE\n\n" <<
				"	Human\n	str: " << plr.readStr() + r_stats[Human].str << "	dex: " << plr.readDex() + r_stats[Human].dex << "	int: " << plr.readInt() + r_stats[Human].int_ << "	speed: " << plr.readSpd() + r_stats[Human].speed << "\n	Health: " << plr.readHp() + r_stats[Human].hp << "	Mana: " << plr.readMp() + r_stats[Human].mp << "	Stamina: " << plr.readSp() + r_stats[Human].sp << "\n\n" <<
				"	Elf\n	str: " << plr.readStr() + r_stats[Elf].str << "	dex: " << plr.readDex() + r_stats[Elf].dex << "	int: " << plr.readInt() + r_stats[Elf].int_ << "	speed: " << plr.readSpd() + r_stats[Elf].speed << "\n	Health: " << plr.readHp() + r_stats[Elf].hp << "	Mana: " << plr.readMp() + r_stats[Elf].mp << "	Stamina: " << plr.readSp() + r_stats[Elf].sp << "\n\n" <<
				"-->	Halfling\n	str: " << plr.readStr() + r_stats[Halfling].str << "	dex: " << plr.readDex() + r_stats[Halfling].dex << "	int: " << plr.readInt() + r_stats[Halfling].int_ << "	speed: " << plr.readSpd() + r_stats[Halfling].speed << "\n	Health: " << plr.readHp() + r_stats[Halfling].hp << "	Mana: " << plr.readMp() + r_stats[Halfling].mp << "	Stamina: " << plr.readSp() + r_stats[Halfling].sp << "\n\n" <<
				"	Dwarf\n	str: " << plr.readStr() + r_stats[Dwarf].str << "	dex: " << plr.readDex() + r_stats[Dwarf].dex << "	int: " << plr.readInt() + r_stats[Dwarf].int_ << "	speed: " << plr.readSpd() + r_stats[Dwarf].speed << "\n	Health: " << plr.readHp() + r_stats[Dwarf].hp << "	Mana: " << plr.readMp() + r_stats[Dwarf].mp << "	Stamina: " << plr.readSp() + r_stats[Dwarf].sp << std::endl;
			}
		else if (y == Dwarf) {
			system("cls");
			std::cout << "	SELECT YOUR RACE\n\n" <<
				"	Human\n	str: " << plr.readStr() + r_stats[Human].str << "	dex: " << plr.readDex() + r_stats[Human].dex << "	int: " << plr.readInt() + r_stats[Human].int_ << "	speed: " << plr.readSpd() + r_stats[Human].speed << "\n	Health: " << plr.readHp() + r_stats[Human].hp << "	Mana: " << plr.readMp() + r_stats[Human].mp << "	Stamina: " << plr.readSp() + r_stats[Human].sp << "\n\n" <<
				"	Elf\n	str: " << plr.readStr() + r_stats[Elf].str << "	dex: " << plr.readDex() + r_stats[Elf].dex << "	int: " << plr.readInt() + r_stats[Elf].int_ << "	speed: " << plr.readSpd() + r_stats[Elf].speed << "\n	Health: " << plr.readHp() + r_stats[Elf].hp << "	Mana: " << plr.readMp() + r_stats[Elf].mp << "	Stamina: " << plr.readSp() + r_stats[Elf].sp << "\n\n" <<
				"	Halfling\n	str: " << plr.readStr() + r_stats[Halfling].str << "	dex: " << plr.readDex() + r_stats[Halfling].dex << "	int: " << plr.readInt() + r_stats[Halfling].int_ << "	speed: " << plr.readSpd() + r_stats[Halfling].speed << "\n	Health: " << plr.readHp() + r_stats[Halfling].hp << "	Mana: " << plr.readMp() + r_stats[Halfling].mp << "	Stamina: " << plr.readSp() + r_stats[Halfling].sp << "\n\n" <<
				"-->	Dwarf\n	str: " << plr.readStr() + r_stats[Dwarf].str << "	dex: " << plr.readDex() + r_stats[Dwarf].dex << "	int: " << plr.readInt() + r_stats[Dwarf].int_ << "	speed: " << plr.readSpd() + r_stats[Dwarf].speed << "\n	Health: " << plr.readHp() + r_stats[Dwarf].hp << "	Mana: " << plr.readMp() + r_stats[Dwarf].mp << "	Stamina: " << plr.readSp() + r_stats[Dwarf].sp << std::endl;
			}
		}
	plr.setRace((Race)x);
	x = -1;
	y = 0;
	system("cls");
	std::cout << "	SELECT YOUR CLASS\n\n" <<
		"-->	Warrior\n	str: " << plr.readStr() + c_stats[Warrior].str << "	dex: " << plr.readDex() + c_stats[Warrior].dex << "	int : " << plr.readInt() + c_stats[Warrior].int_ << "	speed: " << plr.readSpd() + c_stats[Warrior].speed << "\n	Health: " << plr.readHp() + c_stats[Warrior].hp << "	Mana: " << plr.readMp() + c_stats[Warrior].mp << "	Stamina: " << plr.readSp() + c_stats[Warrior].sp << "\n\n" <<
		"	Mage\n	str: " << plr.readStr() + c_stats[Mage].str << "	dex: " << plr.readDex() + c_stats[Mage].dex << "	int : " << plr.readInt() + c_stats[Mage].int_ << "	speed: " << plr.readSpd() + c_stats[Mage].speed << "\n	Health: " << plr.readHp() + c_stats[Mage].hp << "	Mana: " << plr.readMp() + c_stats[Mage].mp << "	Stamina: " << plr.readSp() + c_stats[Mage].sp << "\n\n" <<
		"	Ranger\n	str: " << plr.readStr() + c_stats[Ranger].str << "	dex: " << plr.readDex() + c_stats[Ranger].dex << "	int : " << plr.readInt() + c_stats[Ranger].int_ << "	speed: " << plr.readSpd() + c_stats[Ranger].speed << "\n	Health: " << plr.readHp() + c_stats[Ranger].hp << "	Mana: " << plr.readMp() + c_stats[Ranger].mp << "	Stamina: " << plr.readSp() + c_stats[Ranger].sp << "\n\n" <<
		"	Rogue\n	str: " << plr.readStr() + c_stats[Rogue].str << "	dex: " << plr.readDex() + c_stats[Rogue].dex << "	int : " << plr.readInt() + c_stats[Rogue].int_ << "	speed: " << plr.readSpd() + c_stats[Rogue].speed << "\n	Health: " << plr.readHp() + c_stats[Rogue].hp << "	Mana: " << plr.readMp() + c_stats[Rogue].mp << "	Stamina: " << plr.readSp() + c_stats[Rogue].sp << "\n\n" <<
		"	Adventurer\n	str: " << plr.readStr() + c_stats[Adventurer].str << "	dex: " << plr.readDex() + c_stats[Adventurer].dex << "	int : " << plr.readInt() + c_stats[Adventurer].int_ << "	speed: " << plr.readSpd() + c_stats[Adventurer].speed << "\n	Health: " << plr.readHp() + c_stats[Adventurer].hp << "	Mana: " << plr.readMp() + c_stats[Adventurer].mp << "	Stamina: " << plr.readSp() + c_stats[Adventurer].sp << std::endl;
	while (x == -1) {
		y = Selection(4, y, x);
		Sleep(100);
		if (y == Warrior) {
			system("cls");
			std::cout << "	SELECT YOUR CLASS\n\n" <<
				"-->	Warrior\n	str: " << plr.readStr() + c_stats[Warrior].str << "	dex: " << plr.readDex() + c_stats[Warrior].dex << "	int : " << plr.readInt() + c_stats[Warrior].int_ << "	speed: " << plr.readSpd() + c_stats[Warrior].speed << "\n	Health: " << plr.readHp() + c_stats[Warrior].hp << "	Mana: " << plr.readMp() + c_stats[Warrior].mp << "	Stamina: " << plr.readSp() + c_stats[Warrior].sp << "\n\n" <<
				"	Mage\n	str: " << plr.readStr() + c_stats[Mage].str << "	dex: " << plr.readDex() + c_stats[Mage].dex << "	int : " << plr.readInt() + c_stats[Mage].int_ << "	speed: " << plr.readSpd() + c_stats[Mage].speed << "\n	Health: " << plr.readHp() + c_stats[Mage].hp << "	Mana: " << plr.readMp() + c_stats[Mage].mp << "	Stamina: " << plr.readSp() + c_stats[Mage].sp << "\n\n" <<
				"	Ranger\n	str: " << plr.readStr() + c_stats[Ranger].str << "	dex: " << plr.readDex() + c_stats[Ranger].dex << "	int : " << plr.readInt() + c_stats[Ranger].int_ << "	speed: " << plr.readSpd() + c_stats[Ranger].speed << "\n	Health: " << plr.readHp() + c_stats[Ranger].hp << "	Mana: " << plr.readMp() + c_stats[Ranger].mp << "	Stamina: " << plr.readSp() + c_stats[Ranger].sp << "\n\n" <<
				"	Rogue\n	str: " << plr.readStr() + c_stats[Rogue].str << "	dex: " << plr.readDex() + c_stats[Rogue].dex << "	int : " << plr.readInt() + c_stats[Rogue].int_ << "	speed: " << plr.readSpd() + c_stats[Rogue].speed << "\n	Health: " << plr.readHp() + c_stats[Rogue].hp << "	Mana: " << plr.readMp() + c_stats[Rogue].mp << "	Stamina: " << plr.readSp() + c_stats[Rogue].sp << "\n\n" <<
				"	Adventurer\n	str: " << plr.readStr() + c_stats[Adventurer].str << "	dex: " << plr.readDex() + c_stats[Adventurer].dex << "	int : " << plr.readInt() + c_stats[Adventurer].int_ << "	speed: " << plr.readSpd() + c_stats[Adventurer].speed << "\n	Health: " << plr.readHp() + c_stats[Adventurer].hp << "	Mana: " << plr.readMp() + c_stats[Adventurer].mp << "	Stamina: " << plr.readSp() + c_stats[Adventurer].sp << std::endl;
		}
		else if (y == Mage) {
			system("cls");
			std::cout << "	SELECT YOUR CLASS\n\n" <<
				"	Warrior\n	str: " << plr.readStr() + c_stats[Warrior].str << "	dex: " << plr.readDex() + c_stats[Warrior].dex << "	int : " << plr.readInt() + c_stats[Warrior].int_ << "	speed: " << plr.readSpd() + c_stats[Warrior].speed << "\n	Health: " << plr.readHp() + c_stats[Warrior].hp << "	Mana: " << plr.readMp() + c_stats[Warrior].mp << "	Stamina: " << plr.readSp() + c_stats[Warrior].sp << "\n\n" <<
				"-->	Mage\n	str: " << plr.readStr() + c_stats[Mage].str << "	dex: " << plr.readDex() + c_stats[Mage].dex << "	int : " << plr.readInt() + c_stats[Mage].int_ << "	speed: " << plr.readSpd() + c_stats[Mage].speed << "\n	Health: " << plr.readHp() + c_stats[Mage].hp << "	Mana: " << plr.readMp() + c_stats[Mage].mp << "	Stamina: " << plr.readSp() + c_stats[Mage].sp << "\n\n" <<
				"	Ranger\n	str: " << plr.readStr() + c_stats[Ranger].str << "	dex: " << plr.readDex() + c_stats[Ranger].dex << "	int : " << plr.readInt() + c_stats[Ranger].int_ << "	speed: " << plr.readSpd() + c_stats[Ranger].speed << "\n	Health: " << plr.readHp() + c_stats[Ranger].hp << "	Mana: " << plr.readMp() + c_stats[Ranger].mp << "	Stamina: " << plr.readSp() + c_stats[Ranger].sp << "\n\n" <<
				"	Rogue\n	str: " << plr.readStr() + c_stats[Rogue].str << "	dex: " << plr.readDex() + c_stats[Rogue].dex << "	int : " << plr.readInt() + c_stats[Rogue].int_ << "	speed: " << plr.readSpd() + c_stats[Rogue].speed << "\n	Health: " << plr.readHp() + c_stats[Rogue].hp << "	Mana: " << plr.readMp() + c_stats[Rogue].mp << "	Stamina: " << plr.readSp() + c_stats[Rogue].sp << "\n\n" <<
				"	Adventurer\n	str: " << plr.readStr() + c_stats[Adventurer].str << "	dex: " << plr.readDex() + c_stats[Adventurer].dex << "	int : " << plr.readInt() + c_stats[Adventurer].int_ << "	speed: " << plr.readSpd() + c_stats[Adventurer].speed << "\n	Health: " << plr.readHp() + c_stats[Adventurer].hp << "	Mana: " << plr.readMp() + c_stats[Adventurer].mp << "	Stamina: " << plr.readSp() + c_stats[Adventurer].sp << std::endl;
		}
		else if (y == Ranger) {
			system("cls");
			std::cout << "	SELECT YOUR CLASS\n\n" <<
				"	Warrior\n	str: " << plr.readStr() + c_stats[Warrior].str << "	dex: " << plr.readDex() + c_stats[Warrior].dex << "	int : " << plr.readInt() + c_stats[Warrior].int_ << "	speed: " << plr.readSpd() + c_stats[Warrior].speed << "\n	Health: " << plr.readHp() + c_stats[Warrior].hp << "	Mana: " << plr.readMp() + c_stats[Warrior].mp << "	Stamina: " << plr.readSp() + c_stats[Warrior].sp << "\n\n" <<
				"	Mage\n	str: " << plr.readStr() + c_stats[Mage].str << "	dex: " << plr.readDex() + c_stats[Mage].dex << "	int : " << plr.readInt() + c_stats[Mage].int_ << "	speed: " << plr.readSpd() + c_stats[Mage].speed << "\n	Health: " << plr.readHp() + c_stats[Mage].hp << "	Mana: " << plr.readMp() + c_stats[Mage].mp << "	Stamina: " << plr.readSp() + c_stats[Mage].sp << "\n\n" <<
				"-->	Ranger\n	str: " << plr.readStr() + c_stats[Ranger].str << "	dex: " << plr.readDex() + c_stats[Ranger].dex << "	int : " << plr.readInt() + c_stats[Ranger].int_ << "	speed: " << plr.readSpd() + c_stats[Ranger].speed << "\n	Health: " << plr.readHp() + c_stats[Ranger].hp << "	Mana: " << plr.readMp() + c_stats[Ranger].mp << "	Stamina: " << plr.readSp() + c_stats[Ranger].sp << "\n\n" <<
				"	Rogue\n	str: " << plr.readStr() + c_stats[Rogue].str << "	dex: " << plr.readDex() + c_stats[Rogue].dex << "	int : " << plr.readInt() + c_stats[Rogue].int_ << "	speed: " << plr.readSpd() + c_stats[Rogue].speed << "\n	Health: " << plr.readHp() + c_stats[Rogue].hp << "	Mana: " << plr.readMp() + c_stats[Rogue].mp << "	Stamina: " << plr.readSp() + c_stats[Rogue].sp << "\n\n" <<
				"	Adventurer\n	str: " << plr.readStr() + c_stats[Adventurer].str << "	dex: " << plr.readDex() + c_stats[Adventurer].dex << "	int : " << plr.readInt() + c_stats[Adventurer].int_ << "	speed: " << plr.readSpd() + c_stats[Adventurer].speed << "\n	Health: " << plr.readHp() + c_stats[Adventurer].hp << "	Mana: " << plr.readMp() + c_stats[Adventurer].mp << "	Stamina: " << plr.readSp() + c_stats[Adventurer].sp << std::endl;
		}
		else if (y == Rogue) {
			system("cls");
			std::cout << "	SELECT YOUR CLASS\n\n" <<
				"	Warrior\n	str: " << plr.readStr() + c_stats[Warrior].str << "	dex: " << plr.readDex() + c_stats[Warrior].dex << "	int : " << plr.readInt() + c_stats[Warrior].int_ << "	speed: " << plr.readSpd() + c_stats[Warrior].speed << "\n	Health: " << plr.readHp() + c_stats[Warrior].hp << "	Mana: " << plr.readMp() + c_stats[Warrior].mp << "	Stamina: " << plr.readSp() + c_stats[Warrior].sp << "\n\n" <<
				"	Mage\n	str: " << plr.readStr() + c_stats[Mage].str << "	dex: " << plr.readDex() + c_stats[Mage].dex << "	int : " << plr.readInt() + c_stats[Mage].int_ << "	speed: " << plr.readSpd() + c_stats[Mage].speed << "\n	Health: " << plr.readHp() + c_stats[Mage].hp << "	Mana: " << plr.readMp() + c_stats[Mage].mp << "	Stamina: " << plr.readSp() + c_stats[Mage].sp << "\n\n" <<
				"	Ranger\n	str: " << plr.readStr() + c_stats[Ranger].str << "	dex: " << plr.readDex() + c_stats[Ranger].dex << "	int : " << plr.readInt() + c_stats[Ranger].int_ << "	speed: " << plr.readSpd() + c_stats[Ranger].speed << "\n	Health: " << plr.readHp() + c_stats[Ranger].hp << "	Mana: " << plr.readMp() + c_stats[Ranger].mp << "	Stamina: " << plr.readSp() + c_stats[Ranger].sp << "\n\n" <<
				"-->	Rogue\n	str: " << plr.readStr() + c_stats[Rogue].str << "	dex: " << plr.readDex() + c_stats[Rogue].dex << "	int : " << plr.readInt() + c_stats[Rogue].int_ << "	speed: " << plr.readSpd() + c_stats[Rogue].speed << "\n	Health: " << plr.readHp() + c_stats[Rogue].hp << "	Mana: " << plr.readMp() + c_stats[Rogue].mp << "	Stamina: " << plr.readSp() + c_stats[Rogue].sp << "\n\n" <<
				"	Adventurer\n	str: " << plr.readStr() + c_stats[Adventurer].str << "	dex: " << plr.readDex() + c_stats[Adventurer].dex << "	int : " << plr.readInt() + c_stats[Adventurer].int_ << "	speed: " << plr.readSpd() + c_stats[Adventurer].speed << "\n	Health: " << plr.readHp() + c_stats[Adventurer].hp << "	Mana: " << plr.readMp() + c_stats[Adventurer].mp << "	Stamina: " << plr.readSp() + c_stats[Adventurer].sp << std::endl;
		}
		else if (y == Adventurer) {
			system("cls");
			std::cout << "	SELECT YOUR CLASS\n\n" <<
				"	Warrior\n	str: " << plr.readStr() + c_stats[Warrior].str << "	dex: " << plr.readDex() + c_stats[Warrior].dex << "	int : " << plr.readInt() + c_stats[Warrior].int_ << "	speed: " << plr.readSpd() + c_stats[Warrior].speed << "\n	Health: " << plr.readHp() + c_stats[Warrior].hp << "	Mana: " << plr.readMp() + c_stats[Warrior].mp << "	Stamina: " << plr.readSp() + c_stats[Warrior].sp << "\n\n" <<
				"	Mage\n	str: " << plr.readStr() + c_stats[Mage].str << "	dex: " << plr.readDex() + c_stats[Mage].dex << "	int : " << plr.readInt() + c_stats[Mage].int_ << "	speed: " << plr.readSpd() + c_stats[Mage].speed << "\n	Health: " << plr.readHp() + c_stats[Mage].hp << "	Mana: " << plr.readMp() + c_stats[Mage].mp << "	Stamina: " << plr.readSp() + c_stats[Mage].sp << "\n\n" <<
				"	Ranger\n	str: " << plr.readStr() + c_stats[Ranger].str << "	dex: " << plr.readDex() + c_stats[Ranger].dex << "	int : " << plr.readInt() + c_stats[Ranger].int_ << "	speed: " << plr.readSpd() + c_stats[Ranger].speed << "\n	Health: " << plr.readHp() + c_stats[Ranger].hp << "	Mana: " << plr.readMp() + c_stats[Ranger].mp << "	Stamina: " << plr.readSp() + c_stats[Ranger].sp << "\n\n" <<
				"	Rogue\n	str: " << plr.readStr() + c_stats[Rogue].str << "	dex: " << plr.readDex() + c_stats[Rogue].dex << "	int : " << plr.readInt() + c_stats[Rogue].int_ << "	speed: " << plr.readSpd() + c_stats[Rogue].speed << "\n	Health: " << plr.readHp() + c_stats[Rogue].hp << "	Mana: " << plr.readMp() + c_stats[Rogue].mp << "	Stamina: " << plr.readSp() + c_stats[Rogue].sp << "\n\n" <<
				"-->	Adventurer\n	str: " << plr.readStr() + c_stats[Adventurer].str << "	dex: " << plr.readDex() + c_stats[Adventurer].dex << "	int : " << plr.readInt() + c_stats[Adventurer].int_ << "	speed: " << plr.readSpd() + c_stats[Adventurer].speed << "\n	Health: " << plr.readHp() + c_stats[Adventurer].hp << "	Mana: " << plr.readMp() + c_stats[Adventurer].mp << "	Stamina: " << plr.readSp() + c_stats[Adventurer].sp << std::endl;
		}
	}
	plr.setClass((Class)x);
	plr.readStats();
	system("pause");
	}
