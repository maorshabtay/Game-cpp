#pragma once
#include "csv2vector.h"
class Map
{
private:
	double x;
	double y;
	csv2vector* csv;
public:

	Map(csv2vector*);
		

	double getX() const;

	double getY() const;


};