#define _CRT_SECURE_NO_WARNINGS //비주얼 스튜디오에서 strcpy() 때문에 발생하는 컴파일 오류를 막기 위해

#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

Book::Book(string title, int price) {
	this->title = title;
	this->price = price;
}

Book::~Book() {
}


void Book::set(string title, int price) {
	this->title = title;
	this->price = price;
}

