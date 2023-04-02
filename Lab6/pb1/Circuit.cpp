#include <algorithm>
#include "Circuit.h"

void Circuit::SetLength(float value)
{
	this->length = value;
}

void Circuit::SetWeather(Weather weather)
{
	this->weather = weather;
}

void Circuit::AddCar(Car* car)
{
	list.push_back(car);
}

void Circuit::Race()
{
	for (auto car : list)
	{
		car->setAvaregeSpeed(this->weather);
		float time = this->length / car->getAvaregeSpeed();
		float fuelNeeded = time * car->getFuelConsumption();
		if (fuelNeeded > car->getFuelCapacity())
			printf("The %s car did not finih the circuit!\n", car->getName().c_str());
		else
			printf("The %s car finihed the circuit in %f seconds!\n", car->getName().c_str(), time);
	}
	printf("\n");
}

void Circuit::ShowFinalRanks()
{
	printf("The final ranking of the cars who finished the race:\n");
	std::vector<std::pair<Car*, float>> ranking;
	for (auto car : list)
	{
		car->setAvaregeSpeed(this->weather);
		float time = this->length / car->getAvaregeSpeed();
		float fuelNeeded = time * car->getFuelConsumption();
		if (fuelNeeded <= car->getFuelCapacity())
			ranking.push_back(std::make_pair(car, time));
	}

	std::sort(ranking.begin(), ranking.end(), [](auto& car1, auto& car2) { return car1.second < car2.second; });

	for (auto car : ranking)
		printf("%s: %f\n", car.first->getName().c_str(), car.second);

	printf("\n");
}

void Circuit::ShowWhoDidNotFinish()
{
	printf("The cars that didn't finish the circuit are:\n");
	for (auto car : list)
	{
		car->setAvaregeSpeed(this->weather);
		float time = this->length / car->getAvaregeSpeed();
		float fuelNeeded = time * car->getFuelConsumption();
		if (fuelNeeded > car->getFuelCapacity())
			printf("The %s car!\n", car->getName().c_str());
	}
	printf("\n");
}