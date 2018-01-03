
#include "Soldier.h"


Soldier::Soldier(int maxLife, int life, int speed, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor) : maxLife{ maxLife }, life { life }, speed{ speed }, myWeapon{ myWeapon },
myBodyArmor{ myBodyArmor }, myShieldArmor{ myShieldArmor }
{
	
}
/*
std::string Soldier::Visit(Visitor* v) {
	v =new TaxVisitor();
	return v->visit(*this);
	}
*/