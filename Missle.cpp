#include "Missle.h"

std::string Missle::getMyInstance(){

	return  typeid(this).name();
	
	}
Missle::Missle() : Weapon(100, 1, true) {

}
