#include<sstream>
#include "GridRenderer.h"


std::string GridRenderer::renderRow(const Grid& grid, int row)
{
	return std::string("") 
		+ grid.letterAt(0, row) 
		+ grid.letterAt(1, row) 
		+ grid.letterAt(2, row) 
		+ grid.letterAt(3, row);
}

std::string GridRenderer::render(const Grid& grid)
{

    std::ostringstream output;

	output << "+----+\n";
	for(int i : { 0,1,2,3 })
		output << "|" << renderRow(grid, i) << "|\n";
	output << "+----+\n";

	return output.str();
    
}
