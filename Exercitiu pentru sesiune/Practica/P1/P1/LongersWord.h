#pragma once
#include "Processor.h"

class LongersWord: public Processor
{
	std::string GetName();
	int Compute();
	LongersWord(std::string str);
};

