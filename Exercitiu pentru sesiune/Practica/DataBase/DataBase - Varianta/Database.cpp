#include<iostream>
#include "Database.h"

bool Database::operator-=(std::string name) {
	for (auto a : entries)
		if (a->GetName() == name)
		{
			a.erase();
			return true;
		}
	return false;
}
int* Database::begin() { return &entries[0]; }
int* Database::end() { return &entries[entries.size()]; }
void Database::Print() {
	for (auto a : entries)
		std::cout << a->GetName();
}