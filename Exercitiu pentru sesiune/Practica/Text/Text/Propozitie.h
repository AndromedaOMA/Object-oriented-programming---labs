#pragma once
#include <string>
#include <vector>
#include "Text.h"
#include "Cuvant.h"

class Propozitie:protected Text
{
protected:
	std::vector<Cuvant*> cuvinte;
public:
	void Afiseaza();
	void AddCuvant(Cuvant cuv);
	Propozitie(std::string prop);
};

