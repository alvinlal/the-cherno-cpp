#include<iostream>

class Example {
public:
	Example() {
		std::cout << "Created entity" << std::endl;

	}
	Example(int x) {
		std::cout << "Created entity with " << x << "! " << std::endl;
	}
};

class Entity {
	int c, y;
	Example m_example;
public:
	Entity() {}
	Entity(int a, int b, int c) : c(a), y(b), m_example(c) {
	}
};


int main() {
	Entity e(2, 3, 4);
}