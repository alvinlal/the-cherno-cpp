#include<iostream>

void increment(int& a) {
	a++;
}
class Entity {
public:
	int x, y;
	Entity(int x, int y) :x(x), y(y) {}
};


void printEntity(Entity* e) {
	std::cout << e->x;
}

void incrementEntity(Entity* e) {
	e->x++;
}


int main() {
	int a = 9;
	int& ref = a;
	ref++;
	increment(a);

	std::cout << a << std::endl;

	Entity* b = new Entity(2, 3);
	incrementEntity(b);
	printEntity(b);

}