#pragma once
#include "Shapes.h"

class Line : public Shapes
{
protected:
	double Length;
public:
	Line() = default;
	Line(Point p, double length, double orientation, int r, int g, int b);
	double GetLength();
	double GetAngle();
	Point GetStart();
	Point GetEnd();
	void SetStart(Point p);
	void Draw(HDC h);
	virtual ~Line() {};
};