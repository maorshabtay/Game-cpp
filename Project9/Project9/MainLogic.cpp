#include "Point2D.h"
#include "Weapon.h"
#include "AllcoateObjects.h"
#include "AllcoateSoldiers.h"
#include "Uzi.h"
#include "iostream"
#include <typeinfo> 
#include "Solid.h"

using namespace std;

int main() {
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
	csv2vector csv;
	AllcoateSoldiers A(&csv);
	for (std::vector<Soldier*>* arr: *A.players) {
		for (Soldier* s : *arr) {
			cout << s->getMyInstance() << " ";
		}
		cout << endl;

	}
	system("pause");
	return 0;
}