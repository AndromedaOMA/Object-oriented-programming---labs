#pragma once
#include "Entry.h"
#include <string>

class IntegerData
{
	private:
		int value;
	public:
		IntegerData(std::string name, std::string value);
		void Add(std::string toAdd);
		bool Substract(int toSubstract);
		void Print();
};

