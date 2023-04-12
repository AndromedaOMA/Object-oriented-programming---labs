#pragma once
#include "Car.h"

class BMW : public Car
{
public:
	void SetUnits(int val);
	void SetName(const char* n);
	int GetUnits();
	char* GetName();
	void Print();
};