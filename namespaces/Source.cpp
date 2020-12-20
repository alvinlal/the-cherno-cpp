#include<iostream>

namespace apple {
	void print(const std::string& text) {
		std::cout << text << std::endl;
	}
}

namespace banana {
	namespace functions {
		void print(const std::string& text) {
			std::cout << text << std::endl;
		}
	}
}
namespace orange {
	void print(const char* text) {
		std::string temp = text;
		std::reverse(temp.begin(), temp.end());
		std::cout << temp << std::endl;
	}
}
using namespace orange;
using namespace apple;

int main() {
	apple::print("hello");
	banana::functions::print("hello world!");
}