#include "Seeker.h"

#include <random>

//��Ŀ���� �Ұ� ��ֹ� ���ϸ鼭 �����̱�

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

