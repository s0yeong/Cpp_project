#ifndef PIZZA_H
#define PIZZA_H

#include <string>
using namespace std;

class Pizza {
	int radius;
	string topping;
public:
	Pizza() { radius = 1; }
	Pizza(int r) { radius = r; }
	void setRadius(int radius);
	void setTopping(string topping);
	int getRadius();
	string getTopping();
};


#endif // !PIZZA_H
