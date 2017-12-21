#include "Uzi.h"

Uzi::Uzi() : Weapon(40, 3, false)
{

}



std::string Uzi::getMyInstance()
{
	return  typeid(this).name();
}
