#pragma once

class Point
{
	int X;
	int Y;
public:
	Point() = default;
	Point(int x, int y);
	int GetX();
	int GetY();
	void SetX(int x);
	void SetY(int y);
	Point GetPoint();
	~Point() {};
};
