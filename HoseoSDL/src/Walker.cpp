#include "Walker.h"

#include <random>

//��Ŀ���� �Ұ� ����

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
	direction = Vector2D ? ? - Vector2D ? ? ;//���� = VT = OT - OV
	dist = direction.length();
	if (dist > 0)
	{
		speed = dist / Deceleration;
		speed = min(speed, MaxSpeed);
	}
}

/*
ó��(Process)
���� = VT = OT - OV
�Ÿ� = VT.Length();   // ��Ȯ�� ��Ʈ ���� ��.. ��������..
if (�Ÿ� > 0) {
	// �����ϸ� ��ǥ��ġ�� �̵�
	speed = dist / deceleration;
	speed = min(speed, MaxSpeed);
	DV = VT * speed / �Ÿ�; // N(VT) * speed
	return DV - CV;
	// ��ǥ���� ����� ������ 
	// DV ? , CV ?
}
