#pragma once
#include "Weapon.h"
#include "BodyArmor.h"
#include "ShieldArmor.h"
#include "Point2D.h"
#include "Element.h"
//#include "Taxvisitor.h"
#include <string>
//#include "TaxVisitor.h"
class Soldier  {

public:

	int maxLife;
	int life;
	int speed;
	Weapon* myWeapon;
	BodyArmor* myBodyArmor;
	ShieldArmor* myShieldArmor;
	//Visitor* v;




	virtual int attack(double distance) = 0;
	virtual Point2D walk(Point2D from, Point2D to) = 0;
	virtual const std::string getMyInstance() = 0;
//	virtual std::string Visit(Visitor* v);

protected:

	Soldier(int maxLife, int life, int speed, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor);
};