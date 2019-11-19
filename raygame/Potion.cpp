#include "Potion.h"
#include <string>

using std::string;

Potion::Potion()
{
	name = "Default";
	HPMod = 0;
	quality = 0;
	bestByDate = 0.0f;
}

Potion::Potion(string potionName, int hitPointMod, int _qualilty, float bestBy)
{
	name = potionName;
	HPMod = hitPointMod;
	quality = _qualilty;
	bestByDate = bestBy;
}

Potion::~Potion()
{
}

int Potion::getHealthMod()
{
	return HPMod * quality;
}
