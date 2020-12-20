#include<iostream>
#include<tuple>

struct values {
	int x;
	int y;
	std::string z;
};


values fun(bool flag) {
	if (flag) {
		return values{ 1,2,"alvin" };
	}
	else {
		return values{ 1,2,"lal" };
	}
}

std::tuple<int, int> fun2(bool flag) {
	if (flag) {
		return std::make_tuple(1, 2);
	}
	else return std::make_tuple(2, 3);
}

int main() {
	values v;
	v = fun(true);
	std::cout << v.x << " " << v.y << " " << v.z << std::endl;
	v = fun(false);
	std::cout << v.x << " " << v.y << " " << v.z << std::endl;
	int num1, num2;
	std::tie(num1, num2) = fun2(true);
	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;


}