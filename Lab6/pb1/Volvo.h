#pragma once
#include "Car.h"

class Volvo : public Car
{
public:
	Volvo();

	void setFuelCapacity();
	void setFuelConsumption();
	void setAvaregeSpeed(Weather weather);
	void setName(std::string name);

	float getFuelCapacity();
	float getFuelConsumption();
	float getAvaregeSpeed();
	std::string getName();
};