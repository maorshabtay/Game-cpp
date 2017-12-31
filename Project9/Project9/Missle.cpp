#include "Missle.h"

Missle::Missle() : Weapon(100, 1, true) {

}
std::string Missle::getMyInstance(){

	return  typeid(this).name();
	
	}
