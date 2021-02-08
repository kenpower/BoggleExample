#include "pch.h"
#include "../BoggleExample/Dice.h"

TEST(Dice1, Dice) {

	Dice dice;

	EXPECT_EQ('i', dice.getRandomLetter());
}




class MockRandom : public Random {
	//int returnValue;
public:
	//MockRandom(int returnValue) :returnValue(returnValue) {}

	int random(int _) {
		return  2;
	}

};

TEST(Dice2, Dice) {

	Dice dice(new MockRandom());

	EXPECT_EQ('i', dice.getRandomLetterTestableVersion());
}


TEST(Dice3, Dice) {

	Dice dice(new ConcreteRandom());

}



