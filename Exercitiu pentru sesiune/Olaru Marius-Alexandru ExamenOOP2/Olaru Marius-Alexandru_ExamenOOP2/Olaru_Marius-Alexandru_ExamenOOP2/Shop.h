#pragma once
#include<vector>
#include "Article.h"

class Shop :public Article
{
private:
	int items;
	std::vector<Article*> articles;
public:
	void Add(Article* a);
	int GetTotalPrice();
	int GetQuantity();
	void List();
};

