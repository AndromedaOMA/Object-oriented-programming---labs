#pragma once
#include "Weather.h"
#include <string>

class Car
{
protected:
	float fuelCapacity, fuelConsumption, avarageSpeed;
	std::string carName;

public:
	virtual void setFuelCapacity() { fuelCapacity = 0; };
	virtual void setFuelConsumption() { fuelConsumption = 0; };
	virtual void setAvaregeSpeed(Weather weather) { avarageSpeed = 0; };
	virtual void setName(std::string name) = 0;
	virtual float getFuelCapacity() = 0;
	virtual float getFuelConsumption() = 0;
	virtual float getAvaregeSpeed() = 0;
	virtual std::string getName() = 0;
};