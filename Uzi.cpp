#include "Uzi.h"

Uzi::Uzi()
{
}


Uzi::~Uzi()
{
}


std::string Uzi::getMyInstance()
{
	return  typeid(this).name();
}
