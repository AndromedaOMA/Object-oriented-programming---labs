#include "Miscellaneous.h"

void Miscellaneous::setCount(int val)
{
	count = val;
}
std::string Miscellaneous::getInfo()
{
	std::string toReturn = std::to_string(count);
	return toReturn;
}