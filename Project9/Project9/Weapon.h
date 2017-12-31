#pragma once
#include <string>
class Weapon
{
public:
	Weapon(int power,int shooting,bool isHeavy) ;
	virtual std::string getMyInstance() = 0;

	int power;
	int shooting;
	bool isHeavy;
};

