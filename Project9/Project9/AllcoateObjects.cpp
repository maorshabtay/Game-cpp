#pragma once
#include "AllcoateObjects.h"
using namespace std;
AllcoateObjects::AllcoateObjects(csv2vector* csv) {
	armorsObjVec = new std::vector<Defence*>;
	weaponsObjVec= new std::vector<Weapon*>;
	solidsObjVec = new std::vector<Solid*>;
	buildObjVec(csv);
}

void AllcoateObjects::buildObjVec(csv2vector* csv) {
	int i = 0;
	for (i = 0; i < csv->Objects[0].size(); ++i) {
		std::string type = (*csv->Objects[0][i])[0];
		if (type._Equal("weapon")) {
			buildWeapon((csv->Objects[0][i]));
		}
		else if (type._Equal("Armor")) {
			buildDefence((csv->Objects[0][i]));
		}
		else {
			buildSolid((csv->Objects[0][i]));
		}
	}
}

void AllcoateObjects::buildDefence(std::vector<std::string>* bD) {
	double s2d = std::stod((*bD)[2]);
	if ((*bD)[1]._Equal("BodyArmor")) {
		armorsObjVec ->emplace_back (new BodyArmor(s2d));
	}
	else {
		armorsObjVec->emplace_back( new ShieldArmor(s2d));
	}
}

void AllcoateObjects::buildWeapon(std::vector<std::string>* bW) {
	if ((*bW)[1]._Equal("M16")) {
		weaponsObjVec->emplace_back(new M16());
	}
	else if ((*bW)[1]._Equal("Missle")) {
		weaponsObjVec->emplace_back(new Missle());
	}
	else {
		weaponsObjVec->emplace_back(new Uzi());
	}

}
void AllcoateObjects::buildSolid(std::vector<std::string>* bS) {
	solidsObjVec->emplace_back(new Solid((*bS)[1], std::stod((*bS)[2]), std::stod((*bS)[3]), *(stringToPoint((*bS)[4]))));
}

Point2D* AllcoateObjects::stringToPoint(std::string s) {
	s.erase(s.begin(), s.begin() + 1);
	s.erase(s.end() - 1, s.end());
	std::string::size_type sz;     // alias of size_t
	double x = std::stod(s, &sz);
	double y = std::stod(s.substr(sz));
	Point2D* point = new Point2D(x, y);
	return point;
}
