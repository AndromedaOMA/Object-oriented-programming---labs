#include <iostream>
#include <string>

int main()
{
	std::string str = "Ma numesc MaRiUs!", strPrim = "";
	for (auto c : str)
		strPrim += tolower(c);
	std::cout << strPrim << '\n';

	std::string str1 = "MaRiUs!";
	int nr = 0;
	for (auto c : str1)
		if (isalpha(c))
			nr++;
	std::cout << nr;
}