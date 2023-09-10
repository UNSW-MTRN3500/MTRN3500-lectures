#include "Circle.h"

Circle::Circle(Point c, double radius, int r, int g, int b):Radius(radius), Shapes(c, 0.0, r, g, b)
{
}

void Circle::Draw(HDC h)
{
	int X=P.GetX(), Y=P.GetY();

	COLORREF NewColor = RGB(R, G, B);
	HPEN hNewPen = CreatePen(PS_SOLID, 2, NewColor);
	SelectObject(h, hNewPen);
	//https://learn.microsoft.com/en-us/windows/win32/gdi/line-and-curve-functions
	Arc(h, X - (int)Radius, Y - (int)Radius, X + (int)Radius, Y + (int)Radius, X - (int)Radius, Y, X - (int)Radius, Y);
}