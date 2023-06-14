#pragma once
#include <string>
#include "Text.h"

class Cuvant: protected Text
{
protected:
	std::string txt;
public:
	void Afiseaza();
	void SetCuvant(std::string cuvant);
	Cuvant(std::string cuvant);
};

