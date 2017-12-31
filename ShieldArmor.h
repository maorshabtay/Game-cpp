#pragma once
#include "Defence.h"
#include "Weapon.h"


class ShieldArmor : public Defence{

public:


	const std::string getMyInstance();
		

	ShieldArmor(double power);
	double def(Weapon* weapon);

};