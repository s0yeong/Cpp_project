#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;	//���� ���ڿ�
	int price;		//����
public:
	Book(string title, int price);
	~Book();
	void set(string title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }
};

#endif // !BOOK_H

