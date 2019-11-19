#include "MyHero.h"
#include <string>

using std::string;

MyHero::MyHero()
{
	name = "Default";
	special = "(Text)";
	age = 0;
	HP = 10;
	wealth = 10.0f;
}
MyHero::MyHero(string playerName, string specialText, int _age, int hitPoints, float money)
{
	name = playerName;
	special = specialText;
	age = _age;
	HP = hitPoints;
	wealth = money;
}

MyHero::~MyHero()
{
}

// I don't ike how this works, and I'm fairly certain it isnt suppose to work like this?? We'll see.
MyHero MyHero::operator+=(Potion & potion)
{
	MyHero temp(name, special, age, HP, wealth);
	temp.HP += potion.getHealthMod();
	return temp;
}
