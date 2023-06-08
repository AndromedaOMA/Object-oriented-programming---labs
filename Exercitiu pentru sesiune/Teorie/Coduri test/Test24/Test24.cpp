#include <iostream>

void f() { throw "Hello"; }
void g() { throw " World!"; }

int main()
{
	try {
		try {
			f();
		}
		catch (char* msg) {
			std::cout << msg << '\n';
		}
		g();
	}
	catch (char* msg){
		std::cout << msg << '\n';
	}
	return 0;
}