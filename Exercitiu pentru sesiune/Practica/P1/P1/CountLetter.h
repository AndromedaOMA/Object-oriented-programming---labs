#pragma once
#include "Processor.h"

class CountLetter : public Processor
{
	std::string GetName();
	int Compute();
	CountLetter(std::string str);
};

