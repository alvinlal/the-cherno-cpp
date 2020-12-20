#include<iostream>

template<typename T, size_t size>
class Array {
private:
	T m_array[size];
public:
	constexpr int length() { return size; }
	T& operator[](size_t index) { return m_array[index]; }
	const T& operator[](size_t index)const { return m_array[index]; }
};


int main() {
	Array<int, 5> a;
	a[0] = 1;
	a[1] = 2;
	a[2] = 2;
	a[3] = 2;
	const auto& arrayRef = a;
	for (int i = 0; i < a.length(); i++) {
		std::cout << a[i] << std::endl;
	}
}