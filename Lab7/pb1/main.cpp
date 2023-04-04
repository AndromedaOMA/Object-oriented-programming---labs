/* ---EX---
int operator"" _baza_3(const char* x)
{
	int value = 0;
	while ((*x) != 0)
	{
		value = value * 3 + (*x) - '0';
		x++;
	}
	return value;
}

void main(void)
{
	int x = 121102_baza_3;
}*/
#include <iostream>
int operator"" _Kelvin(unsigned long long int x)
{
    return x - 273;
}
int operator"" _Fahrenheit(unsigned long long int x)
{
    return (x-32)/1.8;
}

int main() {
    float a = 300_Kelvin;
	std::cout << a << '\n';
    float b = 120_Fahrenheit;
	std::cout << b << '\n';
    return 0;
}