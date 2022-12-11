#include <iostream>
using namespace std;

#include "Book.h"

bool Book::operator== (int op2)
{
	if (price == op2) {
		return true;
	}
	return false;
}

bool Book::operator== (string op2)
{
	if (title == op2) {
		return true;
	}
	return false;
}
bool Book::operator== (Book& op2)
{
	if (this->title == op2.title && this->price == op2.price && this->pages == op2.pages) {
		return true;
	}
	return false;
}