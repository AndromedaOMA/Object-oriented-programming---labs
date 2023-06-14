#pragma once
#include "carte.h"

class roman
{
private:
	std::string nume;
	std::string autor;
public:
	roman(std::string nume, std::string autor) :nume(nume), autor(autor){}
	std::string GetInfo();
};

