#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
#include "csv2player.h"
#include "csv2vector.h"
#include "stepSoldier.h"
#include "playersStep.h"
#include <vector>

class startGame {

public:
	csv2vector* csv;
	playersStep* ps;
	stepSoldier* step;
	std::ofstream outputFile;

	startGame(std::string, std::string);
	std::string isWeapon(Weapon*);
	std::string witchSoldier(Soldier* s);
};