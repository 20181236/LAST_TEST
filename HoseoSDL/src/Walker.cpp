#include "Walker.h"

#include <random>

//��Ŀ���� �Ұ� ����

Walker::Walker(int x, int y) 
{
	_x = x;
	_y = y;
}

void Walker::update() 
{
  
}

void Walker::draw(SDL_Renderer* renderer)
{
 filledCircleColor(renderer, _x, _y, 1, 0xFFFFFF00); 
}
