#include<sstream>
#include<string>
#include "BoogleGame.h"
#include"GameRenderer.h"
#include"GridRenderer.h"

bool BoogleGame::gameContinues()
{
	return true;
}

void BoogleGame::render()
{
	std::string gridAsString = GridRenderer::render(grid);

	std::ostringstream output;

	output << std::string("Frame number: ") << frameCounter << "\n";
	output << gridAsString;

	GameRenderer::display(output.str());
}

void BoogleGame::update()
{
	frameCounter++;
}

void BoogleGame::play()
{
	grid.init("aeiouqwertyuiopa");
	while (gameContinues()) {
		update();
		render();
	}
	
}
