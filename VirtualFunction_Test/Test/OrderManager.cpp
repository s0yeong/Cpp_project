#include "OrderManager.h"

OrderManager OrderManager::operator+(OrderManager* menu)
{
	// TODO: ���⿡ return ���� �����մϴ�.
	OrderManager tmp;
	tmp.price = this->price + menu->price;

	return tmp;
}

OrderManager OrderManager::operator+=(OrderManager* menu)
{
	// TODO: ���⿡ return ���� �����մϴ�.
	this->price += menu->price;
	return *this;
}
