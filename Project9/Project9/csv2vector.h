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

class csv2vector
{
public:


	std::vector <std::vector<std::string> >* items;
	std::vector <int>* map;
	int numPlayer;
	int numSoldier;
	std::vector <std::string>* typePlayer;
	std::vector<std::vector<std::string>*>* AllSoldiers;
	std::vector <std::vector <std::string>*>* Objects;
	
	
	csv2vector(std::string);
	std::vector <std::vector<std::string>>* csvToVector(std::string file);
	std::vector <int>* VectorToInt(std::vector <std::vector<std::string>> items, int column, int   row, int setRow = 1);
	std::vector <std::string>* VectorToString(std::vector <std::vector<std::string>> items, int column, int   row,int setRow = 1);
}; 