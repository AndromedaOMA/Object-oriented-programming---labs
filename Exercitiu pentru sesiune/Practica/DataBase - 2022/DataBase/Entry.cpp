#include "Entry.h"

Entry::Entry(std::string NAME)
{
	this -> name = NAME;
}
std::string Entry::GetName()
{
	return this->name;
}