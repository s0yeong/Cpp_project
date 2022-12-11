#include "Color.h"

Color Color::operator+ (Color b) {
	Color c;
	c.red = this->red + b.red;
	c.green = this->green + b.green;
	c.blue = this->blue + b.blue;

	return c;
}

bool Color::operator== (Color f) {
	if (this->red == f.red && this->green == f.green && this->blue == f.blue)
		return true;
	else
		return false;
}
