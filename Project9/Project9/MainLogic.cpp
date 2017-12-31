#include "Point2D.h"
#include "Weapon.h"
#include "Uzi.h"
#include "iostream"
#include <typeinfo>   

using namespace std;

int main() {

	Point2D* p = new Point2D(34.2, 234.4);
	cout << p->getY() << endl;
	Uzi* w  = new Uzi();


	
	cout << w->getMyInstance() << endl;
	system("pause");
	return 0;
}