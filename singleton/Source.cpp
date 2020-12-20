#include<iostream>

class Singleton {
private:
	Singleton() {}
	static Singleton s_instance;
public:
	Singleton(const Singleton&) = delete;
	static Singleton& get() {
		return s_instance;
	}
	void function() {
		std::cout << "hello";
	}
};

Singleton Singleton::s_instance;

int main() {
	Singleton::get().function();
}