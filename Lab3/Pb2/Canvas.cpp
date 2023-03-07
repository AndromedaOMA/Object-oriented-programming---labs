#include <iostream>
#include "graphics.h"
#pragma comment(lib,"graphics.lib")
#include "Canvas.h"

Canvas::Canvas(int width, int height)
{
	initwindow(width, height);
}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	circle(x, y, ray);
	outtextxy(10, 10, );
}
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	setfillstyle(1, 14);
}
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	rectangle(left, top, right, bottom);
}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	setfillstyle(1, 14);
}
void Canvas::SetPoint(int x, int y, char ch)
{

}
void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx, dy, p, x, y;
	dx = x2 - x1;
	dy = y2 - y1;
	x = x1;
	y = y1;
	p = 2 * dy - dx;
	while (x < x2)
	{
		if (p >= 0)
		{
			putpixel(x, y, 7);
			y++;
			p = p + 2 * dy - 2 * dx;
		}
		else
		{
			putpixel(x, y, 7);
			p = p + 2 * dy;
		}
		x++;
	}
	//source: https://www.thecrazyprogrammer.com/2017/01/bresenhams-line-drawing-algorithm-c-c.html
}
void Canvas::Print()
{
	getch();
	closegraph();
}
void Canvas::Clear()
{
	cleardevice();
}