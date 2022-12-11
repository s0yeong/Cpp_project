#pragma once
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title, this->price = price, this->pages = pages;
	}

	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }

	bool operator== (int op2);
	bool operator== (string op2);
	bool operator== (Book& op2);

};
