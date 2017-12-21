#pragma once

#include "Weapon.h"
class Uzi :
	public Weapon
{
public:
	Uzi();
	~Uzi();
	std::string getMyInstance();
};
