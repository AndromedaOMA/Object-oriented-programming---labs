#pragma once
#include "Processor.h"

class ComputeVowals : public Processor
{
	std::string GetName();
	int Compute();
	ComputeVowals(std::string str);
};

