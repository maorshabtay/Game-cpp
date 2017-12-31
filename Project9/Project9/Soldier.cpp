
#include "Soldier.h"


Soldier::Soldier(int maxLife, int life, int speed, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor) : maxLife{ maxLife }, life { life }, speed{ speed }, myWeapon{ myWeapon },
myBodyArmor{ myBodyArmor }, myShieldArmor{ myShieldArmor }
{
}
