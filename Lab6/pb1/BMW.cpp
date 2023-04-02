#include "BMW.h"

BMW::BMW()
{
	setName("BMW");
	setFuelCapacity();
	setFuelConsumption();
	setAvaregeSpeed(Weather::Sunny);
}

void BMW::setFuelCapacity()
{
	fuelCapacity = 40;
}
void BMW::setFuelConsumption()
{
	fuelConsumption = 8;
}
void BMW::setAvaregeSpeed(Weather weather)
{
	switch (weather)
	{
	case Weather::Rain:
		avarageSpeed = 70;
		break;
	case Weather::Sunny:
		avarageSpeed = 200;
		break;
	case Weather::Snow:
		avarageSpeed = 20;
		break;
	}
}
void BMW::setName(std::string name)
{
	this->carName = name;
}

float BMW::getFuelCapacity()
{
	return this->fuelCapacity;
}
float BMW::getFuelConsumption()
{
	return this->fuelConsumption;
}
float BMW::getAvaregeSpeed()
{
	return this->avarageSpeed;
}
std::string BMW::getName()
{
	return this->carName;
}