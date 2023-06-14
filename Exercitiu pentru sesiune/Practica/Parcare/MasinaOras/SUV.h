#pragma once
#include "Masina.h"

class SUV:public Masina
{
public:
	virtual std::string getConsum() = 0;
};

