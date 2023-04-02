#include "RangeRover.h"

RangeRover::RangeRover()
{
	setName("RangeRover");
	setFuelCapacity();
	setFuelConsumption();
	setAvaregeSpeed(Weather::Sunny);
}

void RangeRover::setFuelCapacity()
{
	fuelCapacity = 10;
}
void RangeRover::setFuelConsumption()
{
	fuelConsumption = 20;
}
void RangeRover::setAvaregeSpeed(Weather weather)
{
	switch (weather)
	{
	case Weather::Rain:
		avarageSpeed = 10;
		break;
	case Weather::Sunny:
		avarageSpeed = 10;
		break;
	case Weather::Snow:
		avarageSpeed = 10;
		break;
	}
}
void RangeRover::setName(std::string name)
{
	this->carName = name;
}

float RangeRover::getFuelCapacity()
{
	return this->fuelCapacity;
}
float RangeRover::getFuelConsumption()
{
	return this->fuelConsumption;
}
float RangeRover::getAvaregeSpeed()
{
	return this->avarageSpeed;
}
std::string RangeRover::getName()
{
	return this->carName;
}