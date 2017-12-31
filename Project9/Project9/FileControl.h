#pragma once
#include <vector>
class FileControl {
public:

	std::vector<int>* map;
	int numPlayer;
	int numSoldier;
	std::vector<std::string>* typePlayer;
	std::vector<std::vector<std::string>*>* AllSoldiers;
	std::vector<std::vector<std::string>*>* Objects;


};