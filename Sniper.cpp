#include "Sniper.h"



Sniper::Sniper(int life, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor)
	: Soldier(80, life, 2, myWeapon, myBodyArmor, myShieldArmor)
{

}



const std::string Sniper::getMyInstance() {
	return  typeid(this).name();

}

void Sniper::attack(double distance) {

}
Point2D Sniper::walk(Point2D from, Point2D to) {
	return  Point2D(NULL, NULL);
}
