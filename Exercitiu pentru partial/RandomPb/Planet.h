#pragma once

class Planet
{
protected:
	int diameterDimension;
	char name[100], propertyes[100][100];
private:
	virtual void setDiameterDimension(int n) = 0;
	virtual void setTypeOfPlanet(const char* str) = 0;
	virtual void setName(const char* str) = 0;
	//virtual void setPropertyes(const char* str) = 0;

	virtual int getDiameterDimension() = 0;
	virtual char* getTypeOfPlane() = 0;
	virtual char* getName() = 0;
	//virtual char* getPropertyes() = 0;
};

