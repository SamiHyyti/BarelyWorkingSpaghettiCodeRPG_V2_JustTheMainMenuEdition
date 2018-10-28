#pragma once

#include "includes.h"

enum Race
{
	Human,
	Elf,
	Halfling,
	Dwarf,
};

enum Class
{
	Warrior,
	Mage,
	Ranger,
	Rogue,
	Adventurer,
};

class Player
{
protected:
	std::string name_;
	std::string race_;
	std::string class_;
	int str_ = 5;
	int dex_ = 5;
	int int_ = 5;
	int speed = 100;
	float hp = 100;
	int hpmax = 100;
	float mp = 100;
	int mpmax = 100;
	float sp = 100;
	int spmax = 100;
	int armor = 0;
	
public:
	void setStats(int s, int d, int i, int spd, int hpm, int mpm, int spm);
	void setName();
	void setRace(Race x);
	void setClass(Class x);
	void readStats();
	bool isAlive();
	std::string readN() { return name_; }
	std::string readR() { return race_; }
	std::string readC() { return class_; }
	int readStr() { return str_; }
	int readDex() { return dex_; }
	int readInt() { return int_; }
	int readSpd() { return speed; }
	float readH() { return hp; }
	int readHp() { return hpmax; }
	float readM() { return mp; }
	int readMp() { return mpmax; }
	float readS() { return sp; }
	int readSp() { return spmax; }

};

class Warrior : public Player
{
private:
	int xp = 0;
	int xptolvl = 50;
	int lvl = 1;
public:
	
};