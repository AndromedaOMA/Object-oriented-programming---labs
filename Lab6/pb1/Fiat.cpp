#include "Fiat.h"

Fiat::Fiat()
{
	setName("Fiat");
	setFuelCapacity();
	setFuelConsumption();
	setAvaregeSpeed(Weather::Sunny);
}

void Fiat::setFuelCapacity()
{
	fuelCapacity = 50;
}
void Fiat::setFuelConsumption()
{
	fuelConsumption = 12;
}
void Fiat::setAvaregeSpeed(Weather weather)
{
	switch (weather)
	{
	case Weather::Rain:
		avarageSpeed = 60;
		break;
	case Weather::Sunny:
		avarageSpeed = 90;
		break;
	case Weather::Snow:
		avarageSpeed = 30;
		break;
	}
}
void Fiat::setName(std::string name)
{
	this->carName = name;
}

float Fiat::getFuelCapacity()
{
	return this->fuelCapacity;
}
float Fiat::getFuelConsumption()
{
	return this->fuelConsumption;
}
float Fiat::getAvaregeSpeed()
{
	return this->avarageSpeed;
}
std::string Fiat::getName()
{
	return this->carName;
}