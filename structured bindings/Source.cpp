#include<iostream>
#include<string>
#include<tuple>

std::tuple<std::string, int> createPerson() {
	return { "alvin",19 };
}

struct personStruct {
	std::string name;
	int age;
};

personStruct createPerson2() {
	return { "alvin",19 };
}

int main() {
	auto person = createPerson();
	std::cout << std::get<0>(person) << std::endl;
	std::string name;
	int age;
	std::tie(name, age) = createPerson();
	std::cout << name << std::endl << age << std::endl;
	auto [name2, age2] = createPerson();
	std::cout << name2 << std::endl << age2 << std::endl;
	personStruct p;
	p = createPerson2();
	std::cout << p.name << std::endl << p.age << std::endl;


}