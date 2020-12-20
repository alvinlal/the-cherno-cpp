#include<iostream>

template<typename T> void print(T value) {
	std::cout << value << std::endl;
}

template<int Size, typename T> class Array {
	T array[Size];
public:
	int getSize() { return Size; }
};

int main() {
	print("hello");
	Array<2, int> a;
}