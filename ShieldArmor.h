#pragma once
#include "Defence.h"
#include "Weapon.h"


class ShieldArmor : public Defence{

public:
	ShieldArmor(double power);
	double def(Weapon* weapon);

};