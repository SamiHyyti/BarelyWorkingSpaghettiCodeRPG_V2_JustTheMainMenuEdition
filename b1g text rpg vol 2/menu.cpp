#include "includes.h"
#include "player.h"

int Selection(int menuSize, int &selectionArrow, int &selection) { // menu size, menu selector, switch selection
	int i = 0;
	while (i != 1) {
		if ((GetAsyncKeyState(VK_UP) & 0x8000) != 0) {
			--selectionArrow;
			i = 1;
			if (selectionArrow < 0)
				selectionArrow = menuSize;
		}
		if ((GetAsyncKeyState(VK_DOWN) & 0x8000) != 0)  {
			++selectionArrow;
			i = 1;
			if (selectionArrow > menuSize)
				selectionArrow = 0;
		}
		if ((GetAsyncKeyState(VK_ENTER) & 0x8000) != 0)  {
			i = 1;
			std::cin.clear();
			std::cin.ignore(10, '\n');
			selection = selectionArrow;
		}
	}
	return selectionArrow;
}

int mainMenu() {
	std::cout << "NEW GAME <--\nLOAD GAME\nEXIT\n";
	int x = -1;
	int y = 0;
	while (x == -1)
	{
		y = Selection(2,y,x);
		Sleep(100);
		if (y == 0) {
			system("cls");
			std::cout <<
				"NEW GAME <--\nLOAD GAME\nEXIT\n";
		}
		else if (y == 1) {
			system("cls");
			std::cout << "NEW GAME\nLOAD GAME <--\nEXIT\n";
		}
		else if (y == 2) {
			system("cls");
			std::cout << "NEW GAME\nLOAD GAME\nEXIT <--\n";
		}
	}
		return x;
}

void gameMenu() {
	Player pl;
	pl.readStats();
	system("pause");
}