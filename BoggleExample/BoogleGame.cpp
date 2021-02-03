#include "BoogleGame.h"
#include"DisplayString.h"
#include"GridRenderer.h"

void BoogleGame::play()
{
	Grid grid{ "aeiouqwertyuiopa" };

	std::string gridAsString = GridRenderer::render(grid);

	DisplayString::display(gridAsString);
}
