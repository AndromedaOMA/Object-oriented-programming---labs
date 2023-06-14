#pragma once
#include <string>
#include "ShoppingList.h"

class Item
{
private:
	std::string name;
	ShoppingList* list;
public:
	std::string getName();
	virtual std::string getInfo() = 0;
	void setName(std::string name);
};