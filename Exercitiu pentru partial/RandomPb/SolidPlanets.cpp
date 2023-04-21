#include "SolidPlanets.h"

SolidPlanets::SolidPlanets(const char* name, const char* Propertyesropertyes, int diameterDimension)
{
	setName(name);
	setDiameterDimension(diameterDimension);
	//setPropertyes(Propertyesropertyes);
}

void SolidPlanets::setDiameterDimension(int n)
{
	this->diameterDimension = n;
}
void SolidPlanets::setName(const char* str)
{
	int i = -1;
	do
	{
		i++;
		this->name[i] = str[i];
	} while (str[i]);
}
void SolidPlanets::setPropertyes(const char* str)
{
	char* aux = new char(100);
	int i = -1;
	do
	{
		i++;
		aux[i] = str[i];
	} while (str[i]);

	int i = -1, j = 0;
	do
	{
		i++;
		if ((aux[i] == ' ' || aux[i] = '\n') && aux[i - 1] != ' ')
		{

		}
	} while (str[i]);
}



int SolidPlanets::getDiameterDimension()
{
	return this->diameterDimension;
}
char* SolidPlanets::getName()
{
	return this->name;
}
//char* SolidPlanets::getPropertyes()
//{
//	return this->propertyes;
//}

bool SolidPlanets::operator<(SolidPlanets* p)
{
	if (diameterDimension < p->diameterDimension)
		return true;
	return false;
}

SolarSystem::operator int()
{
	return this->
}