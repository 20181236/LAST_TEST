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

void Walker::hide()
{
	//1�ܰ� ���� ��ֹ� ���� ���� ����

	radiusOb + DistanceBoundrary;//��ֹ��ݰ濡 +�� �����... ����...
}

void Walker::arrive()
{
	//ȸ�� ���ϰ� õõ�� �����Ұ� �ʿ���
}


void Walker::draw(SDL_Renderer* renderer)
{
 filledCircleColor(renderer, _x, _y, 1, 0xFFFFFF00); 
}

