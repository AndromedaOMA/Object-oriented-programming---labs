#include "Food.h"

void Food::setQuantity(float val)
{
	quantity = val;
}
std::string Food::getInfo()
{
	std::string toReturn = std::to_string(quantity);
	return toReturn;
}