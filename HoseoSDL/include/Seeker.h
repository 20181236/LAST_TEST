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
	int speed;
	int deceleration;
	int dist;
	int MaxSpeed;
};

// ���� = VT = OT - OV
//�Ÿ� =VT.Lenght()'
//=DV VT * speed/�Ÿ�