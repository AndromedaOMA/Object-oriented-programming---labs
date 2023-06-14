#include "Toyota.h"

Toyota::Toyota(std::string newColor)
{
	color = newColor;
}
std::string Toyota::GetColor()
{
	std::string toReturn = color;
	return toReturn;
}
std::string Toyota::GetName()
{
	std::string toReturn = "Toyota";
	return toReturn;
}