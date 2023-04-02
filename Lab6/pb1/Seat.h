#pragma once
#include "Car.h"

class Seat : public Car
{
public:
	Seat();

	void setFuelCapacity();
	void setFuelConsumption();
	void setAvaregeSpeed(Weather weather);
	void setName(std::string name);

	float getFuelCapacity();
	float getFuelConsumption();
	float getAvaregeSpeed();
	std::string getName();
};