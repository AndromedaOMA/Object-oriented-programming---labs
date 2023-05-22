#include <iostream>
int f(int x, int y)
{
	if (y == 0)
		throw x;
	return x % y;
}
int main()
{
	try {
		std::cout << f(10, 0);
	}
	catch(char const* msg){
		std::cout << msg;
	}
	return 0;
}