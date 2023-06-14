#include <iostream>
#include "StringData.h"

StringData::StringData(std::string name, std::string value) :Entry(name)
{
	int val = stoi(value);
	this->value = val;
}
void StringData::Add(std::string toAdd)
{
	int val = stoi(toAdd);
	this->value += val;
}
bool StringData::Substract(int toSubstract)
{
	//std::string val = std::to_string(toSubstract);
	int val = stoi(this->value);
	int sub = val - toSubstract;
	if (sub < 0)
		return false;
	std::string rez = std::to_string(sub);
	return true;
}
void StringData::Print()
{
	std::cout << this->value;
}