#include <iostream>
int main()
{
	int v[5] = { -1,2.5,3.222,4,5.102 };
	for (auto& i : v)
		i *= 2;
	for (auto i : v)
		std::cout << i << ' ';

	std::cout << '\n';

	int x[] = { 1, 2, 3 };
	for (int& i : x)
		i *= 2;
	for (int i : x)
		printf("%d,", i);
}