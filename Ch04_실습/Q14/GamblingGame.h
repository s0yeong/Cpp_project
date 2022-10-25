#ifndef GAMBLINGGAME_H
#define GAMBLINGGAME_H

#include "Player.h"

class GamblingGame {
	Player p[2];	//2명의 선수
	int num[3];		//랜덤하게 생성된 3개의 수를 저장하는 배열
	bool matchAll();	//num[] 배열의 수가 모두 동일하면 true 리턴 -> 우승
public:
	GamblingGame();
	void run();
};

#endif // !GAMBLINGGAME_H
