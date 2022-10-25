#define _CRT_SECURE_NO_WARNINGS //비주얼 스튜디오에서 strcpy() 때문에 발생하는 컴파일 오류를 막기 위해

#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

Book::Book(const char* title, int price) {
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::~Book() {
	if (title)
		delete[] title;
}

//(2) 정답. 컴파일러가 삽입하는 디폴트 복사 생성자
/*
Book::Book(Book& b) {
	title = b.title;
	price = b.price;
}
*/

Book::Book(Book& b) {			// (3) 정답. 깊은 복사 생성자 구현부
	int len = strlen(b.title);
	title = new char[len + 1];
	strcpy(title, b.title);
	price = b.price;
}

void Book::set(const char* title, int price) {
	if (this->title)	// 현재 객체에 title에 메모리가 할당되어 책 이름이 적혀져 있는 상황
		delete[] this->title;	//현재 title에 할당된 메모리 반환
	int len = strlen(title);
	this->title = new char[len + 1];	//새로 메모리 할당
	strcpy(this->title, title);
	this->price = price;
}

