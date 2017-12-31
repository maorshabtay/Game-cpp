#include "BodyArmor.h"
#include "Weapon.h"

BodyArmor::BodyArmor(double power) : Defence( power ) {}

const std::string BodyArmor::getMyInstance() {
	return typeid(this).name();

}
double BodyArmor::def(Weapon* weapon) {

	// if the weapon is heavy weapon - BodyArmor wont help
	if (weapon->isHeavy) {
		return 1;
	}
	else {
		return power;
	}
}