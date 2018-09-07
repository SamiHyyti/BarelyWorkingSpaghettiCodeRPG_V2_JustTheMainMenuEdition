#include "savesystem.h"
#include "includes.h"
#include "player.h"
/*
void saveGame()
{
	std::ofstream outfile("SAVE.bin");
	const Player plr;
	boost::archive::binary_oarchive oa(outfile,std::ios::binary);
	oa << plr;
	outfile.close();
}

void loadGame()
{
	Player plr;
	std::ifstream infile("SAVE.bin");
	boost::archive::binary_iarchive ia(infile, std::ios::binary);
	ia >> plr;
	infile.close();
}*/