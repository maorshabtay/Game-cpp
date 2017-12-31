#pragma once
#include "Point2D.h"
#include "csv2vectors.h"
#include <string>

class initItemPoint {
protected:
	csv2vector* _csv;
	int numPlayer;
	int numSoldier;
	std::vector<std::vector<Point2D>*>* players;
	std::vector<Point2D>* objects;
public:

	initItemPoint(csv2vector* const);
	Point2D* stringToPoint(std::string s);
	std::string initItemPoint::findLast(std::vector<std::string>* vector);
	void initSoldierPoint();
	void initObjectPoint();

};