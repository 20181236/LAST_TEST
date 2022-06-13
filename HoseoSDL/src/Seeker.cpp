#include "Seeker.h"

#include <random>

//시커에서 할거 장애물 피하면서 움직이기

Seeker::Seeker(int x, int y)
{
	_x = x;
	_y = y;
}

void Seeker::update()
{

}

void Seeker::draw(SDL_Renderer* renderer)
{
	filledCircleColor(renderer, _x, _y, 1, 0xFFFFFF00);
}

void Seek(Vector2D TargetPos, Vector2D modification)
{
	Vector2D DesiredVelocity = Vector2D::normalize(TargetPos - );
}

