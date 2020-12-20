#include<iostream>
#include<string>

class printable {
public:
	virtual void getClassName() = 0;
};

class Entity :public printable {
public:
	float x = 0, y = 0;
	void getClassName() {
		std::cout << "Entity" << std::endl;
	}
};

class Player :public Entity {
public:
	std::string name;
	Player(std::string a) :name(a) {}
	void getClassName() {
		std::cout << "Player" << std::endl;
	}
};


void printClassName(printable* p) {
	p->getClassName();
}

int main() {
	Entity* e = new Entity();
	Player* p = new Player("alvin");
	printClassName(e);
	printClassName(p);
}