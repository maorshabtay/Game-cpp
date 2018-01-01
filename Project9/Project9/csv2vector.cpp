#pragma once
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<strstream>
#include <vector>
#include "csv2vector.h"
using namespace std;


std::vector <std::vector<std::string>>* csv2vector::csvToVector(std::string file) {
	std::ifstream csv(file);
	std::string line;
	items = new std::vector <std::vector<std::string>>;
	if (csv.is_open()) {
		for (std::string row_line; std::getline(csv, row_line);)
		{
			
			items->emplace_back();
			
			std::istringstream row_stream(row_line);
			for (std::string column; std::getline(row_stream, column, ',');)
				items->back().push_back(column);
		}
	}
	else {
		cout << "Unable to open file";
	}
	
	return items;
}

std::vector <int>* csv2vector::VectorToInt(std::vector <std::vector<std::string>> items, int column, int   row, int setRow ) {
	std::vector <int>* vecInt = new std::vector <int>;
	int r = setRow;
		for (; row > r; ++r)
			vecInt->emplace_back(std::stoi(items[column][r]));
	return vecInt;
}
std::vector <std::string>* csv2vector::VectorToString(std::vector <std::vector<std::string>> items, int column, int   row , int setRow) {
	std::vector <std::string>* vecString = new std::vector<std::string>;
	int r = setRow;
	for (; row > r; ++r)
		vecString->emplace_back((items[column][r]));
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

csv2vector::csv2vector(){
	items = csvToVector("init_file_example.csv");
/*	 Print All file
	for (const std::vector<string> &v : *items)
	{
		for (string x : v) {
			std::cout << x << ' ';
		}
		std::cout << std::endl;

	}
	*/
	map = VectorToInt(*items, 1, 3);
	std::vector <int> vecNumPlayer = *VectorToInt(*items, 2, 2);
	numPlayer = vecNumPlayer[0];
	std::vector <int> vecNumSoldier = *VectorToInt(*items, 3, 2);
	numSoldier = vecNumSoldier[0];
	

	
	unsigned i = 0, j = 0, k = 0;
	typePlayer = new std::vector <std::string>;
	for (i = 0; numPlayer > i; ++i) {
		typePlayer->emplace_back(VectorToString(*items, (4 + (numSoldier + 1)*i), 2)[0][0]);
	}



	// typeSoldiers 2D vector row:player, column:soldier
	//std::vector<std::vector<std::vector<std::string>>> typeSoldiers;
	AllSoldiers = new std::vector<std::vector<std::string>*>;
	(*AllSoldiers).resize(numPlayer*numSoldier);

	for (i = 0; numPlayer > i; ++i) {
		for (j = 0; numSoldier > j; ++j) {
			(*AllSoldiers)[k] = new std::vector<std::string>;
			(*AllSoldiers)[k][0] = (*items)[(4 * (i + 1) + (j + 1))];
			k++;

		}
	}
	/* Print Soldiers
	for (std::vector<std::string>* x : *AllSoldiers) {
		for (std::string s : *x) {
			cout << s << " ";
		}
		cout << endl;
	}*/
	
	k = 0;
	Objects = new std::vector <std::vector <std::string>*>;
	(*Objects).resize((*items).size()-5-(numPlayer*(numSoldier+1)));
	for ( i = (4 + (numPlayer * (numSoldier + 1)) + 1) ; (*items).size() > i ; ++i) {
		(*Objects)[k] = new std::vector<std::string>;
		(*Objects)[k][0] = (*items)[i];
		k++;
	}
	
	/*	Print Object
		for (std::vector<std::string>* x : *Objects) {
			for (std::string y : *x) {
				std::cout <<  y << ' ' ;
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	*/

	
	
	//system("pause");
	
}/*
int main() {

	csv2vector c ;
	
	return 0;
}*/
