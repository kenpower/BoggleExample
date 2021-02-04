#include "pch.h"
#include "../BoggleExample/Grid.h"

TEST(GetACell, Grid) {
	
	Grid grid;
	grid.init("abcd" "efgh" "ijkl" "MNOP");

	EXPECT_EQ('A', grid.letterAt(0, 0));
	EXPECT_EQ('D', grid.letterAt(3, 0));
	EXPECT_EQ('M', grid.letterAt(0, 3));
	EXPECT_EQ('P', grid.letterAt(3, 3));

}