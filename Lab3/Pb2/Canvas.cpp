#include <iostream>
#include <cmath>
#include "graphics.h"
#include "Canvas.h"
using namespace std;

Canvas::Canvas(int width, int height) : widthCanvas(width), heightCanvas(height)
{
	ma = new char* [heightCanvas];
	for (int i = 0; i < heightCanvas; i++) {
		ma[i] = new char[widthCanvas];
		for (int j = 0; j < widthCanvas; j++) {
			ma[i][j] = ' ';
		}
	}
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i <= 360; i++)
		SetPoint(x + ray * sin(i), y + ray * cos(i), ch);
}
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i <= ray; i++)
		DrawCircle(x, y, i, ch);
}
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left; i < right; i++)
	{
		SetPoint(top, i, ch);
		SetPoint(bottom, i, ch);
	}
	for (int i = top; i < bottom; i++)
	{
		SetPoint(i, left, ch);
		SetPoint(i, right, ch);
	}
}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left + 1; i < right - 1; i++)
		for (int j = top + 1; j < bottom - 1; j++)
			SetPoint(i, j, ch);
}
void Canvas::SetPoint(int x, int y, char ch)
{
	ma[x][y] = ch;
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
			SetPoint(x, y, ch);
			y++;
			p = p + 2 * dy - 2 * dx;
		}
		else
		{
			SetPoint(x, y, ch);
			p = p + 2 * dy;
		}
		x++;
	}
	//source: https://www.thecrazyprogrammer.com/2017/01/bresenhams-line-drawing-algorithm-c-c.html
}
void Canvas::Print()
{
	for (int i = 0; i < heightCanvas; i++)
	{
		for (int j = 0; j < widthCanvas; j++)
			cout << ma[i][j];
		cout << '\n';
	}
}
void Canvas::Clear()
{
	for (int i = 0; i < heightCanvas; i++)
		for (int j = 0; j < widthCanvas; j++)
			ma[i][j] = ' ';
}