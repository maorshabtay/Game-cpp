#include "Paramedic.h"


const std::string Paramedic::getMyInstance() {
	return  typeid(this).name();
}
void Paramedic::attack(double distance) {
	// need to be rewrite
}
Point2D Paramedic::walk(Point2D from, Point2D to) {
	return Point2D(NULL, NULL);

}
Paramedic::Paramedic(int life, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor):
	Soldier(120,life, 2, myWeapon, myBodyArmor, myShieldArmor) {

}

void Heal(Soldier* soldier) {
	soldier->life = soldier->maxLife; //healing back to the original maxLife;
}

