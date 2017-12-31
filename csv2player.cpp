#ifndef CSV2PLAYER_CPP
#define CSV2PLAYER_CPP

#include "csv2player.h"
using namespace std;


std::vector <std::vector<Point2D>>* csv2player::csvToVector(std::string file) {
	std::ifstream csv(file);
	std::string line;
	int i = 0;
	playerMovesPoint = new std::vector <std::vector<Point2D>>;
	if (csv.is_open()) {
		for (std::string row_line; std::getline(csv, row_line);)
		{
			if (i == 0) {
				i++;
				continue;
			}
			else
				playerMovesPoint->emplace_back();

			std::istringstream row_stream(row_line);
			for (std::string column; std::getline(row_stream, column, ',');)	
				if (i == 1) {
					i++;
					continue;
				}
				else {
					playerMovesPoint->back().push_back(*stringToPoint(column));
				}
		}
	}
	else {
		cout << "Unable to open file";
	}

	return playerMovesPoint;
}


Point2D* csv2player::stringToPoint(std::string s) {
	s.erase(s.begin(), s.begin() + 1);
	s.erase(s.end() - 1, s.end());
	std::string::size_type sz;     // alias of size_t
	double x = std::stod(s, &sz);
	double y = std::stod(s.substr(sz));
	Point2D* point = new Point2D(x, y);
	return point;
}




csv2player::csv2player() {
	playerMovesPoint = csvToVector("player1_file_example.csv");
	//	 Print All file
	for ( std::vector<Point2D> v : *playerMovesPoint)
	{
		for (Point2D x : v) {
		std::cout << "[" << x.getX() << "," << x.getY() <<"] " << ' ';
		}
	std::cout << std::endl;

	}
	
//	csvToPoint(playerMovesString);
}

int main() {
	csv2player c;
	system("pause");
	return 0;
}
#endif