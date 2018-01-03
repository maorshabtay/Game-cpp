#include "startGame.h"
#include "Map.h"
#include <string>
startGame::startGame(std::string s, std::string s2) {
	csv = new csv2vector(s);
	ps = new playersStep();
	AllcoateSoldiers* allSoldiers = new AllcoateSoldiers(csv);
	AllcoateObjects* allObjects = new AllcoateObjects(csv);
	initItemPoint* allPoint = new initItemPoint(csv);
	ps->insertPlayerStep(new csv2player(s2));
	step = new stepSoldier(allSoldiers, allObjects, allPoint,s);
	
	for (int i = 0; i < ps->vecStep[0][0]->playerMovesPoint->size(); ++i) {
		for (int j = 0; j < csv->typePlayer->size(); j++) {
			for (int k = 0; k < csv->numSoldier; ++k)
				if (csv->typePlayer[0][j]._Equal("human")) {
					step->makeStep(j, k, ps->vecStep[0][j]->playerMovesPoint[0][i][k]);
					std::cout << csv->typePlayer[0][j] << ": " << step->allSoldiers->players[0][j][0][k]->getMyInstance() << "    " << step->allSoldiers->players[0][j][0][k]->life << " -- [" << step->allPoint->players[0][j][0][k].getX() << "," << step->allPoint->players[0][j][0][k].getY() << "]" << std::endl;
				}
				else {
					step->makeStep(j, k, Point2D(0, 0));
					std::cout << csv->typePlayer[0][j] << ": " << step->allSoldiers->players[0][j][0][k]->getMyInstance() << "    " << step->allSoldiers->players[0][j][0][k]->life << " -- [" << step->allPoint->players[0][j][0][k].getX() << "," << step->allPoint->players[0][j][0][k].getY() << "]" << std::endl;
				}
	}
	}
	bool flag = false;
	int counter = 0;
	std::string winner = "";

		// create a name for the file output
		std::string filename = "exampleOutput.csv";

	//Visitor v = new TexVisitor();
	outputFile.open("outPutFileGame.csv");
	for (int i = 0; i < csv->numPlayer; i++) {
		outputFile << csv->typePlayer[0][i] + " " + std::to_string(i) << " \n";
		std::cout << csv->typePlayer[0][i] + " " + std::to_string(i) << " " << std::endl;
		for (int j = 0; j < csv->numSoldier; ++j) {
			outputFile << witchSoldier(step->allSoldiers->players[0][i][0][j]) << "," << step->allSoldiers->players[0][i][0][j]->life << "," << "[" << step->allPoint->players[0][i][0][j].getX() << "." << step->allPoint->players[0][i][0][j].getX() << "]" << ","<< isWeapon(step->allSoldiers->players[0][i][0][j]->myWeapon) << "\n";
		//	std::cout <<  step->allSoldiers->players[0][i][0][j]->Visit(v) << " " << step->allPoint->players[0][i][0][j].Visit(v) << std::endl;
			if (step->allSoldiers->players[0][i][0][j]->life > 0) {
				flag = true;
			}
		}
			if (flag) {
				counter++;
				winner = csv->typePlayer[0][i] +" " + std::to_string(i);
			}
		flag = false;
		outputFile  << " \n";
	}
		if (counter == 1) {
			outputFile << "The Winner is : " << winner;
			std::cout << "The Winner is : " << winner << std::endl;
		}
		else {
			outputFile << "No winner! ";
			std::cout << "No winner! " << std::endl;
		}
		outputFile.close();
	system("pause");
}

std::string startGame::isWeapon(Weapon* w) {
	if (w != nullptr) {
		if (w->getMyInstance()._Equal(typeid(M16*).name())) return "M16";
		else if (w->getMyInstance()._Equal(typeid(Missle*).name())) return "Missle";
		else if (w->getMyInstance()._Equal(typeid(Uzi*).name())) return "UZI";
		return "";
	}
	else
		return " ";
}

std::string startGame::witchSoldier(Soldier* s) {
		if (s->getMyInstance()._Equal(typeid(RegularSoldier*).name())) return "RegularSoldier";
		else if (s->getMyInstance()._Equal(typeid(Sniper*).name())) return "Sniper";
		else return "Paramedic";
	return " ";
}