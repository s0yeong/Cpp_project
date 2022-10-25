#ifndef HISTOGRAM_H
#define HISTOGRAM_H
#include <string>
using namespace std;

class Histogram {
	string text;
	int h[26];	//26���� ���ĺ��� ���� �� ���ڴ� ���� ����
public:
	Histogram();
	Histogram(string text);
	~Histogram() {}
	void put(string text);
	void putc(char c);
	void print();

};

#endif // !HISTOGRAM_H

