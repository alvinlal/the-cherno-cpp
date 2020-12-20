#include<iostream>

class people {
	int age;
public:
	people(int age) :age(age) {

	}
} a(12);

struct person {
	int age;
	person(int age) :age(age) {

	}
} b(19);

int main() {
	person A = { 19 };
	people B = 19;
	people D = { 19 };

	std::cout << "hello";
}