#pragma once
#include <iostream>
using namespace std;

class Color
{
	int red, green, blue;
public:
	Color() {
		red = 0, green = 0, blue = 0;
	}
	Color(int r, int g, int b) {
		red = r, green = g, blue = b;
	}

	void show() {
		cout << red << " " << green << " " << blue << endl;
	}

	Color operator+ (Color b);
	bool operator== (Color f);

};

