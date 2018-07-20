#include "UI.h"
#include "Game.h"

#include <iostream>

int main()
{
	Game_class* Game = new Game_class();
	Game->Start();
	delete Game;

	return 0;
}