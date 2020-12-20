#include<iostream>

struct Entity {
	int x, y;
	int* GetPositions() {
		return &x;
	}
};

int main() {
	Entity e = { 1,2 };
	int* position = (int*)&e;
	int* position2 = e.GetPositions();
	std::cout << position[0] << " " << position[1] << "\n";
	std::cout << position2[0] << " " << position2[1];


}