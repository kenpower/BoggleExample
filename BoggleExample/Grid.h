#pragma once
#include "string"
class Grid
{
	std::string letters;
	int width{ 4 };
public:
	Grid(const std::string intialLetters) :letters(intialLetters) {}

	char letterAt(const int col, const int row) const;
};
