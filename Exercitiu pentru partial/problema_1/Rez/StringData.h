#pragma once
#include "Entry.h"
#include <string>

class StringData
{
private: 
	std::string value;
public:
	StringData(std::string name, std::string value);
	void Add(std::string toAdd);
	bool Substract(int toSubstract);
	void Print();
};

