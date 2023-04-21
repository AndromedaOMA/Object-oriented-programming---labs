#include "SolarSystem.h"

void SolarSystem::addPlanet(Planet* p)
{
	this->listOfPlanets[this->countPlanet++] = p;
}

int SolarSystem::operator[](int index)
{

}