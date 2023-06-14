#include "IntegerData.h"
#include <iostream>

IntegerData::IntegerData(std::string NAME, std::string VALUE)
{
	this->name = NAME;
	this->value = stoi(VALUE);
}
void IntegerData::Add(std::string toAdd)
{
	int val = stoi(toAdd);
	this->value += val;
}
bool IntegerData::Substract(int toSubstract)
{
	this->value -= toSubstract;
}
void IntegerData::Print()
{
	std::cout << this->name << ' ' << this->value;
}