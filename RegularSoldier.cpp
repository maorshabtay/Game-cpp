#include "RegularSoldier.h"



RegularSoldier::RegularSoldier(int life, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor):
							   Soldier(life, 2, myWeapon,  myBodyArmor, myShieldArmor)
{

}

Point2D RegularSoldier::walk(Point2D from, Point2D to) {
	if (canIRun(from, to)) {
		//TODO - USE SPEED AS 4;
	}
	else{ 
		//TODO - use speed as 2
	}

	return Point2D(NULL,NULL); // NEED TO BE REMOVE JUST FOR COMPILATION
}

bool RegularSoldier::canIRun(Point2D from, Point2D to) {

	if (from.getDistFrom(to) > (speed * 4)) return true;
	else return false;

}

std::string RegularSoldier::getMyInstance() {
	return typeid(this).name;

}

void RegularSoldier::attack(double distance){



}