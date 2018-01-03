#include "Point2D.h"
#include "Weapon.h"
#include "AllcoateObjects.h"
#include "AllcoateSoldiers.h"
#include "Uzi.h"
#include "iostream"
#include <typeinfo> 
#include "Solid.h"
#include <stdio.h>
#include "stepSoldier.h"
#include "startGame.h"
using namespace std;

int main(int argc, char * argv[]) {
	/*
	Point2D* p = new Point2D(34.2, 234.4);
	//cout << p->getY() << endl;
	Uzi* w  = new Uzi();

	Point2D d1 (0, 0);
	Solid t("Tree", 4, 4, d1);
	Point2D d2(1, 1);
	Point2D d3(4, 4);
	cout << t.isBlock(d3) << " ";
	cout <<"[" << t.closePoint(d3).getX() <<"," <<t.closePoint(d3).getY() << "] ";
	cout << t.isBlock(d2) << " ";
	cout << "[" << t.closePoint(d2).getX() << "," << t.closePoint(d2).getY() << "] ";
	//cout << w->getMyInstance() << endl;
	*/
	std::string s1 = "init_file_example.csv";
	std::string s2 = "player1_file_example.csv";

	startGame s(s1,s2);
/*	csv2vector csv;
	AllcoateSoldiers* S = new AllcoateSoldiers(&csv);
	AllcoateObjects* O = new AllcoateObjects(&csv);
	initItemPoint* P = new initItemPoint(&csv);

	stepSoldier ss(S,O,P);*/
	system("pause");
	return 0;
}