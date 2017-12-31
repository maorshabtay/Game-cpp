#pragma once
#include "Soldier.h"
					
class Player {

public:
	int numOfSoldiers;
	Soldier* solArr;

	Player(int numOfSoldiers, Soldier* arr);
	virtual ~Player() = 0;

};