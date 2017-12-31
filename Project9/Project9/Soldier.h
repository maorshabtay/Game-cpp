#pragma once
#include "Weapon.h"
#include "BodyArmor.h"
#include "ShieldArmor.h"
#include "Point2D.h"
#include <string>

class Soldier {
	public:

		int maxLife;
		int life;
		int speed;
		Weapon* myWeapon;
		BodyArmor* myBodyArmor;
		ShieldArmor* myShieldArmor;

		virtual void attack(double distance) = 0;
		virtual Point2D walk(Point2D from, Point2D to) = 0;
		virtual const std::string getMyInstance() = 0;

	protected:

	Soldier(int maxLife, int life, int speed, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor);
};


