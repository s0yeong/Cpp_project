#pragma once
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

Book& operator+= (int op2);
Book& operator-= (int op2);

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title, this->price = price, this->pages = pages;
	}

	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }

	

};

