#include "BodyArmor.h"
#include "Weapon.h"

BodyArmor::BodyArmor(double power) : Defence( power ) {}
double BodyArmor::def(Weapon* weapon) {

	// if the weapon is heavy weapon that BodyArmor wont help
	if (weapon->isHeavy) {
		return 1;
	}
	else {
		return power;
	}
}