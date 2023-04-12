#pragma once
#include "Animal.h"

class Cow {
	std::string GetName()
	{
		std::string str = "Cow";
		return str;
	}
	bool IsAFish()
	{
		return false;
	}
	bool IsABird()
	{
		return false;
	}
	bool IsAMammal()
	{
		return true;
	}
};