#include<iostream>



class Entity {
public:
	static float x, y;
	static void move(int a, int b) {
		x += a;
		y += b;
	}
};

class Player :public Entity {
public:
	const char* name;
	void printName() {
		std::cout << name;
	}
};

float Entity::x;
float Entity::y;


int main() {
	Entity e;
	Player p;
	p.name = "alvin";
	e.move(1, 2);
	//p.x = 10;
	std::cout << e.x << std::endl;
	std::cout << p.x;

}