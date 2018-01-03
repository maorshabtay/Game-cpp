#include "stepSoldier.h"

stepSoldier::stepSoldier(AllcoateSoldiers* allSoldiers, AllcoateObjects* allObjects, initItemPoint* allPoint, std::string s) 
	:allSoldiers(allSoldiers), allObjects(allObjects), allPoint(allPoint)
{
	m = new Map(new csv2vector(s));
}
void stepSoldier::makeStep(int i, int j , Point2D p) {
	Soldier* s = (allSoldiers->players[0][i])[0][j];
	if (s->life <= 0) {
		s->life = 0;
		return;
	}
	walkSoldier(i,j, p);
	searchObjects(i, j);
	attackSoldier(i, j);
	
}

void stepSoldier::walkSoldier(int i, int j, Point2D p) {
	Soldier* s = (allSoldiers->players[0][i])[0][j];
	Point2D soldierPoint = (allPoint->players[0][i])[0][j];
	(allPoint->players[0][i])[0][j] = s->walk(soldierPoint, p);
	for (size_t k = 0; k < allObjects->solidsObjVec->size(); k++)
	{
		(allPoint->players[0][i])[0][j] = allObjects->solidsObjVec[0][k]->closePoint((allPoint->players[0][i])[0][j]);
	}
	if ((allPoint->players[0][i])[0][j].getX() > m->getX()) (allPoint->players[0][i])[0][j].setX(m->getX());
	if ((allPoint->players[0][i])[0][j].getY() > m->getY()) (allPoint->players[0][i])[0][j].setY(m->getY());
	if ((allPoint->players[0][i])[0][j].getX() < 0) (allPoint->players[0][i])[0][j].setX(0);
	if ((allPoint->players[0][i])[0][j].getY() < 0) (allPoint->players[0][i])[0][j].setY(0);
}



void stepSoldier::searchObjects(int i, int j) {
	Soldier* s = (allSoldiers->players[0][i])[0][j];
	if (!(s->getMyInstance()==typeid(Paramedic*).name())) {
	for (int k = 0; k < allObjects->weaponsObjVec->size(); ++k) {
		if (distance((allPoint->players[0][i])[0][j], allPoint->weaponsPoint[0][k]) <= 2) {
			Weapon* temp = s->myWeapon;
			if (temp != nullptr) {
				allObjects->weaponsObjVec[0][k] = temp;
			}
			else{
				allObjects->weaponsObjVec[0].erase(allObjects->weaponsObjVec[0].begin() + k);
			}
			s->myWeapon = allObjects->weaponsObjVec[0][k];
		}
	}
}
	BodyArmor* ba = s->myBodyArmor;
	ShieldArmor* sa = s->myShieldArmor;
	for (int k = 0; k < allObjects->armorsObjVec->size() ; ++k) {
		if (distance((allPoint->players[0][i])[0][j], allPoint->armorPoint[0][k]) <= 2 ) {
			if ((allObjects->armorsObjVec[0])[k]->getMyInstance()==(typeid(BodyArmor*).name()) ) {
				
					BodyArmor* temp = s->myBodyArmor;
					s->myBodyArmor = (BodyArmor*)allObjects->armorsObjVec[0][k];
					allObjects->armorsObjVec[0][k] = temp;
					allObjects->armorsObjVec[0].erase(allObjects->armorsObjVec[0].begin() + k);
					break;
				
			}
			if (allObjects->armorsObjVec[0][k]->getMyInstance()==(typeid(ShieldArmor*).name()) && sa == nullptr) {
				
					ShieldArmor* temp = s->myShieldArmor;
					s->myShieldArmor = (ShieldArmor*)allObjects->armorsObjVec[0][k];
					allObjects->armorsObjVec[0].erase(allObjects->armorsObjVec[0].begin() + k);
					break;
				
			}
		}
	}
	
}



void stepSoldier::attackSoldier(int i, int j ) {
	bool flag = 0;
	int p = 0, k = 0;
	Soldier* s = (allSoldiers->players[0][i])[0][j];
	for ( k = 0; k < allSoldiers->players->size() && !flag; ++k) {
		for ( p = 0; p < allSoldiers->players[0][k]->size() && !flag; ++p) {
			if (k != i) {
				if (distance((allPoint->players[0][i])[0][j], (allPoint->players[0][k])[0][p]) <= 2) {
					if ((allSoldiers->players[0][k])[0][p]->life > 0){
						flag = 1;
						int shoot = s->attack(distance((allPoint->players[0][i])[0][j], (allPoint->players[0][k])[0][p]));
						(allSoldiers->players[0][k])[0][p]->life -= shoot;
						if ((allSoldiers->players[0][k])[0][p]->life < 0) 
							(allSoldiers->players[0][k])[0][p]->life = 0;
					}
				}
				else if ((distance((allPoint->players[0][i])[0][j], (allPoint->players[0][k])[0][p]) <= 4)) {
					if (s->getMyInstance()==(typeid(Paramedic*).name()), j != p) {
						s->life = s->maxLife;
					}
				}

			}
		}
	}
}



inline double stepSoldier::distance(Point2D p1, Point2D p2) {
	return sqrt((p1.getX() - p2.getX()) * (p1.getX() - p2.getX()) + (p1.getY() - p2.getY()) *(p1.getY() - p2.getY()));
}