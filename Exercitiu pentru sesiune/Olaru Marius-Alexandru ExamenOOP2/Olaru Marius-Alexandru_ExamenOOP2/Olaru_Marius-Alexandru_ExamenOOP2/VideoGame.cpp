#include "VideoGame.h"
#include <iostream>

VideoGame::VideoGame(int price, int q, std::string type) :price(price), quantity(q), type(type) {}
std::string VideoGame::GetType()
{
	return this->type;
}
int VideoGame::GetQuantity()
{
	return this->quantity;
}
int VideoGame::GetPrice()
{
	return this->price;
}
void VideoGame::Print()
{
	std::cout << "VideoGame (from=" << GetType() << ") Price=" << GetPrice() << " Quantity=" << GetQuantity();
}