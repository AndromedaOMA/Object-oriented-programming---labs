#include "Shop.h"
#include <iostream>

void Shop::Add(Article* a)
{
	articles.push_back(a);
}
int Shop::GetTotalPrice()
{
	int sum = 0;
	for (auto a : articles)
	{
		sum += a->GetPrice();
	}
	return sum;
}
int Shop::GetQuantity()
{
	int quantity=0;
	for (auto a : articles)
	{
		quantity += a->GetPrice();
	}
	return quantity;
}
void Shop::List()
{
	for (auto a : articles)
	{
		a->Print();
		std::cout << '\n';
	}
}