#pragma once

#include "Vector2D.h"
#include "main.h"

//장애물 객체 생성용

class obstacles
{
	int _x, _y;
public:
	obstacles(int x, int y);
	void draw(SDL_Renderer* renderer);

};