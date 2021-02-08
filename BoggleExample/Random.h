#pragma once
#include <time.h>    
class Random
{
public:
	virtual int random(int) = 0;
};

class ConcreteRandom:public Random {

public:
	ConcreteRandom() {
		srand(time(NULL));
	}

	int random(int max) {
		return rand() % max;
	}

};

