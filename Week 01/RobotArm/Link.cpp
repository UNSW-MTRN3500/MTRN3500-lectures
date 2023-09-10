#include "Link.h"
#include "Circle.h"
#include <math.h>

void Link::Draw(HDC h)
{
	int X = P.GetX(), Y = P.GetY();
	Circle S(Point(X, Y), HubRadius, R, G, B);
	Circle E(Point(X + (int)(Length * cos(Orientation)), Y + (int)(Length * sin(Orientation))), HubRadius, R, G, B);
	Line L1(Point(X - (int)(HubRadius * sin(Orientation)), Y + (int)(HubRadius * cos(Orientation))), Length, Orientation, R, G, B);
	Line L2(Point(X + (int)(HubRadius * sin(Orientation)), Y - (int)(HubRadius * cos(Orientation))), Length, Orientation, R, G, B);

	COLORREF NewColor = RGB(R, G, B);
	HPEN hNewPen = CreatePen(PS_SOLID, 2, NewColor);
	SelectObject(h, hNewPen);

	L1.Draw(h);
	L2.Draw(h);
	S.Draw(h);
	E.Draw(h);
}
