#include "Paramedic.h"


const std::string Paramedic::getMyInstance() {
	return  typeid(this).name();
}
int Paramedic::attack(double distance) {
	return 10;
}
Point2D Paramedic::walk(Point2D from, Point2D to) {
	//TODO - use speed as 2
	double distance = this->speed;
	double fi = atan2(to.getY() - from.getY(), to.getX() - from.getX());

	// Your final point
	double final_x = from.getX() + distance * cos(fi);
	double final_y = from.getY() + distance * sin(fi);

	return Point2D(final_x, final_y);

}
Paramedic::Paramedic(int life, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor) :
	Soldier(120, life, 2, myWeapon, myBodyArmor, myShieldArmor) {

}

void Heal(Soldier* soldier) {
	soldier->life = soldier->maxLife; //healing back to the original maxLife;
}