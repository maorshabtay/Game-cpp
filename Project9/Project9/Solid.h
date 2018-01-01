#pragma once
#include <string>
#include "Point2D.h"

class Solid  {

private:
	std::string name;
	double width;
	double height;
	Point2D rU, rD, lU, lD;
	Point2D p;

public:
	Solid(std::string, double, double, Point2D);
	bool isBlock( Point2D&);
	Point2D closePoint(Point2D& other);
	std::string getName();
};