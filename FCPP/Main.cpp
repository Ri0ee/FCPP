#include "UI.h"
#include "Game.h"


#include <iostream>

int main()
{
	UI_class* UI = new UI_class();
	Game_class* Game = new Game_class(UI);

	Game->Start();

	delete Game;
	delete UI;

	
	return 0;
}
