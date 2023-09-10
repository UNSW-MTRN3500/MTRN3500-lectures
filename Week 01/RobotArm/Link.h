#pragma once
#include "Line.h"

class Link : public Line
{
	double HubRadius;
public:
	Link() = default;
	Link(Point p, double length, double angle, double radius, int r, int g, int b) :Line(p, length, angle, r, g, b)
	{
		HubRadius = radius;
	}
	void Draw(HDC h);
	virtual ~Link() {};
};
