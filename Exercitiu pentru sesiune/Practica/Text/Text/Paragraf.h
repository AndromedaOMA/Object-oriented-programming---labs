#pragma once
#include <string>
#include <vector>
#include "Text.h"
#include "Cuvant.h"

class Paragraf:protected Text
{
protected:
	std::vector<Text*> texte;
public:
	void Afiseaza();
	void Add(Text txt);
};

