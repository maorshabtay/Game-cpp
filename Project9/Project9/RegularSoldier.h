#pragma once
#include "Soldier.h"
class RegularSoldier :	public Soldier {

public:
	const std::string getMyInstance();
	void attack(double distance);
	Point2D walk(Point2D from, Point2D to);
	RegularSoldier(int life, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor);

private:
	bool canIRun(Point2D from, Point2D to);
	
};

