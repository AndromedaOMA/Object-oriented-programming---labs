#pragma once
#include "Animal.h"

class Eagle :public Animal {
	std::string GetName()
	{
		std::string name = "Eagle";
		return name;
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