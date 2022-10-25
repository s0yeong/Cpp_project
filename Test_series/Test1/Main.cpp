#include "Pizza.h"
#include <iostream>
#include <string>
using namespace std;

// call by reference 방식
void Swap(Pizza& b, Pizza& s) {
	string swapTop;
	swapTop = b.getTopping();
	b.setTopping(s.getTopping());
	s.setTopping(swapTop);
}

// call by address 방식
void Swap(Pizza* b, Pizza* s) {
	string swapTop;
	swapTop = b->getTopping();
	b->setTopping(s->getTopping());
	s->setTopping(swapTop);
}

int main()
{
	Pizza blueberryPizza;
	Pizza strawberryPizza(10);

	blueberryPizza.setTopping("blueberry");
	strawberryPizza.setTopping("strawberry");

	cout << "blueberryPizza의 radius: " << blueberryPizza.getRadius() << endl;
	cout << "blueberryPizza의 topping: " << blueberryPizza.getTopping() << endl;
	cout << "strawberryPizza의 radius: " << strawberryPizza.getRadius() << endl;
	cout << "strawberryPizza의 topping: " << strawberryPizza.getTopping() << endl;

	// call by reference 방식
	Swap(blueberryPizza, strawberryPizza);
	cout << "blueberryPizza의 radius: " << blueberryPizza.getRadius() << endl;
	cout << "blueberryPizza의 topping: " << blueberryPizza.getTopping() << endl;
	cout << "strawberryPizza의 radius: " << strawberryPizza.getRadius() << endl;
	cout << "strawberryPizza의 topping: " << strawberryPizza.getTopping() << endl;

	// call by address 방식
	Swap(&blueberryPizza, &strawberryPizza);
	cout << "blueberryPizza의 radius: " << blueberryPizza.getRadius() << endl;
	cout << "blueberryPizza의 topping: " << blueberryPizza.getTopping() << endl;
	cout << "strawberryPizza의 radius: " << strawberryPizza.getRadius() << endl;
	cout << "strawberryPizza의 topping: " << strawberryPizza.getTopping() << endl;

}