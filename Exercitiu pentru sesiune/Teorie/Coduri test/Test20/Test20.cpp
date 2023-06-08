#include <iostream>
#include <exception>

class Division : public std::exception
{
	const char* what() const throw()
	{
		return "Divizare la 0!\n";
	}
};

int main()
{
	int imp = 0;
	std::cout << "Inainte de ex!\n";
	try
	{
		std::cout << "7/0: " << 7 / imp << "\n";
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << "Dupa ex!";
}