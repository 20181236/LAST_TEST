#pragma once
#include "Vector2D.h"
#include "main.h"

class Seeker
{
	int _x, _y;
public:
	Seeker(int x, int y);
	void draw(SDL_Renderer* renderer);
	void update();

private:
	Vector2D w_position;
	Vector2D

};