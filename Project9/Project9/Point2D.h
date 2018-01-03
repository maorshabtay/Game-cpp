#ifndef POINT2D_H
#define POINT2D_H
//#include "TaxVisitor.h"
//#include "Element.h"

class Point2D {

private:
	double x;
	double y;
	
public:
	
	Point2D(double x, double y);

	Point2D(const Point2D&);

	double getX() const;

	double getY() const;

	void setX(double newX);

	void setY(double newY);

	double getDistFrom(Point2D & aPoint);

	//std::string Point2D::accept(Visitor &v);
//	std::string Visit(Visitor* v);
};






#endif