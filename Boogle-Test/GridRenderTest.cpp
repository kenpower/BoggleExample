#include "pch.h"
#include "../BoggleExample/GridRenderer.h"

TEST(GridtoString, GridRenderer) {
  
	Grid grid("testgridabcdwxyz");
	std::string expected =
		"+----+\n"
		"|TEST|\n"
		"|GRID|\n"
		"|ABCD|\n"
		"|WXYZ|\n"
		"+----+\n";
  
  EXPECT_EQ(expected, GridRenderer::render(grid));

}