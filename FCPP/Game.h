#pragma once

#include "UI.h"

class Game_class
{
public:
	Game_class(UI_class* UI);
	~Game_class();

	// Methodes here
	void Start();

	// Variables here
	int m_Score;
	int m_TimePlayed;

private:
	// Don't touch this shit
	UI_class* m_UI;
};