#include "Map.h"

Map::Map(csv2vector* csv) :csv(csv) {
	x = csv->map[0][0];
	y = csv->map[0][1];
}

double Map::getX() const {
	return x;
}

double Map::getY() const {
	return y;
}