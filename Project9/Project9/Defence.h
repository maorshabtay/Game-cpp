#pragma once
#include "Weapon.h"
#include <string>

class Defence {
protected:
	double power;
public:
	virtual double def(Weapon* weapon) = 0;
	virtual const std::string getMyInstance() = 0;

	Defence(double power);
};