#pragma once
#include <string>
using namespace std;

class LoopAdder
{
	string name;	//루프 이름
	int x, y, sum;	//x에서 y까지의 값은 sum
	void read(); //x, y 값을 읽어 들이는 함수
	void write();	//sum을 출력하는 함수
protected:
	LoopAdder(string name = "") { this->name = name; }
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run();
};
