#pragma once
#include "initItemPoint.h"

/***********************2DPoint*************************/

initItemPoint::initItemPoint(csv2vector* const csv)
:_csv(csv)
{
	numPlayer = csv->numPlayer;
	numSoldier = csv->numSoldier;
	initSoldierPoint();
	initObjectPoint();
}

void initItemPoint::initSoldierPoint() {
	players = new std::vector<std::vector<Point2D>*>;
	players->resize(numPlayer);
	unsigned i = 0, j = 0 ,k=0;
	for (i = 0; i < numPlayer; ++i) {
		(*players)[i] = new std::vector<Point2D>;
		for (j = 0; j < numSoldier; ++j) {
			(*players)[i] -> emplace_back(*stringToPoint(_csv->AllSoldiers[0][k][0][1]));
			k++;
		}
	}

	/*
	//print soldier's point on start of game
	for (std::vector<Point2D>* x : *players) {
		for (Point2D s : *x) {
			std::cout <<"[" << s.getX() << "," << s.getY() << "] ";
		}
		std::cout << std::endl;
	}
	*/
}
std::string initItemPoint::findLast(std::vector<std::string>* vector) {
	std::string ans;
	for (std::string s : *vector) {
		if (!s.empty())
			ans = s;
		else
			break;
	}
	return ans;
}
void initItemPoint::initObjectPoint() {
	objects = new std::vector<Point2D>;
	unsigned i = 0;
		for (i = 0; i < _csv->Objects->size(); ++i) {
			(objects)->emplace_back(*stringToPoint(findLast(_csv->Objects[0][i])));
			
		}
	/* 
	//print object 
		for (Point2D s : *objects) {
			std::cout << "[" << s.getX() << "," << s.getY() << "] ";

	}
	*/
}

Point2D* initItemPoint::stringToPoint(std::string s) {
	s.erase(s.begin(), s.begin() + 1);
	s.erase(s.end() - 1, s.end());
	std::string::size_type sz;     // alias of size_t
	double x = std::stod(s, &sz);
	double y = std::stod(s.substr(sz));
	Point2D* point =  new Point2D(x, y);
	return point;
}


/*
int main() {
	csv2vector* ccsv = new csv2vector();
	initItemPoint c (ccsv);
	
	system("pause");
	return 0;
}
*/
