#include "GamblingGame.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

GamblingGame::GamblingGame() {
	for (int i = 0; i < 3; i++) {
		num[i] = 0;
		srand((unsigned)time(0)); //시작할 떄마다, new 랜덤수를 발생시키기 위한 seed 설정
	}
}

bool GamblingGame::matchAll() {
	for (int i = 0; i < 3; i++) {
		if (num[i] != num[0]) return false;
	}
	return true;
}

void GamblingGame::run() {
	cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
	
	string name;
	cout << "첫번째 선수 이름>>";
	cin >> name;
	p[0].getName(name);

	cout << "두번째 선수 이름>>";
	cin >> name;
	p[1].getName(name);

	int i = 0;
	while (true) {
		cout << p[i].getName() + ":<Enter>";
		p[i].getEnterKey();	//참가자가 Enter키를 입력할 때까지 기다림
		cout << endl;
		cout << "\t\t";
		for (int j = 0; j < 3; j++) {
			num[j] = rand() % 3;	//0부터 2까지의 임의의 수 발생
			cout << num[j] << '\t';
		}
		if (matchAll()) {	//p[i]가 winner
			cout << p[i].getName() << "님 승리!!" << endl;
			return;		//program exit
		}
		else {
			cout << "아쉽군요!" << endl;
		}
		i++;
		i %= 2;	//next player(player이 2명만 있으므로 % 2)
	}
}