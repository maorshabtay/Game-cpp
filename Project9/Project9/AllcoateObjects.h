#pragma once
#include <vector>
#include "csv2vector.h"
#include "Defence.h"
#include "Weapon.h"
#include "M16.h"
#include "Missle.h"
#include "Uzi.h"
#include "BodyArmor.h"
#include "ShieldArmor.h"
#include"stdio.h"
#include "Solid.h"

class AllcoateObjects {
public:

	std::vector<Defence*>* armorsObjVec;
	std::vector<Weapon*>* weaponsObjVec;
	std::vector<Solid*>* solidsObjVec;

	AllcoateObjects(csv2vector* csv);
	void buildObjVec(csv2vector* csv);
	void buildDefence(std::vector<std::string>*);
	void buildWeapon(std::vector<std::string>*);
	void buildSolid(std::vector<std::string>* );
	Point2D* stringToPoint(std::string s);
};