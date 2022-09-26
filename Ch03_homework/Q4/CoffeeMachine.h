#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

class CoffeeMachine {
	int cf, water, sugar;
public:
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void show();
	void fill();

	CoffeeMachine(int c, int w, int s);
};

#endif COFFEEMACHINE_H