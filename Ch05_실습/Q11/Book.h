#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {
	char* title;	//���� ���ڿ�
	int price;		//����
public:
	Book(const char* title, int price);
	Book(Book& b);	// (3) ����. ���� ���� ������ ����
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }
};

#endif // !BOOK_H

