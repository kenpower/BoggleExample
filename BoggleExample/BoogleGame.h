#pragma once
#include"Grid.h"

class BoogleGame
{
	Grid grid;
	int frameCounter{0};
	bool gameContinues();
	void render();
	void update();

public:
	void play();
};

