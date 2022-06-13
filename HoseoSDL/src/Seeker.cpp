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

void Seeker::arrive()
{
	Vector2D Target = TargetPos - ? ? ? ->pos;
	direction = Vector2D ? ? -Vector2D ? ? ;//방향 = VT = OT - OV
	dist = direction.length();
	if (dist > 0)
	{
		speed = dist / Deceleration;
		speed = min(speed, MaxSpeed);
		DV = direction * speed / dist;
		return dv - cv;//???리턴..?
	}

}

void Seeker::draw(SDL_Renderer* renderer)
{
	filledCircleColor(renderer, _x, _y, 1, 0xFFFFFF00);
	//감시 상자 만들어야함
	boxlen = ? 의 최소박스길이 + speed / deceleration * 최소박스길이;
}

void Seek(Vector2D TargetPos, Vector2D modification)
{
	//찾는 함수가 필요
	Vector2D DesiredVelocity = Vector2D::normalize(TargetPos - );
}
