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

void Seeker::arrive()
{
	Vector2D Target = TargetPos - ? ? ? ->pos;
	direction = Vector2D ? ? -Vector2D ? ? ;//���� = VT = OT - OV
	dist = direction.length();
	if (dist > 0)
	{
		speed = dist / Deceleration;
		speed = min(speed, MaxSpeed);
		DV = direction * speed / dist;
		return dv - cv;//???����..?
	}

}

void Seeker::draw(SDL_Renderer* renderer)
{
	filledCircleColor(renderer, _x, _y, 1, 0xFFFFFF00);
	//���� ���� ��������
	boxlen = ? �� �ּҹڽ����� + speed / deceleration * �ּҹڽ�����;
}

void Seek(Vector2D TargetPos, Vector2D modification)
{
	//ã�� �Լ��� �ʿ�
	Vector2D DesiredVelocity = Vector2D::normalize(TargetPos - );
}
