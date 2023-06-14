#include "roman.h"

std::string roman::GetInfo()
{
	std::string toReturn;
	toReturn += "Roman ";
	toReturn += this->nume;
	toReturn += " de ";
	toReturn += this->autor;
	return toReturn;
}
