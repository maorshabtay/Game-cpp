#pragma once
#include "Weapon.h"
class Soldier {
	protected:

		int life;
		int speed;
		Weapon* myWeapon;
		BodyArmor* myBodyArmor;
		ShieldArmor* myShieldArmor;

		virtual void attack() = 0;

	protected:
		Soldier(life, speed,) {
			
		}
};


