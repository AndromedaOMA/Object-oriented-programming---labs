#include "ShoppingList.h"
#include <iostream>

void ShoppingList::addItem(Item* i)
{
	items.push_back(i);
}
void ShoppingList::printList()
{
	for (auto a : items)
		if(a.getInfo())
		std::cout << a.getName()<<':'<<a.getInfo()<<';';
}