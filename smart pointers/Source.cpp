#include<iostream>
#include<memory>

class Entity {
public:
	Entity() {
		std::cout << "Created Enttity !" << std::endl;
	}
	~Entity() {
		std::cout << "Destroyed Entity !" << std::endl;
	}
	void print() {}
};
int main() {
	{  std::shared_ptr<Entity> s1;
	{
		std::unique_ptr<Entity> e1 = std::make_unique<Entity>();
		std::unique_ptr<Entity> e2 = std::make_unique<Entity>();
		std::shared_ptr<Entity> s2 = s1;
		//e1 = e2; not possible
	}
	}
	std::cin.get();
}