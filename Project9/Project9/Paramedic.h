#pragma once
#include "Soldier.h"
class Paramedic : public Soldier {
public:

	const std::string getMyInstance();
	int attack(double distance);
	Point2D walk(Point2D from, Point2D to);
	Paramedic(int life, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor);

	void Heal(Soldier* soldier);

};