#pragma once
#include <string>

using std::string;

class Item
{
public:
	enum itemType { NUll, WEAPON, CLOTHING, ARMOR, ARTIFACT, POTION, AMMO, TREASURE };

	string name;
	string special; // Flavortext.
	itemType type;
	int damage;
	int heal;
	int quality;
	int sellValue;

	Item();
	Item(string itemName, string flavorText, itemType _type, int dealsDamageFor, int healsFor, int _quality, int sellFor);
	~Item();
};

