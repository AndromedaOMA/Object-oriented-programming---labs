#pragma once
#include "Animal.h"

class Eagle {
	std::string GetName()
	{
		std::string str = "Eagle";
		return str;
	}
	bool IsAFish()
	{
		return false;
	}
	bool IsABird()
	{
		return true;
	}
	bool IsAMammal()
	{
		return false;
	}
};