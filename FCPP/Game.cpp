#include "Game.h"

#include <iostream>

Game_class::Game_class(UI_class* UI)
{
	m_UI = UI;
}

Game_class::~Game_class()
{

}
	
void Game_class::Start()
{
	m_Score = 0;
	m_TimePlayed = 0;

	bool finished = false;

	while (!finished)
	{

	}
}