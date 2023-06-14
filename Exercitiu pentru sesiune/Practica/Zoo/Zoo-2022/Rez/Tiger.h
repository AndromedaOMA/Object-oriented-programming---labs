#pragma once
#include"Feline.h"

class Tiger :public Feline {
	std::string GetName()
	{
		std::string name = "Tiger";
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
		int speed = 80;
		return speed;
	}
};