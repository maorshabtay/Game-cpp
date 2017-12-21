#pragma once
#include "Defence.h"
class BodyArmor : public Defence {

public:
	BodyArmor(double power);
	double def(Weapon* weapon);


};
