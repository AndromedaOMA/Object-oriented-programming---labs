#pragma once
#include "Masina.h"

class Toyota : public Masina {
private:
	std::string color;
public:
	Toyota(std::string newColor);
	std::string GetColor();
	std::string GetName();
};

