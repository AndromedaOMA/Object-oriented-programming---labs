#include "Apple.h"
#include <iostream>

Apple::Apple(int price, int q, std::string type) :price(price), quantity(q), type(type) {}
std::string Apple::GetType()
{
	return this->type;
}
int Apple::GetQuantity()
{
	return this->quantity;
}
int Apple::GetPrice()
{
	return this->price;
}
void Apple::Print()
{
	std::cout << "Apple (from=" << GetType() << ") Price=" << GetPrice() << " Quantity=" << GetQuantity();
}