#pragma once
#include "Car.h"

class BMW : public Car
{
public:
	BMW();

	void setFuelCapacity();
	void setFuelConsumption();
	void setAvaregeSpeed(Weather weather);
	void setName(std::string name);

	float getFuelCapacity();
	float getFuelConsumption();
	float getAvaregeSpeed();
	std::string getName();
};