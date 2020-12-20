#include<iostream>
#include<variant>


int main() {
	std::variant<std::string, int> data;
	data = "alvin";
	std::cout << std::get<std::string>(data) << "\n";
	data = 19;
	std::cout << std::get<int>(data) << "\n";

}