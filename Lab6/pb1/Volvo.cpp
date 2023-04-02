#include "Volvo.h"

Volvo::Volvo()
{
	setName("Volvo");
	setFuelCapacity();
	setFuelConsumption();
	setAvaregeSpeed(Weather::Sunny);
}

void Volvo::setFuelCapacity()
{
	fuelCapacity = 50;
}
void Volvo::setFuelConsumption()
{
	fuelConsumption = 10;
}
void Volvo::setAvaregeSpeed(Weather weather)
{
	switch (weather)
	{
	case Weather::Rain: 
		avarageSpeed = 60;
		break;
	case Weather::Sunny:
		avarageSpeed = 100;
		break;
	case Weather::Snow:
		avarageSpeed = 40;
		break;
	}
}
void Volvo::setName(std::string name)
{
	this->carName = name;
}

float Volvo::getFuelCapacity()
{
	return this->fuelCapacity;
}
float Volvo::getFuelConsumption()
{
	return this->fuelConsumption;
}
float Volvo::getAvaregeSpeed()
{
	return this->avarageSpeed;
}
std::string Volvo::getName()
{
	return this->carName;
}