#include<iostream>

class Entity {
public:
	virtual void PrintName() {}
};

class Player : public Entity {

};


class Enemy :public Entity {

};

//dynamic cast can be used to check if convertion between subclasses can be
//made and also for checking if an object is an instance of another object
int main() {
	Player* player = new Player();
	Entity* e1 = new Enemy();
	Player* p = dynamic_cast<Player*>(e1);
}