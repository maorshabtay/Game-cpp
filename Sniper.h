#pragma once
#include "Soldier.h"
class Sniper :	public Soldier{

	
public:
	const std::string getMyInstance();
	int attack(double distance);
	Point2D walk(Point2D from, Point2D to);
	Sniper( int life, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor);
	int Random(double dis);
	bool canIRun(Point2D from, Point2D to);

};

