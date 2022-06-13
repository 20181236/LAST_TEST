#include "obstacles.h"

#include <math.h>

int randrand = rand() % 200;

obstacles::obstacles(int x, int y)
{
}

void obstacles::draw(SDL_Renderer* renderer)
{
	filledCircleColor(renderer, _x, _y, 20, 0xFFFFFF00);
}
