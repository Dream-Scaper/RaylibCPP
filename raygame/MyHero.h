#pragma once
#include <string>
#include "Potion.h"

using std::string;

class MyHero
{
private:
	string name;
	string special; // Flavortext? This isn't explained in the exercise.
	int age;
	int HP;
	float wealth;

public:
	MyHero();
	MyHero(string playerName, string specialText, int _age, int hitPoints, float money);
	~MyHero();

	MyHero operator+=(Potion & potion);
};

