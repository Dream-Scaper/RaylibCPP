#pragma once
#include <string>

using std::string;

class Potion
{
private:
	string name;
	int HPMod; // CAN BE -.
	int quality; // Basically a multiplier.
	float bestByDate; // Format: mm.yy.

public:
	Potion();
	Potion(string potionName, int hitPointMod, int qual, float bestBy);
	~Potion();

	int getHealthMod();
};

