#pragma once
#include "Weapon.h"
#include "BodyArmor.h"
#include "ShieldArmor.h"
#include "Point2D.h"

class Soldier {
	public:

		int life;
		int speed;
		Weapon* myWeapon;
		BodyArmor* myBodyArmor;
		ShieldArmor* myShieldArmor;

		virtual void attack(double distance) = 0;
		virtual Point2D walk(Point2D from, Point2D to) = 0;
		virtual std::string getMyInstance() = 0;

	protected:
	Soldier(int life, int speed, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor);
};


