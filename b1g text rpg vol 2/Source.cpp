#include "menu.h"
#include "includes.h"
#include "savesystem.h"
#include "player.h"
#include "creation.h"
int main()
{
	Player plr;
	switch (mainMenu()) {
	case 0:
		createPlayer();
		//saveGame();
		//plr.saveGame();
		return 0;
	case 1:
		//loadGame();
		//plr.loadGame();
		gameMenu();
		return 1;
	case 2:
		return 2;
	}
	return 3;
}