#include<iostream>
#include<any>

int main() {
	std::any data;
	data = 2;
	data = "cherno";
	data = std::string("cherno");

	std::cout << std::any_cast<int>(data) << std::endl;
	std::cout << "hello";
}