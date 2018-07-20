#include "UI.h"
#include "Game.h"
#include "Windows.h"
#include <iostream>

int main()
{
	Game_class* Game = new Game_class(10);
	delete Game;



	system("pause");
	return 0;
}