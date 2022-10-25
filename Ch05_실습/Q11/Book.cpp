#define _CRT_SECURE_NO_WARNINGS //���־� ��Ʃ������� strcpy() ������ �߻��ϴ� ������ ������ ���� ����

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

//(2) ����. �����Ϸ��� �����ϴ� ����Ʈ ���� ������
/*
Book::Book(Book& b) {
	title = b.title;
	price = b.price;
}
*/

Book::Book(Book& b) {			// (3) ����. ���� ���� ������ ������
	int len = strlen(b.title);
	title = new char[len + 1];
	strcpy(title, b.title);
	price = b.price;
}

void Book::set(const char* title, int price) {
	if (this->title)	// ���� ��ü�� title�� �޸𸮰� �Ҵ�Ǿ� å �̸��� ������ �ִ� ��Ȳ
		delete[] this->title;	//���� title�� �Ҵ�� �޸� ��ȯ
	int len = strlen(title);
	this->title = new char[len + 1];	//���� �޸� �Ҵ�
	strcpy(this->title, title);
	this->price = price;
}

