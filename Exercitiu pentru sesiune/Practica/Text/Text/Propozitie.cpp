#include "Propozitie.h"
#include <iostream>

void Propozitie::Afiseaza()
{
	for (auto a : cuvinte)
		std::cout << a->Afiseaza() << ' ';
}
void Propozitie::AddCuvant(Cuvant cuv)
{

}
Propozitie::Propozitie(std::string prop)
{
	std::string cuvant=nullptr;
	for (int i = 0; i < prop.size(); i++)
	{
		cuvant.push_back(prop[i]);
		if (prop[i] == ' ')
		{
			Cuvant toReturn(cuvant);
			cuvinte.push_back(toReturn);
			cuvant = nullptr;
		}
	}
}
