#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
using namespace std;

// 선수를 추상화한 클래스
class Player {
	string name;
public:
	Player(string name = "") {
		this->name = name;
	}
	void getName(string name) { this->name = name; }
	string getName() { return name; }
	void getEnterKey() {	//<Enter>키가 입력되면 리턴
		char buf[10];
		cin.getline(buf, 99);	// wait <Enter> key
	}
};

#endif // !PLAYER_H

