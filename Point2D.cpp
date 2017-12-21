#include "Point2D.h"

Point2D::Point2D(double x, double y) : x{ x }, y{ y }  {}


double Point2D::getX() {
	return x;
}
double Point2D::getY() {
	return y;
}

void Point2D::setX(double newX) {
	x = newX;
}

void Point2D::setY(double newY) {
	y = newY;
}