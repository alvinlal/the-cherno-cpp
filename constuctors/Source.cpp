#include<iostream>

class Entity {
	float c, y;
public:
	Entity() {
		c = 0.0f;
		y = 3.2f;
	}
	void print() {
		std::cout << c << ", " << y;
	}
};

int main() {
	std::cout << "hello";
}