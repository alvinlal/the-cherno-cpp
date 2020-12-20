#include<iostream>

int main() {
	int example[5];
	int* ptr = example;

	*(ptr + 1) = 4;
	ptr[2] = 3;
	for (int i = 0; i < 5; i++)
		example[i] = 2;

	int* another = new int[5];

	for (int i = 0; i < 5; i++)
		another[i] = 2;

	delete[] another;
	std::cin.get();
}