#pragma once

#include "Vector2D.h"
#include "main.h"

//��ֹ� ��ü ������

class obstacles
{
	int _x, _y;
public:
	obstacles(int x, int y);
	void draw(SDL_Renderer* renderer);

};