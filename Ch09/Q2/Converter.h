#pragma once
#include <string>
#include <iostream>
using namespace std;

class Converter
{
protected:
	double ratio;
	virtual double convert(double src) = 0;	//src를 다른 단위로 변환한다.
	virtual string getSourceString() = 0;	//src 단위 명칭
	virtual string getDestString() = 0;		//dest 단위 명칭
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run();

};

