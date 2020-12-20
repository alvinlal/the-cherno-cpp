#include<iostream>

class Entity;

void printEntity(const Entity* e);

class Entity {
public:
	int x, y;
	Entity(int x, int y) {
		this->x = x;
		this->y = y;
		printEntity(this);
	}
};


void printEntity(const Entity* e) {
	std::cout << e->x;
}

int main() {
	std::cout << "hello";
}