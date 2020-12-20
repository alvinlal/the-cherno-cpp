#include<iostream>
#include<string>


int main() {
	const char* name = "alv\0in";
	char name2[7] = { 'a','l','v','\n','i','n','\0' };
	std::cout << name2 << std::endl;
	std::cout << name << std::endl;


	std::string name3 = "alv\nin";
	std::cout << name3;

	std::string name3 = std::string("alvin") + "lal";
	std::cout << name3;

	std::cin.get();
}