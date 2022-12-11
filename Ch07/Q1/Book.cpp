#include "Book.h"

Book& Book::operator+= (int op2)
{
	price = price + op2;
	return *this;
}

Book& Book::operator-= (int op2)
{
	price = price - op2;
	return *this;
}
