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
	void arrive();

private:
	Vector2D speed;
	Vector2D deceleration;
	Vector2D dist;
	int MaxSpeed;
	int boxlen;
	// direction;
};
