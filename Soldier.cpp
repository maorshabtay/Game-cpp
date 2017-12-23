
#include "Soldier.h"


Soldier::Soldier(int life, int speed, Weapon* myWeapon, BodyArmor* myBodyArmor, ShieldArmor* myShieldArmor) : life{ life }, speed{ speed }, myWeapon{ myWeapon },
myBodyArmor{ myBodyArmor }, myShieldArmor{ myShieldArmor }
{
}
