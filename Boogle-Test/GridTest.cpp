#include "pch.h"
#include "../BoggleExample/Grid.h"

TEST(GetACell, Grid) {
	
	std::string testLetters{"abcd" "efgh" "ijkl" "MNOP"};
	Grid grid(testLetters);

	EXPECT_EQ('A', grid.letterAt(0, 0));
	EXPECT_EQ('D', grid.letterAt(3, 0));
	EXPECT_EQ('M', grid.letterAt(0, 3));
	EXPECT_EQ('P', grid.letterAt(3, 3));

}