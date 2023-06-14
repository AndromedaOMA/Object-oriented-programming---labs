#include "Dacia.h"

Dacia::Dacia(std::string newColor)
{
	color = newColor;
}
std::string Dacia::GetColor()
{
	std::string toReturn = color;
	return toReturn;
}
std::string Dacia::GetName()
{
	std::string toReturn = "Dacia";
	return toReturn;
}