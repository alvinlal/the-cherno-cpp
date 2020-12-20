#include<iostream>

class Entity {
private:
	std::string m_name;
	int age;
public:
	explicit Entity(int a) :age(a) {}
	Entity(std::string name) :m_name(name) {}
	std::string getName() const {
		return m_name;
	}
};

void printName(const Entity& e) {
	std::cout << e.getName();
}

int main() {
	Entity a = Entity(19);
	printName(Entity(19));
	printName(std::string("alvin"));
}