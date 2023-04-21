#pragma once
#include "Planet.h"

class SolidPlanets : public Planet
{
public:
	SolidPlanets(const char* name, const char* Propertyesropertyes, int diameterDimension);

	void setDiameterDimension(int n);
	void setName(const char* str);
	void setPropertyes(const char* str);

	int getDiameterDimension();
	char* getName();
	//char* getPropertyes();

	//friend void Print();
	bool operator<(SolidPlanets* p);//Compare da diameter between 2 planets
	operator int();//it will return da Diameter
};

