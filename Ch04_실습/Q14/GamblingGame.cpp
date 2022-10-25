#include "GamblingGame.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

GamblingGame::GamblingGame() {
	for (int i = 0; i < 3; i++) {
		num[i] = 0;
		srand((unsigned)time(0)); //������ ������, new �������� �߻���Ű�� ���� seed ����
	}
}

bool GamblingGame::matchAll() {
	for (int i = 0; i < 3; i++) {
		if (num[i] != num[0]) return false;
	}
	return true;
}

void GamblingGame::run() {
	cout << "***** ���� ������ �����մϴ�. *****" << endl;
	
	string name;
	cout << "ù��° ���� �̸�>>";
	cin >> name;
	p[0].getName(name);

	cout << "�ι�° ���� �̸�>>";
	cin >> name;
	p[1].getName(name);

	int i = 0;
	while (true) {
		cout << p[i].getName() + ":<Enter>";
		p[i].getEnterKey();	//�����ڰ� EnterŰ�� �Է��� ������ ��ٸ�
		cout << endl;
		cout << "\t\t";
		for (int j = 0; j < 3; j++) {
			num[j] = rand() % 3;	//0���� 2������ ������ �� �߻�
			cout << num[j] << '\t';
		}
		if (matchAll()) {	//p[i]�� winner
			cout << p[i].getName() << "�� �¸�!!" << endl;
			return;		//program exit
		}
		else {
			cout << "�ƽ�����!" << endl;
		}
		i++;
		i %= 2;	//next player(player�� 2�� �����Ƿ� % 2)
	}
}