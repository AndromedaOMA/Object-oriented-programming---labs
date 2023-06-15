#pragma once
#include "Article.h"
class Apple :public Article
{
private:
	int price, quantity;
	std::string type;
public:
	Apple(int price, int q, std::string type);
	std::string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};

