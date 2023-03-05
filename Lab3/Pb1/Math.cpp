#include <iostream>
#include <cstdarg>
#include "Math.h"
using namespace std;

int Math::Add(int x, int y)
{
	return x + y;
}
int Math::Add(int x, int y, int z)
{
	return x + y + z;
}
int Math::Add(double x, double y)
{
	return x + y;
}
int Math::Add(double x, double y, double z)
{
	return x + y + z;
}
int Math::Mul(int x, int y)
{
	return x + y;
}
int Math::Mul(int x, int y, int z)
{
	return x + y + z;
}
int Math::Mul(double x, double y)
{
	return x + y;
}
int Math::Mul(double x, double y, double z)
{
	return x + y + z;
}
int Math::Add(int count, ...)
{
	/*
	info from : https://www.youtube.com/watch?v=89GryDno_IE
	va_list : type to hold the information avout variable arguments
	va_start Initialise the variable argument list name given
	va_arg retrieve next argument
	va_end : end the argument list
	*/

	int s = 0;
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; i++)
		s += va_arg(args, int);
	va_end(args);
	return s;
}
char* Math::Add(const char*, const char*)
{

}