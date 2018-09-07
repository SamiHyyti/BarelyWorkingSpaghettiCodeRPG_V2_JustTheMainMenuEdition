#include "player.h"
#include "structs.h"


void Player::setName() {
	system("cls");
	std::cout << "Name your character: ";
	getline(std::cin >> std::ws, name_);
	Sleep(100);
}
void Player::setStats(int s, int d, int i, int spd, int hpm, int mpm, int spm) {
	str_ += s;
	dex_ += d;
	int_ += i;
	speed += spd;
	hpmax += hpm;
	hp = (float)hpmax;
	mpmax += mpm;
	mp = (float)mpmax;
	spmax += spm;
	sp = (float)spmax;
}
void Player::setRace(Race x) {
	modifier race_stats[4]{
	{0,0,0,0,0,0,0,"Human" },//Hu
	{-2,+1,+2,+5,-25,+50,0,"Elf" },//El
	{-3,+4,-1,+15,-50,-50,+50,"Halfling" },//Ha
	{+2,-2,-2,-5,+50,-80,+75,"Dwarf" }//Dwa
};
	setStats(race_stats[x].str, race_stats[x].dex, race_stats[x].int_, race_stats[x].speed, race_stats[x].hp, race_stats[x].mp, race_stats[x].sp);
	race_ = race_stats[x].desc;
}
void Player::setClass(Class x){
	modifier class_stats[5]{
	{+2,+1,-3,0,+10,-20,+10,"Warrior"},//war
	{-2,0,+2,0,-10,+20,-10,"Mage"},//mag
	{+1,+2,-3,+5,0,0,+10,"Ranger"},//rang
	{-2,+4,-2,+10,-20,0,+20,"Rogue"},//rog
	{0,0,0,0,0,0,0,"Adventurer"}//adv
};
	setStats(class_stats[x].str, class_stats[x].dex, class_stats[x].int_, class_stats[x].speed, class_stats[x].hp, class_stats[x].mp, class_stats[x].sp);
	class_ = class_stats[x].desc;
}
bool Player::isAlive(){
	if (hp >= 0) {
		return true;
	}
	else
		return false;
}

void Player::readStats() {
	std::cout << name_ << " The " << race_ << " " << class_ << "\n\n";
	std::cout << "Health: " << hp << "/" << hpmax << std::endl;
	std::cout << "STR: " << str_ << std::endl; 
}
