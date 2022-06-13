#include "Walker.h"

#include <random>

//워커에서 할것 숨기

enum Deceleration { slow = 3, normal = 2, fast = 1 };


Walker::Walker(int x, int y) 
{
	_x = x;
	_y = y;
}

void Walker::update() 
{
  
}

void Walker::hide()
{
	//1단계 각각 장애물 은신 지점 결정

	radiusOb + DistanceBoundrary;//장애물반경에 +를 해줘야... 감지...
}

void Walker::arrive()
{
	//회피 다하고 천천히 도착할게 필요함
}


void Walker::draw(SDL_Renderer* renderer)
{
 filledCircleColor(renderer, _x, _y, 1, 0xFFFFFF00); 
}

