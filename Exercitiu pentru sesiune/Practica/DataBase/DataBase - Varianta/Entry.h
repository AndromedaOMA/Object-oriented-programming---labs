#pragma once
#include <string>

class Entry
{
protected:
	std::string name;
public:
	Entry(std::string name):name(name){}
	std::string GetName()
	{
		return name;
	}
	virtual void Add(std::string toAdd) = 0;
	virtual void GetName(std::string toAdd) = 0;
	virtual bool Substract(int toSubstract) = 0;
	virtual void Print() = 0;
};

