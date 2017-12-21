#pragma once
#include <string>
class Weapon
{
public:
	Weapon()  ;
	virtual std::string getMyInstance() = 0;
	
protected:
	int power;
	int shooting;
	bool isHeavy;
};

