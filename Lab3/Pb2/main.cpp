#include <iostream>
#include "graphics.h"
#pragma comment(lib,"graphics.lib")
#include "Canvas.h"
using namespace std;

int main()
{

	Canvas c(500,500);
	c.DrawLine(250, 250, 400, 400, 'l');
	c.FillCircle(250, 250, 150, 'a');
	c.Clear();

	c.DrawCircle(250, 250, 150, 'c');
	c.FillRect(100, 100, 350, 350, 'b');
	c.DrawRect(100, 100, 350, 350, 'r');
	c.Print();
	c.Clear();

	c.DrawLine(100, 100, 400, 400, 'l');
	c.Print();
	c.Clear();

	return 0;
}