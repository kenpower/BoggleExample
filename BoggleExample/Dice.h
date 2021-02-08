#pragma once
#include<string>
#include"Random.h"

class Dice
{
	Random* randNum;
public:
	Dice() :randNum(NULL) { srand(time(NULL)); }
	Dice(Random* rand) :randNum(rand) {}

	char getRandomLetter() {
		std::string vowels{ "aeiou" };
		int r = rand() % 5;
		return vowels[r];
	}

	char getRandomLetterTestableVersion() {
		std::string vowels{ "aeiou" };
		int r = randNum->random(5);
		return vowels[r];
	}

};
