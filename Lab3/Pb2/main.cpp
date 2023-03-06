#include <iostream>
#include "graphics.h"
#pragma comment(lib,"graphics.lib")
#include "Canvas.h"
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

	Canvas c(500,500);
	c.DrawLine(250, 250, 400, 400, 'l');
	c.FillCircle(250, 250, 150, 'a');
	c.DrawCircle(250, 250, 150, 'c');
	c.FillRect(100, 100, 200, 200, 'b');
	c.DrawRect(100, 100, 200, 200, 'r');
	c.Print();
	c.Clear();

	c.DrawLine(100, 100, 400, 400, 'l');
	c.Print();
	return 0;
}