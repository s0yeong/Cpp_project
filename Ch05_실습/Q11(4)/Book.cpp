#define _CRT_SECURE_NO_WARNINGS //���־� ��Ʃ������� strcpy() ������ �߻��ϴ� ������ ������ ���� ����

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

