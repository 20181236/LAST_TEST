#pragma once

#include "Vector2D.h"
#include "main.h"

//厘局拱 按眉 积己侩

class obstacles
{
	int _x, _y;
public:
	obstacles(int x, int y);
	void draw(SDL_Renderer* renderer);

};