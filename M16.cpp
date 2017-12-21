#include "M16.h"

M16::M16() : Weapon(50,1,false)
{

}



std::string M16::getMyInstance() {

	return  typeid(this).name();

}
