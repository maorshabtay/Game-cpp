#pragma once
#include "AllcoateSoldiers.h"
#include "AllcoateObjects.h"
#include "initItemPoint.h"
#include <math.h>
#include "map.h"

class stepSoldier {

public:
	Map* m;
	AllcoateSoldiers* allSoldiers;
	AllcoateObjects* allObjects;
	initItemPoint* allPoint;
	stepSoldier(AllcoateSoldiers* , AllcoateObjects*, initItemPoint*, std::string);
	void walkSoldier(int i, int j, Point2D);
	void searchObjects(int i, int j);
	void attackSoldier(int i, int j);
	
	double distance(Point2D p1, Point2D p2);
	void makeStep(int i, int j, Point2D p);

};