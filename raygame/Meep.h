#pragma once
#include "raylib.h"

class Meep
{
public:
	bool isPlayer = false;
	bool enabled = true;
	float speed;
	Texture2D texture;
	Vector2 pos;

	Meep();
	Meep(bool enable);
	Meep(bool enable, const char * filename);
	Meep(bool enable, const char * filename, float posX, float posY);
	~Meep();

	void refresh();
};

