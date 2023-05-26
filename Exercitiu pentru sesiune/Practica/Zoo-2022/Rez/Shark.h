#pragma once
#include"Animal.h"

class Shark :public Animal {
	std::string GetName()
	{
		std::string name = "Shark";
		return name;
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