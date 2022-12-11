#include "Book.h"

bool Book::operator< (string t) {
	if (t < title)
		return true;
	
	return false;
}