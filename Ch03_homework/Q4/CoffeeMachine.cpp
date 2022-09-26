#include "CoffeeMachine.h"
#include <iostream>

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	cf = c;
	water = w;
	sugar = s;
}

void CoffeeMachine::drinkEspresso() {
	cf--;
	water--;
}

void CoffeeMachine::drinkAmericano() {
	cf--;
	water -= 2;
}

void CoffeeMachine::drinkSugarCoffee() {
	cf--;
	water -= 2;
	sugar--;
}

void CoffeeMachine::fill() {
	cf = 10;
	water = 10;
	sugar = 10;
}

void CoffeeMachine::show() {
	std::cout << "커피 머신 상태, 커피:" << cf << "\t물:" << water << "\t설탕:" << sugar << std::endl;
}