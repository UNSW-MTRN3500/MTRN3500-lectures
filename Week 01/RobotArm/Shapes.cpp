#include "Shapes.h"

Shapes::Shapes(Point p):P(p),Orientation(0.0), R(0), G(0), B(0)
{
}

Shapes::Shapes(Point p, double orientation):P(p), Orientation(orientation), R(0), G(0), B(0)
{
}

Shapes::Shapes(Point p, double orientation, int r, int b, int g):P(p), Orientation(orientation), R(r), G(g), B(b)
{
}

void Shapes::Move(int deltaX, int deltaY, double deltaOrientation)
{
	P.SetX(P.GetX() + deltaX);
	P.SetY(P.GetY() + deltaY);
	Orientation += deltaOrientation;
}