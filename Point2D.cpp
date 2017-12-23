#include "Point2D.h"
#include <cmath>

Point2D::Point2D(double x, double y) : x{ x }, y{ y }  {}


double Point2D::getX() const{
	return  x;
}
double Point2D::getY() const{
	return y;
}

void Point2D::setX(double newX) {
	x = newX;
}

void Point2D::setY(double newY) {
	y = newY;
}
double Point2D::getDistFrom(const Point2D & aPoint) const
{
	const double x_diff = getX() - aPoint.getX();
	const double y_diff = getY() - aPoint.getY();
	return std::sqrt(x_diff * x_diff + y_diff * y_diff);
}