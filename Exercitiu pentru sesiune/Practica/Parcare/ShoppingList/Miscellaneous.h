#pragma once
#include "Item.h"
class Miscellaneous :public Item
{
private:
	int count;
public:
	void setCount(int val);
	std::string getInfo();
};

