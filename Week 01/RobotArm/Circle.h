#pragma once
#include "Shapes.h"

class Circle : public Shapes
{
	double Radius;
public:
	Circle() = default;
	Circle(Point c, double radius, int r, int g, int b);
	void Draw(HDC h);
	virtual ~Circle() {};
};
