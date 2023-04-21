#pragma once
#include "SolidPlanets.h"
#include "Planet.h"

class SolarSystem
{
private:
	Planet* listOfPlanets[20];
	int countPlanet = 0;
public:
	void addPlanet(Planet* p);//Add some planets int da list from above
	int operator[](int index);//it will return an ch from the index position
};

