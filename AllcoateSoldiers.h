#pragma once
#include <vector>
#include "Soldier.h"
#include "csv2vector.h"
#include <string.h>
#include "RegularSoldier.h"
#include "Sniper.h"
#include "Paramedic.h"
#include "M16.h"
#include "Missle.h"
#include "Uzi.h"
class AllcoateSoldiers {

public:

	std::vector<std::vector<Soldier*>*>* players;

	AllcoateSoldiers(csv2vector* csv);
	void buildSoldier(csv2vector* csv);
	void buildNormal(std::vector<std::string>*, int);
	void buildSniper(std::vector<std::string>*, int);
	void buildParamedic(std::vector<std::string>*, int);
	Weapon* buildWeapon(std::string w);
};