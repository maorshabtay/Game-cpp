#pragma once
#include "Point2D.h"
#include "Weapon.h"
#include "AllcoateObjects.h"
#include "AllcoateSoldiers.h"
#include "Uzi.h"
#include "iostream"
#include <typeinfo> 
#include "Solid.h"
#include "Paramedic.h"
#include "Sniper.h"
#include "Point2D.h"
#include "RegularSoldier.h"
#include "Soldier.h"
#include "vector"

using namespace std;

class Visitor {

	/*Soldiers*/
	virtual string visit(Soldier* sol) = 0;
	/*Point*/
	virtual string visit(Point2D* p) = 0;

};