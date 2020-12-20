#include<iostream>
#include<vector>
#include<functional>


void forEach(const std::vector<int> values, std::function<void(int)> fn) {
	for (int value : values) {
		fn(value);
	}
}

int main() {
	std::vector<int> values = { 1,2,3,4,5 };
	int a = 5;
	forEach(values, [=](int value) {std::cout << value << std::endl; });
}