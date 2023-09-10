#include "Line.h"
#include <math.h>

Line::Line(Point p, double length, double orientation, int r, int g, int b):Length(length),Shapes(p, orientation, r, g, b)
{
}

double Line::GetLength()
{
	return Length;
}

double Line::GetAngle()
{
	return Orientation;
}

Point Line::GetStart()
{
	return P;
}

Point Line::GetEnd()
{
	int X = P.GetX(), Y = P.GetY();
	Point End;
	End.SetX(X + (int)(Length * cos(Orientation)));
	End.SetY(Y + (int)(Length * sin(Orientation)));
	return End;
}

void Line::SetStart(Point p)
{
	P = p;
}

void Line::Draw(HDC h)
{
	int X = P.GetX();
	int Y = P.GetY();
	COLORREF NewColor = RGB(R, B, B);
	HPEN hNewPen = CreatePen(PS_SOLID, 2, NewColor);
	SelectObject(h, hNewPen);
	MoveToEx(h, P.GetX(), P.GetY(), NULL);
	LineTo(h, P.GetX() + (int)(Length * cos(Orientation)), P.GetY() + (int)(Length * sin(Orientation)));
}