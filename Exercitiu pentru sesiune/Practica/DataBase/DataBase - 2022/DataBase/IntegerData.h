#pragma once
#include <string>
#include "Entry.h"

class IntegerData:public Entry
{
private:
	int value;
public:
	IntegerData(std::string name, std::string value);
	void Add(std::string toAdd);
	bool Substract(int toSubstract);
	void Print();
};

