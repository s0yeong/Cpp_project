#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;	//제목 문자열
	int price;		//가격
public:
	Book(string title, int price);
	~Book();
	void set(string title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

#endif // !BOOK_H

