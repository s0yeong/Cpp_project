#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {
	char* title;	//제목 문자열
	int price;		//가격
public:
	Book(const char* title, int price);
	Book(Book& b);	// (3) 정답. 깊은 복사 생성자 생성
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

#endif // !BOOK_H

