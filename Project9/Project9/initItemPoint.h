#pragma once
#include "Point2D.h"
#include "csv2vector.h"
#include <string>

class initItemPoint {
public:
	csv2vector* _csv;
	int numPlayer;
	int numSoldier;
	std::vector<std::vector<Point2D>*>* players;
	std::vector<Point2D>* objects;
	std::vector<Point2D>* weaponsPoint;
	std::vector<Point2D>* armorPoint;



	initItemPoint(csv2vector* const);
	Point2D* stringToPoint(std::string s);
	std::string initItemPoint::findLast(std::vector<std::string>* vector);
	void initSoldierPoint();
	void initObjectPoint();

};