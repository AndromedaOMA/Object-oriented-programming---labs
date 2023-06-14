#include <iostream>
#include "IntegerData.h"

IntegerData::IntegerData(std::string name, std::string value) :Entry(name)
{
	int val = stoi(value);
	this->value = val;
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
	std::cout << this->value;
}