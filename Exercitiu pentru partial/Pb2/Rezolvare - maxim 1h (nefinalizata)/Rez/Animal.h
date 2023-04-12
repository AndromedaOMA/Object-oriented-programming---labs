#pragma once
#include <string>

class Animal {
	virtual std::string GetName();
	virtual bool IsAFish();
	virtual bool IsABird();
	virtual bool IsAMammal();
};