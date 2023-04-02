#include "Seat.h"

Seat::Seat()
{
	setName("Seat");
	setFuelCapacity();
	setFuelConsumption();
	setAvaregeSpeed(Weather::Sunny);
}

void Seat::setFuelCapacity()
{
	fuelCapacity = 80;
}
void Seat::setFuelConsumption()
{
	fuelConsumption = 7;
}
void Seat::setAvaregeSpeed(Weather weather)
{
	switch (weather)
	{
	case Weather::Rain:
		avarageSpeed = 150;
		break;
	case Weather::Sunny:
		avarageSpeed = 110;
		break;
	case Weather::Snow:
		avarageSpeed = 30;
		break;
	}
}
void Seat::setName(std::string name)
{
	this->carName = name;
}

float Seat::getFuelCapacity()
{
	return this->fuelCapacity;
}
float Seat::getFuelConsumption()
{
	return this->fuelConsumption;
}
float Seat::getAvaregeSpeed()
{
	return this->avarageSpeed;
}
std::string Seat::getName()
{
	return this->carName;
}