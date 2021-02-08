#pragma once
#include "string"
class Grid
{
	std::string letters;
	int width{ 4 };
public:
	void init(const std::string initialLetters) 
	{
		letters = initialLetters;
	}
	char letterAt(const int col, const int row) const;
};

