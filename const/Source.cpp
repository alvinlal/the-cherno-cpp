#include<iostream>
#include<string>

class Entity {
private:
	int* m_X, * m_Y;
	mutable int var;
	std::string name;
public:
	const std::string& GetName()const {
		return name;
	}
	const int* const GetX() const {
		var = 3;
		return m_X;
	}
	void SetX(int* x) {
		m_X = x;
	}
};

void print(const Entity& e) {
	std::cout << e.GetX();
}

int main() {
	int age = 9;
	int height = 80;
	const int* a = &age;
	a = &height;
	//*a = 39;  //not posible
	int* const b = &age;
	//b = &height;//not possible;
	*b = 83;
	const int* const c = &age;
	//c = &height; //not possible
	//*c = 24; //not possible
	const Entity e;
	std::cout << e.GetName();
	auto f = [=]() mutable {
		std::cout << age++;
	};
	f();
}