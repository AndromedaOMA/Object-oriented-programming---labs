#pragma once
#include "Article.h"
class VideoGame :public Article
{
private:
	int price, quantity;
	std::string type;
public:
	VideoGame(int price, int q, std::string type);
	std::string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};

