#pragma once
#include <string>

class Entry
{
private:
	std::string name;
public:
	Entry(std::string name);
	std::string GetName();
	void Add(std::string toAdd);
	bool Substract(int toSubstract);
	void Print();
};

