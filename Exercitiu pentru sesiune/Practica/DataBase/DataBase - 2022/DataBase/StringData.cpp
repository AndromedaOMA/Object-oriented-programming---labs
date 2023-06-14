#include "StringData.h"
#include <string>
#include <iostream>

StringData::StringData(std::string name, std::string value)
{

}
void StringData::Add(std::string toAdd)
{
	this->value += toAdd;
}
bool StringData::Substract(int toSubstract)
{
	std::string val =std::to_string(toSubstract);
	this->value += val;
}
void StringData::Print()
{
	std::cout << this->name << ' ' << this->value;
}