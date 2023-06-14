#pragma once
#include <vector>
#include "Item.h"

class ShoppingList
{
private:
	std::vector<Item> items;
public:
	void addItem(Item* i);
	void printList();
};