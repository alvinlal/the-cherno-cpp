#include<iostream>
#include <vector>
typedef void(*fn)(int);

void helloWorld(int a) {
	std::cout << "hello world!" << "the value is " << a << std::endl;
}
void forEach(const std::vector<int>& values, void(*fn)(int)) {
	for (int value : values)
		fn(value);
}
void printValue(int value) {
	std::cout << value << std::endl;
}
int main() {
	//fn helloWorldFunction = helloWorld;
	//helloWorldFunction(2);

	std::vector<int> values = { 1,2,3,4,5 };
	forEach(values, printValue);
	forEach(values, [](int value) {
		std::cout << value << std::endl;
		});
}