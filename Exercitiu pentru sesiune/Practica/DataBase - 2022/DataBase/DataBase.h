#pragma once
#include <string>
#include <vector>
#include "Entry.h"
class DataBase
{
private:
	std::vector<Entry*> entries;
public:
	void operator+=(DataBase data1DataBase, Entry* dataEntry);
	void operator-=(DataBase data1DataBase, Entry* dataEntry);
	int* begin();
	int* end();
	void Print();
};

