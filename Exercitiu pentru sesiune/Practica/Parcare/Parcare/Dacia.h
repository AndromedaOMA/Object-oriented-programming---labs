#pragma once
#include "Masina.h"

class Dacia: public Masina{
private:
	std::string color;
public:
	Dacia(std::string newColor);
	std::string GetColor();
	std::string GetName();
};

