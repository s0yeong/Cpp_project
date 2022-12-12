#pragma once
#include <string>
#include <iostream>
using namespace std;

class Converter
{
protected:
	double ratio;
	virtual double convert(double src) = 0;	//src�� �ٸ� ������ ��ȯ�Ѵ�.
	virtual string getSourceString() = 0;	//src ���� ��Ī
	virtual string getDestString() = 0;		//dest ���� ��Ī
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run();

};

