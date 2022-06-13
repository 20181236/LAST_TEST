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
  void hide();

private:
	Vector2D dist;
	Vector2D DistTocloset;
	Vector2D best spot;

};