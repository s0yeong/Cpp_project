#include "Pizza.h"
#include <iostream>
#include <string>
using namespace std;

// call by reference ���
void Swap(Pizza& b, Pizza& s) {
	string swapTop;
	swapTop = b.getTopping();
	b.setTopping(s.getTopping());
	s.setTopping(swapTop);
}

// call by address ���
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

	cout << "blueberryPizza�� radius: " << blueberryPizza.getRadius() << endl;
	cout << "blueberryPizza�� topping: " << blueberryPizza.getTopping() << endl;
	cout << "strawberryPizza�� radius: " << strawberryPizza.getRadius() << endl;
	cout << "strawberryPizza�� topping: " << strawberryPizza.getTopping() << endl;

	// call by reference ���
	Swap(blueberryPizza, strawberryPizza);
	cout << "blueberryPizza�� radius: " << blueberryPizza.getRadius() << endl;
	cout << "blueberryPizza�� topping: " << blueberryPizza.getTopping() << endl;
	cout << "strawberryPizza�� radius: " << strawberryPizza.getRadius() << endl;
	cout << "strawberryPizza�� topping: " << strawberryPizza.getTopping() << endl;

	// call by address ���
	Swap(&blueberryPizza, &strawberryPizza);
	cout << "blueberryPizza�� radius: " << blueberryPizza.getRadius() << endl;
	cout << "blueberryPizza�� topping: " << blueberryPizza.getTopping() << endl;
	cout << "strawberryPizza�� radius: " << strawberryPizza.getRadius() << endl;
	cout << "strawberryPizza�� topping: " << strawberryPizza.getTopping() << endl;

}