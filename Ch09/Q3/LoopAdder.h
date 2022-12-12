#pragma once
#include <string>
using namespace std;

class LoopAdder
{
	string name;	//���� �̸�
	int x, y, sum;	//x���� y������ ���� sum
	void read(); //x, y ���� �о� ���̴� �Լ�
	void write();	//sum�� ����ϴ� �Լ�
protected:
	LoopAdder(string name = "") { this->name = name; }
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run();
};
