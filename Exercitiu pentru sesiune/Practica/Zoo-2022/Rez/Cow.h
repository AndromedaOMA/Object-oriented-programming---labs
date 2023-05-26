#pragma once
#include"Animal.h"

class Cow:public Animal{
	std::string GetName()
	{
		std::string name = "Cow";
		return name;
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