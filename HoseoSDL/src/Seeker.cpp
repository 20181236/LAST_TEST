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

	void Walker::flee()//)
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

	/*
	ó�� (Process)
	����  = VT = OT - OV
	�Ÿ� = VT.Length();   // ��Ȯ�� ��Ʈ ����
	if ( �Ÿ� > 0 ) {
		  // �����ϸ� ��ǥ��ġ�� �̵�
		speed = dist / deceleration;
		speed = min ( speed, MaxSpeed);
		DV = VT * speed / �Ÿ�; // N(VT) * speed
		return DV-CV;
	}
	*/

	//�ƹ����� ������ �ѱ��� ������ ���ξ��� �������ִٰ� ����
}

