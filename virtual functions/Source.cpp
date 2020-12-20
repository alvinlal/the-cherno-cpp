#include<iostream>
#include<string>
class Entity {
public:
	float x = 0, y = 0;
	virtual void getName() {
		std::cout << "Entity" << std::endl;
	}
};

class Player :public Entity {
public:
	std::string name;
	Player(std::string a) :name(a) {}
	void getName() {
		std::cout << name << std::endl;
	}
};


void printName(Entity* e) {
	e->getName();
}

int main() {
	Entity e;
	Player p("alvin");
	p.getName();
	e.getName();
	Entity* entity = new Entity();
	Player* player = new Player("john doe");
	entity->getName();
	player->getName();
	printName(entity);
	printName(player);
}