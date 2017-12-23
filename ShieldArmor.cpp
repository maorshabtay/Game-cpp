#include "ShieldArmor.h"
#include "Weapon.h"

ShieldArmor::ShieldArmor(double power) : Defence(power){}
double ShieldArmor::def(Weapon* weapon) {

	//no "isHeavy" check need to be done
	return power;

}

std::string ShieldArmor::getMyInstance() {
	return typeid(this).name;

}