#include <iostream>
#include <string>
using namespace std;

#include "Console.h"

int Console::getMainMenu(int nMenus)
{
	while (true) {
		cout << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
		string in;
		cin >> in;
		if (in.size() > 1)
			continue;
		int menu = getInt(in);
		if (menu >= 1 && menu <= nMenus)
			return menu;
	}
}

int Console::getScheduleMenu(int nSchedules)
{
	while (true) {
		cout << "07시:1, 12시:2, 17시:3>> ";
		string in;
		cin >> in;
		if (in.size() > 1)
			continue;
		int menu = getInt(in);
		if (menu >= 1 && menu <= nSchedules)
			return menu;
	}
}

string Console::getName()
{
	cout << "이름 입력>> ";
	string name;
	cin >> name;
	return name;
}

int Console::getSeatNo()
{
	while (true) {
		cout << "좌석 번호>> ";
		string in;
		cin >> in;
		int n = getInt(in);
		if (n != 0)
			return n;
	}

}

void Console::print(string msg)
{
	cout << msg;
}

int Console::getInt(string in)
{
	return atoi(in.data());	//atoi()가 0을 리턴하면, 입력에 오류가 있었음
}

