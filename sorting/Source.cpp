#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	std::vector<int> values = { 4,2,5,1,6 };
	std::sort(values.begin(), values.end());
	for (int value : values) {
		std::cout << value << std::endl;
	}
}