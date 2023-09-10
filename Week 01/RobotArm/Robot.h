#pragma once
#include "Point.h"
#include "Link.h"
#include <iostream>
#include <fstream>
#include <vector>

struct LinkProperties
{
	double Length;
	double Angle;
	double HubDiameter;
	int Red;
	int Green;
	int Blue;
};

class Robot
{
	Point Base;
	std::vector<Link*> Links;
public:
	Robot() = default;
	Robot(Point base, std::vector<LinkProperties> data);
	void Draw(HDC h);
	void Move(std::vector<double> angles);
	~Robot();
	friend std::ostream& operator<<(std::ostream& os, const Robot& r);
};




