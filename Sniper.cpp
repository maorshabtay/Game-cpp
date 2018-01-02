#include "Sniper.h"



int Sniper::Random(double dis) {

	if (dis == 0) return 1;

	double chance = ((dis - 1.0) / dis);
	if (chance > ((double)rand() / (RAND_MAX))) {
		return 1;
	}
	else {
		return 0;
	}

}

Sniper::Sniper(int life, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor)
	: Soldier(80, life, 2, myWeapon, myBodyArmor, myShieldArmor)
{

}



const std::string Sniper::getMyInstance() {
	return  typeid(this).name();

}

int Sniper::attack(double distance) {
	if(myWeapon != nullptr){
		if (Random(distance)) return myWeapon->power; 
	}
	return 0;
}


bool Sniper::canIRun(Point2D from, Point2D to) {

	if (this->life <30) return true;
	else return false;

}

Point2D Sniper::walk(Point2D from, Point2D to) {
	
	if (canIRun(from, to)) {

		double distance = 2 * this->speed;
		double fi = atan2(to.getY() - from.getY(), to.getX() - from.getX());

		// Your final point
		double final_x = from.getX() + distance * cos(fi);
		double final_y = from.getY() + distance * sin(fi);

		return Point2D(final_x, final_y);
	}
	else {
		//TODO - use speed as 2
		double distance = this->speed;
		double fi = atan2(to.getY() - from.getY(), to.getX() - from.getX());

		// Your final point
		double final_x = from.getX() + distance * cos(fi);
		double final_y = from.getY() + distance * sin(fi);

		return Point2D(final_x, final_y);
	}

	
}

