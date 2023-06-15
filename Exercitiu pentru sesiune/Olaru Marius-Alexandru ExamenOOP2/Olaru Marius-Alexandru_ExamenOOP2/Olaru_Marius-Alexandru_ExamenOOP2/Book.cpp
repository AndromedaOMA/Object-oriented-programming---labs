#include "Book.h"
#include <iostream>

Book::Book(int price, int q, std::string type) :price(price), quantity(q), type(type){}
std::string Book::GetType()
{
	return this->type;
}
int Book::GetQuantity()
{
	return this->quantity;
}
int Book::GetPrice()
{
	return this->price;
}
void Book::Print()
{
	std::cout << "Book (Title="<<GetType()<<") Price="<<GetPrice()<<" Quantity="<<GetQuantity();
}