#pragma once
#include "Vector2D.h"
#include "main.h"

class Walker
{
  int _x, _y;
public:
  Walker(int x, int y);
  void draw(SDL_Renderer* renderer);
  void update();
  void flee();


private:
	Vector2D speed;
	Vector2D deceleration;
	Vector2D dist;
	int MaxSpeed;
	// direction;


};