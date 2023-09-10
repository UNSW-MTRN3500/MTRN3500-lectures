#include "Robot.h"

Robot::Robot(Point base, std::vector<LinkProperties> data):Base(base)
{
	int n = (int)data.size();
	Links.resize(n);
	int i = 0;
	for (std::vector<LinkProperties>::iterator it = data.begin(); it != data.end(); it++)
	{
		Links[i++] = new Link(Point(0, 0), it->Length, it->Angle, it->HubDiameter, it->Red, it->Green, it->Blue);
	}
}

void Robot::Draw(HDC h)
{
	Point P;
	Links[0]->SetStart(Base);
	Links[0]->Draw(h);
	for (std::vector<Link*>::iterator it = Links.begin()+1; it != Links.end(); it++)
	{
		P = (*(it - 1))->GetEnd();
		(*it)->SetStart(P);
		(*it)->Draw(h);
	}
}

void Robot::Move(std::vector<double> delta_angles)
{
	int i = 0;
	for (std::vector<double>::iterator it = delta_angles.begin(); it < delta_angles.end(); it++)
	{
		Links[i++]->Move(0, 0, *it);
	}
}

Robot::~Robot()
{
	for (std::vector<Link*>::iterator it = Links.begin(); it < Links.end(); it++)
	{
		delete (*it);
	}
}


std::ostream& operator<<(std::ostream& os, const Robot& r)
{
	Point P;
	int n = r.Links.size();
	P = r.Links[n - 1]->GetEnd();
	os << P.GetX() << " " << P.GetY() << " ";
	return os;
}