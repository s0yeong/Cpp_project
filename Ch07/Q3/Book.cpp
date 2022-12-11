#include "Book.h"

bool Book::operator! () {
	if (price == 0) {
		return true;
	}
	return false;
}
