#include "Math.h"
#include <stdarg.h>
#include <string.h>

int Math::Add(int x, int y)
{
	return x + y;
}
int Math::Add(double x, double y, double z)
{
	return x + y + z;
}
int Math::Mul(int x, int y)
{
	return x * y;

}
int Math::Mul(double x, double y , double z)
{
	return x * y * z;
}
int Math::Add(int count, ...) // sums up a 
{
	int s = 0;
	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
		s += va_arg(vl, int);
	va_end(vl);
}
char* Math::Add(const char* a, const char* b)
{
	char* c = new char[strlen(a)+strlen(b)+1];
	strcpy(c, a);
	strcat(c, b);
	return c;
}