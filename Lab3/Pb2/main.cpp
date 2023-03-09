#include <iostream>
#include "Canvas.h"
using namespace std;

int main()
{
	Canvas c(100, 100);
	c.DrawLine(10, 10, 40, 50, 'l');
	c.FillCircle(50, 50, 5, 'a');
	c.DrawCircle(80, 80, 5, 'c');
	c.SetPoint(90, 90, 'p');
	c.FillRect(10, 70, 50, 100, 'b');
	c.DrawRect(10, 30, 30,50, 'r');
	c.Print();
	c.Clear();

	return 0;
}