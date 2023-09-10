#pragma once
#include "framework.h"
#include "Point.h"

class Shapes
{
protected:
	Point P;
	double Orientation;
	int R;
	int G;
	int B;
public:
	Shapes() = default;
	Shapes(Point p);
	Shapes(Point p, double orientation);
	Shapes(Point p, double orientation, int r, int b, int g);
	void Move(int deltaX, int deltaY, double deltaOrientation);
	virtual void Draw(HDC h) = 0; //pure virtual function => abstract
	virtual ~Shapes() {};
};
