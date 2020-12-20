#include<iostream>
#include<string>


static uint32_t s_AllocCount = 0;

void* operator new(size_t size) {
	s_AllocCount++;
	std::cout << "Allocating " << size << " bytes\n";
	return malloc(size);
}

void printName(std::string_view name) {
	std::cout << name << std::endl;
}
int main() {
	//const char* name = "Yan chernikov";
	std::string name = "Yan chernikov";
	//std::string firstname = name.substr(0, 3);
	//std::string lastname = name.substr(4, 9);

	std::string_view firstname2(name.c_str(), 3);
	std::string_view firstname3(name.c_str() + 4, 9);

	printName(firstname2);

	//printName(name);
	std::cout << s_AllocCount << " allocations" << std::endl;

}