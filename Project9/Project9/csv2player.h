#ifndef CSV2PLAYER_H
#define CSV2PLAYER_H
#include <fstream>
#include <iostream>
#include<sstream>
#include<vector>
#include "Point2D.h"
class csv2player
{
public:
	std::vector <std::vector<Point2D>>* playerMovesPoint;

	csv2player();
	std::vector <std::vector<Point2D>>* csv2player::csvToVector(std::string file);
	Point2D* csv2player::stringToPoint(std::string s);

};

#endif