#include "RegularSoldier.h"
#include <math.h>


RegularSoldier::RegularSoldier(int life, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor):
							   Soldier(100,life, 2, myWeapon,  myBodyArmor, myShieldArmor)
{

}


Point2D RegularSoldier::walk(Point2D from, Point2D to) {
		//TODO - use speed as 4
	if (canIRun(from, to)) {	
		
		double distance = 2*this->speed;
		double fi = atan2(to.getY() - from.getY(), to.getX() - from.getX());

		// Your final point
		double final_x = from.getX() + distance * cos(fi);
		double final_y = from.getY() + distance * sin(fi);




		return Point2D((final_x)*(final_x), final_y*final_y);
	}
	else{ 
		//TODO - use speed as 2
		double distance = this->speed;
		double fi = atan2(to.getY() - from.getY(), to.getX() - from.getX());

		// Your fi	nal point
		double final_x = from.getX() + distance * cos(fi);
		double final_y = from.getY() + distance * sin(fi);

		return Point2D((final_x)*(final_x), final_y*final_y);
	}
}





bool RegularSoldier::canIRun(Point2D from, Point2D to) {

	if (from.getDistFrom(to) > (speed * 4) || this->life <30) return true;
	else return false;

}

 const std::string RegularSoldier::getMyInstance() {
	return  typeid(this).name();

}

int RegularSoldier::attack(double distance){

		if (myWeapon != nullptr) {
			if (Random(distance)) return myWeapon->power;
		}
		return 0;
	}



int RegularSoldier::Random(double dis) {

	if (dis == 0) return 1;

	double chance = (1.0/dis);
	if (chance > ((double)rand() / (RAND_MAX))) {
		return 1;
	}
	else {
		return 0;
	}

}