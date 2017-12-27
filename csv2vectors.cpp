#include <fstream>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<strstream>
#include <vector>
using namespace std;


std::vector <std::vector<std::string>> csvToVector(std::string file) {
	std::ifstream csv(file);
	std::string line;
	std::vector <std::vector<std::string>> items;

	if (csv.is_open()) {
		for (std::string row_line; std::getline(csv, row_line);)
		{
			items.emplace_back();
			std::istringstream row_stream(row_line);
			for (std::string column; std::getline(row_stream, column, ',');)
				items.back().push_back(column);
		}
	}
	else {
		cout << "Unable to open file";
	}
	return items;
}

std::vector <int> VectorToInt(std::vector <std::vector<std::string>> &items, int column, int   row, int setRow = 1) {
	std::vector <int> vecInt;
	int r = setRow;
		for (; row > r; ++r)
			vecInt.emplace_back(std::stoi(items[column][r]));
	return vecInt;
}
std::vector <std::string> VectorToString(std::vector <std::vector<std::string>> &items, int column, int   row , int setRow=1) {
	std::vector <std::string> vecString;
	int r = setRow;
	for (; row > r; ++r)
		vecString.emplace_back((items[column][r]));
	return vecString;
}

/***********************2DPoint*************************/
void stringToPoint(std::string s) {
	s.erase(s.begin(), s.begin()+1);
	s.erase(s.end()-1, s.end());
	std::string::size_type sz;     // alias of size_t
	double x = std::stod(s, &sz);
	double y = std::stod(s.substr(sz));
	std::cout << x << std::endl;
	std::cout << y << std::endl;
}


int main() {
	std::vector <std::vector<std::string>> items = csvToVector("init_file_example.csv");
	for (const std::vector<string> &v : items)
	{
		for (string x : v) {
			std::cout << x << ' ';
		}
		std::cout << std::endl;

	}

	std::vector <int> map = VectorToInt(items, 1, 3);
	std::vector <int> numPlayers = VectorToInt(items, 2, 2);
	std::vector <int> numSoldiers = VectorToInt(items, 3, 2);
	std::vector <std::string>typePlayers;

	int i = 0, j = 0, k = 0;
	for (i = 0; numPlayers[0] > i; ++i) {
		typePlayers.emplace_back(VectorToString(items, (4 + (numSoldiers[0] + 1)*i), 2)[0]);
	}

	// typeSoldiers 2D vector row:player, column:soldier
	std::vector<std::vector<std::vector<std::string>>> typeSoldiers;

	typeSoldiers.resize(numPlayers[0]);
	for (i = 0; numPlayers[0] > i; ++i) {
		typeSoldiers[i].resize(numSoldiers[0]);
		for (j = 0; numSoldiers[0] > j; ++j) {
			typeSoldiers[i][j] = (VectorToString(items, 4*(i+1)+(j+1), 3,0));
		}
	}
	std::vector <std::vector <std::string>> object;

	for (i = (4 + (numPlayers[0] * (numSoldiers[0] + 1)) + 1); items.size() > i; ++i) {
		object.emplace_back(items[i]);
	}
	/*
		for (std::vector<std::string> x : object) {
			for (std::string y : x) {
				std::cout << i << y << ' ' ;
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	*/
	//	stringToPoint(typeSoldiers[0][0][1]);
	//std::cout << std::to_string((4 + (numPlayers[0] * (numSoldiers[0] + 1)) + 1))  <<std::endl;
	//std::cout << std::to_string(items.size()) << std::endl;
	system("pause");

return 0;
}