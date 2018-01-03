#pragma once
#include "csv2player.h"
#include <vector>

class playersStep {

public:
	std::vector<csv2player*>* vecStep;

	playersStep();
	void insertPlayerStep(csv2player*);
};