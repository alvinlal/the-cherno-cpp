#include<iostream>
#include <vector>
#include<unordered_map>


int main() {
	std::vector<int> values = { 1,2,3,4,5 };

	for (int value : values) {
		std::cout << value << "\n";
	}

	for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::unordered_map<std::string, int> map;
	map["cherno"] = 7;
	map["c++"] = 5;

	for (std::unordered_map<std::string, int>::iterator it = map.begin(); it != map.end(); it++) {
		std::cout << it->first << " = " << it->second << "\n";
	}
	for (auto [key, value] : map) {
		std::cout << key << "=" << value << std::endl;
	}
}