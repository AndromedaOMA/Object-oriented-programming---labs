#include "Cuvant.h"
#include <iostream>

void Cuvant::Afiseaza()
{
	std::cout << txt;
}
void Cuvant::SetCuvant(std::string cuvant)
{
	txt = cuvant;
}
Cuvant::Cuvant(std::string cuvant):txt(cuvant){}