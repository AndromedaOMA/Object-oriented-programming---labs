#pragma once
#include <vector>
#include "carte.h"

class Biblioteca
{
private:
	int count;
	std::vector<carte*> carti;
public:
	Biblioteca();
	~Biblioteca();
	carte* operator+=(carte* a);
	carte* begin();
	carte* end();
	operator int();
	//void PrintFilter();
};

