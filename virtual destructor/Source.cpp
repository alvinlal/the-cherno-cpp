#include<iostream>


class Base {
public:
	Base() {
		std::cout << "Base constructor\n";
	}
	virtual ~Base() {
		std::cout << "Base destructor\n";
	}
};
class Derived :public Base {
public:
	Derived() {
		std::cout << "Derived constructor\n";
	}
	~Derived() {
		std::cout << "Derived destructor\n";
	}
};
int main() {
	Base* base = new Base();
	delete base;
	std::cout << "\n---------------------\n";
	Derived* derived = new Derived();
	delete derived;
	std::cout << "\n---------------------\n";
	Base* poly = new Derived();
	delete poly;
	std::cin.get();
}