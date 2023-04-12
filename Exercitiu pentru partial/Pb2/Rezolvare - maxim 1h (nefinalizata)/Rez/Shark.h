#pragma once
#include "Animal.h"

class Shark {
	std::string GetName()
	{
		std::string str = "Shark";
		return str;
	}
	bool IsAFish()
	{
		return true;
	}
	bool IsABird()
	{
		return false;
	}
	bool IsAMammal()
	{
		return false;
	}
};