#pragma once
#include "Weapon.h"

class Defence {
protected:
	double power;
public:
	virtual double def(Weapon* weapon) = 0;

	Defence(double power);
};