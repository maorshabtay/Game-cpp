#include <fstream>
#include <iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<strstream>
#include <vector>
using namespace std;


	int main() {
		std::ifstream csv("init_file_example.csv");
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
		for (const std::vector<string> &v : items)
		{
			for (string x : v) std::cout << x << ' ';
			std::cout << std::endl;
		}
	system("pause");

	return 0;
	}