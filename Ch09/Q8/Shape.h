#pragma once
#include <string>
using namespace std;

class Shape
{
protected:
	string name; //������ �̸�
	int width, height;	//������ �����ϴ� �簢���� �ʺ�� ����
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() = 0;	//dummy �� ����
	string getName() { return name; }	//�̸� ����
};

