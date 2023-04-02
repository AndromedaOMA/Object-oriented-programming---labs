#pragma once
#include "Car.h"
#include <vector>
#include "Weather.h"

class Circuit
{
private:
	float length;
	std::vector<Car*> list;
	Weather weather;

public:
	void SetLength(float value);
	void SetWeather(Weather weather);
	void AddCar(Car* car);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};