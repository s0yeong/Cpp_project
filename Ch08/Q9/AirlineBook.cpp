#include <iostream>
#include <string>
using namespace std;

#include "AirlineBook.h"
#include "Schedule.h"
#include "Console.h"

AirlineBook::AirlineBook(string name, int nSchedules, string scheduleTime[])
{
	this->name = name;
	this->nSchedules = nSchedules;
	sche = new Schedule[nSchedules];	//3개의 Schedule 객체 생성

	for (int i = 0; i < nSchedules; i++) {
		sche[i].setTime(scheduleTime[i]);
	}
}
AirlineBook::~AirlineBook()
{
	if (sche)
		delete[] sche;
}
void AirlineBook::run()
{
	cout << "***** " << name << "에 오신것을 환영합니다" << " *****"<< endl;
	cout << endl;

	while (true) {
		int menu = Console::getMainMenu(4);
		switch (menu) {
		case 1:
			book();
			break;

		case 2:
			cancel();
			break;
		case 3:
			view();
		case 4:
			cout << "예약 시스템을 종료합니다." << endl;
			return;
		case 5:
			cout << "잘못입력하였습니다" << endl;
		}
		cout << endl;
	}
}


void AirlineBook::book() {
	int s;
	string bookName;
	int seatNo;

	s = Console::getScheduleMenu(nSchedules);	//사용자가 선택한 스케줄을 입력 받는다.
	view(s);	//스케줄 s의 예약 상황을 출력한다.
	seatNo = Console::getSeatNo();	//좌석 번호를 입력받는다.
	bookName = Console::getName();	//예약자의 이름을 입력받는다.

	//해당 스케줄 예약
	bool ret = sche[s - 1].book(seatNo, bookName);
	if (!ret)
		Console::print("좌석 번호가 잘못되었거나 예약된 좌석입니다.\n");
	else
		Console::print("예약되었습니다.\n");
}
void AirlineBook::cancel() {
	int s;
	string bookName;
	int seatNo;

	s = Console::getScheduleMenu(nSchedules);
	view(s);
	seatNo = Console::getSeatNo();
	bookName = Console::getName();

	//해당 스케줄 취소
	bool ret = sche[s - 1].cancel(seatNo, bookName);
	if (!ret)
		Console::print("좌석 번호나 예약자의 이름이 틀려서 취소가 실패하였습니다.\n");
	else
		Console::print("예약이 취소되었습니다.\n");
}
void AirlineBook::view() {
	//현재 모든 스케줄의 예약 상황을 출력한다.
	for (int i = 0; i < 3; i++) {
		sche[i].view();
	}
}
// 스케줄 s의 좌석 예약 상황을 출력한다. s=1,2,3
void AirlineBook::view(int s) {
	sche[s - 1].view();		//배열의 인덱스는 0부터 시작
}