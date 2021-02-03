#pragma once
#include"Grid.h"
class GridRenderer
{
	static std::string renderRow(const Grid& grid, int row);
public:
	static std::string render(const Grid& grid);
};

