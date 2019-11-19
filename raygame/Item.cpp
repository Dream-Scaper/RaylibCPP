#include "Item.h"
#include <string>

using std::string;

Item::Item()
{
	name = "NULL";
	special = "You shouldn't have this...";
	type = NUll;
	damage = 0;
	heal = 0;
	quality = 0;
	sellValue = 0;
}
Item::Item(string itemName, string flavorText, itemType _type, int dealsDamageFor, int healsFor, int _quality, int sellFor)
{
	name = itemName;
	special = flavorText;
	type = _type;
	damage = dealsDamageFor;
	heal = healsFor;
	quality = _quality;
	sellValue = sellFor;
}

Item::~Item()
{
}
