#include "revista.h"

std::string revista::GetInfo()
{
	std::string toReturn;
	toReturn += "Revista ";
	toReturn += this->titlu;
	toReturn += " cu ";
	std::string val = std::to_string(this->nrArticole);
	toReturn += val;
	toReturn += " articole";
	return toReturn;
}
