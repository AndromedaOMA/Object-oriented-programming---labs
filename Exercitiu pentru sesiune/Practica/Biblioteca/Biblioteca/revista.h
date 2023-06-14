#pragma once
#include "carte.h"

class revista
{
private:
	std::string titlu;
	int nrArticole;
public:
	revista(std::string titlu, int nrArticole) :titlu(titlu), nrArticole(nrArticole) {}
	std::string GetInfo();
};

