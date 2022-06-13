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


void Walker::draw(SDL_Renderer* renderer)
{
 filledCircleColor(renderer, _x, _y, 1, 0xFFFFFF00); 
}

void Walker::flee()//)
{
	Vector2D Target = TargetPos - ? ? ? ->pos;
	direction = Vector2D ? ? - Vector2D ? ? ;//방향 = VT = OT - OV
	dist = direction.length();
	if (dist > 0)
	{
		speed = dist / Deceleration;
		speed = min(speed, MaxSpeed);
		DV = direction * speed / dist;
	}
}

/*
처리 (Process)
방향  = VT = OT - OV
거리 = VT.Length();   // 정확한 루트 연산
if ( 거리 > 0 ) {
	  // 감속하며 목표위치로 이동
	speed = dist / deceleration;
	speed = min ( speed, MaxSpeed);
	DV = VT * speed / 거리; // N(VT) * speed
	return DV-CV;
}
*/

//아무래도 이전의 한글은 깨지고 새로쓴건 ㅇ남아있다고 추측