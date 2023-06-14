#pragma once
#include "MasinaOras.h"
class Opel
{
private:
	int capacitate,anFabricatie;
	std::string culoare;
public:
	void setCapacitate(int val);
	void setCuloare(std::string val);
	void setAnFabricatie(int val);
	int getAnFabricatie(int val);
};

