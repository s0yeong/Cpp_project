#include "OrderManager.h"

OrderManager OrderManager::operator+(OrderManager* menu)
{
	// TODO: 여기에 return 문을 삽입합니다.
	OrderManager tmp;
	tmp.price = this->price + menu->price;

	return tmp;
}

OrderManager OrderManager::operator+=(OrderManager* menu)
{
	// TODO: 여기에 return 문을 삽입합니다.
	this->price += menu->price;
	return *this;
}
