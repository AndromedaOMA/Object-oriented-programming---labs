#pragma once
#include "Entry.h"

class StringData:public Entry {
private:
	std::string value;
public:
	StringData(std::string name, std::string value);
	void Add(std::string toAdd);
	bool Substract(int toSubstract);
	void Print();
};