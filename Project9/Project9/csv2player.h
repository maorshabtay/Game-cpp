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
	std::vector <std::vector<Point2D> >* playerMovesPoint;

	csv2player(std::string);
	std::vector <std::vector<Point2D> >* csvToVector(std::string file);
	Point2D* stringToPoint(std::string s);

};

#endif