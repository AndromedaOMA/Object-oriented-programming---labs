#pragma once
#include"Feline.h"

class Lion :public Feline {
	std::string GetName()
	{
		std::string name = "Lion";
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
	int GetSpeed()
	{
		int speed = 40;
		return speed;
	}
};