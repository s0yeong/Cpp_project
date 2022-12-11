#include <iostream>
using namespace std;

#include "Seat.h"

Seat::Seat()
{
	name = "";

}

bool Seat::book(string name)
{
	if (isBooked()) //예약된 좌석이라면 오류
		return false;
	else {
		this->name = name;
		return true;
	}
}

//예약확인
bool Seat::isBooked()
{
	if (name.size() == 0)
		return false;
	else
		return true;
}

//예약취소
bool Seat::cancel(string name)
{
	if (this->name == name) {
		this->name = ""; //이름 삭제
		return true;
	}
	else
		return false;
}

//예약자 이름 출력
void Seat::view()
{
	if (isBooked())
		cout << name << '\t';
	else
		cout << "---" << "\t";
}
