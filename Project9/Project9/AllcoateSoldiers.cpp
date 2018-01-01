#include "AllcoateSoldiers.h"
using namespace std;
AllcoateSoldiers::AllcoateSoldiers(csv2vector* csv) {
	players = new std::vector<std::vector<Soldier*>*>;
	players->resize(csv->numPlayer);
	buildSoldier(csv);
}
void AllcoateSoldiers::buildSoldier(csv2vector* csv) {

	int i = 0, j = 0, k = 0;
	for (i = 0; i < csv->numPlayer; ++i) {
		(*players)[i] = new std::vector<Soldier*>;
		for (j = 0; j < csv->numSoldier; ++j) {
			//(*players)[k] = new std::vector<Soldier*>;
			if ((*csv->AllSoldiers[0][k])[0]._Equal("normal")){
				buildNormal(&(*csv->AllSoldiers[0][k]),i);
			}
			else if ((*csv->AllSoldiers[0][k])[0]._Equal("sniper")) {
				buildSniper(&(*csv->AllSoldiers[0][k]),i);
			}
			else {
				buildParamedic(&(*csv->AllSoldiers[0][k]),i);
			}
			k++;
		}
	}
}

Weapon* AllcoateSoldiers::buildWeapon(std::string w) {
	if (w._Equal("M16")) {
		return new M16();
	}
	else if (w._Equal("UZI")) {
		return new Uzi();
	}
	else {
		return new Missle();
	}
}

void AllcoateSoldiers::buildNormal(std::vector<std::string>* vec ,int i) {
	Weapon* w = buildWeapon((*vec)[2]);
	(*players)[i]->emplace_back(new RegularSoldier(100,w,nullptr, nullptr));
}
void AllcoateSoldiers::buildSniper(std::vector<std::string>* vec, int i) {
	Weapon* w = buildWeapon((*vec)[2]);
	(*players)[i]->emplace_back(new Sniper(80, w, nullptr, nullptr));

}
void AllcoateSoldiers::buildParamedic(std::vector<std::string>* vec, int i) {
	(*players)[i]->emplace_back(new Paramedic(120, nullptr, nullptr, nullptr));
}

