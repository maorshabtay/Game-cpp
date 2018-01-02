#pragma once
#include "Solid.h"

Solid::Solid(std::string name, double w, double h, Point2D p)
	: name(name), width(w), height(h), p(p),rU(((0.5*width) + p.getX()), ((0.5*height) + p.getY())),rD(((0.5*width) + p.getX()), (p.getY() - (0.5*height))),
	lD((p.getX() - (0.5*width)), (p.getY() - (0.5*height))),lU((p.getX() - (0.5*width)), ((0.5*height) + p.getY()))
{}

bool Solid::isBlock( Point2D& other) {
	if (other.getX() < rU.getX() && other.getX() > lU.getX() && other.getY() > lD.getY() && other.getY() < lU.getY())
			return false;
	
	return true;
}

Point2D Solid::closePoint(Point2D& other) {
	if (!isBlock(other)) {
		Point2D newP (lD.getX() - 1, lD.getY() - 1);
		return newP;
	}
	return other;
}
std::string Solid::getName() {
	return name;
}