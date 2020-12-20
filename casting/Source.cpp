#include<iostream>

class Base {
public:
	Base() {}
	~Base() {}
	virtual void print() {
		std::cout << "hello";
	};
};
class Derived : public Base {
public:
	Derived() {}
	~Derived() {}
};
class AnotherClass :public Base {
public:
	AnotherClass() {}
	~AnotherClass() {}
};
int main() {
	double value = 5.25;
	double a = (int)value + 5.3;

	std::cout << a << std::endl;
	double s = static_cast<int>(value) + 5.3;
	int c = 2;
	int* intptr;
	intptr = reinterpret_cast<int*>(c);
	Derived* derived = new Derived();
	Base* base = derived;
	Derived* ac = dynamic_cast<Derived*>(base);
}