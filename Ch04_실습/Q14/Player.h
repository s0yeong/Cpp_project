#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
using namespace std;

// ������ �߻�ȭ�� Ŭ����
class Player {
	string name;
public:
	Player(string name = "") {
		this->name = name;
	}
	void getName(string name) { this->name = name; }
	string getName() { return name; }
	void getEnterKey() {	//<Enter>Ű�� �ԷµǸ� ����
		char buf[10];
		cin.getline(buf, 99);	// wait <Enter> key
	}
};

#endif // !PLAYER_H

