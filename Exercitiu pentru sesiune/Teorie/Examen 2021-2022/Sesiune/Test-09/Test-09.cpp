#include <iostream>
#include <vector>

int main()
{
	int sum = 0;
	std::vector<int> elements{ 1, 3, 5, 6, 3 };
	for (auto it = elements.begin(); it < elements.end(); it++)
		if (it != elements.begin())
			sum += (*it - 1) + (*it - 1);
	std::cout << sum;
	return 0;
}