#include "Meep.h"
#include "raylib.h"


Meep::Meep()
{
	enabled = false;
	pos.x = 0;
	pos.y = 0;
}

Meep::Meep(bool enable)
{
	enabled = enable;
	pos.x = 0;
	pos.y = 0;
}

Meep::Meep(bool enable, const char * filename)
{
	enabled = enable;
	Image image = LoadImage(filename);
	texture = LoadTextureFromImage(image);
	pos.x = 0;
	pos.y = 0;
}

Meep::Meep(bool enable, const char * filename, float posX, float posY)
{
	enabled = enable;
	Image image = LoadImage(filename);
	texture = LoadTextureFromImage(image);
	pos.x = posX;
	pos.y = posY;
}

Meep::~Meep()
{

}

void Meep::refresh()
{
	DrawTexture(texture, pos.x, pos.y, WHITE);

	if (isPlayer)
	{
		//Running
		if (IsKeyDown(KEY_LEFT_SHIFT) || IsKeyDown(KEY_RIGHT_SHIFT))
		{
			speed = 3.0f;
		}
		else
		{
			speed = 1.0f;
		}

		//Normal Movement
		if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP))
		{
			pos.y -= speed;
		}
		if (IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN))
		{
			pos.y += speed;
		}
		if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT))
		{
			pos.x -= speed;
		}
		if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT))
		{
			pos.x += speed;
		}

		//Checking for screen wrap
		if (pos.x > 800)
		{
			pos.x = -30;
		}
		if (pos.x < -30)
		{
			pos.x = 800;
		}
		if (pos.y > 450)
		{
			pos.y = -30;
		}
		if (pos.y < -30)
		{
			pos.y = 450;
		}
	}
}
