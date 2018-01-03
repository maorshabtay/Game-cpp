#include "playersStep.h"



playersStep::playersStep() {
	vecStep = new std::vector<csv2player*>;

}
void playersStep::insertPlayerStep(csv2player* csv) {
	vecStep->emplace_back(csv);

}