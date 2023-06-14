#pragma once
#include <list>
#include "Entry.h"

class Database
{
private:
	std::list<Entry*> entries;
public:
	bool operator-=(std::string name);
	int* begin();
	int* end();
	void Print();
};

