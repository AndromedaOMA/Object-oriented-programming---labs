#pragma once
#include "Article.h"
class Book:public Article
{
private:
	int price, quantity;
	std::string type;
public:
	Book(int price, int q, std::string type);
	std::string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};

