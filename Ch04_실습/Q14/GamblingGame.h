#ifndef GAMBLINGGAME_H
#define GAMBLINGGAME_H

#include "Player.h"

class GamblingGame {
	Player p[2];	//2���� ����
	int num[3];		//�����ϰ� ������ 3���� ���� �����ϴ� �迭
	bool matchAll();	//num[] �迭�� ���� ��� �����ϸ� true ���� -> ���
public:
	GamblingGame();
	void run();
};

#endif // !GAMBLINGGAME_H
