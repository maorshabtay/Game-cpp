#include "M16.h"

M16::M16()
{
}


M16::~M16()
{
}

std::string M16::getMyInstance() {

	return  typeid(this).name();

}
