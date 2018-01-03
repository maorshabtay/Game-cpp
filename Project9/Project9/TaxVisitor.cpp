
#include "Point2D.h"
#include <string>
#include "Soldier.h"
#include "TaxVisitor.h"

using namespace std;

    std::string TaxVisitor::visit(Soldier* sol){
		std::string instance = "Instance: " + sol->getMyInstance();
		std::string life = "life: " + to_string(sol->life);
		std::string  bodyArmor = "";
	if (sol->myBodyArmor != nullptr) {
		bodyArmor += "bodyArmor: " + sol->myBodyArmor->getMyInstance();
	}
	std::string shieldArmor = "";
	if (sol->myShieldArmor != nullptr) {
		shieldArmor += "ShieldArmor: " + sol->myShieldArmor->getMyInstance();
	}
	std::string weapon = "";
	if (sol->myWeapon != nullptr) {
		weapon += "Weapon: " + sol->myWeapon->getMyInstance();
	}

	return instance + life + bodyArmor + shieldArmor + weapon;

}


/*Points*/
std::string TaxVisitor::visit(Point2D* p) {

	string ans = "Point: [" + to_string(p->getX()) + "," + to_string(p->getY()) + "].";

	return ans;

}
