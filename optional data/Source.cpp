#include<iostream>
#include<fstream>
#include<optional>

std::optional<std::string> readFileAsString(const std::string& filepath) {
	std::ifstream stream(filepath);
	if (stream) {
		std::string result;
		//read file
		stream.close();
		return result;
	}
	return {};
}
int main() {
	std::optional<std::string> data = readFileAsString("data.text");
	std::string value = data.value_or("Not present");
	std::cout << value << std::endl;
	if (data) {
		std::cout << "file read successfully\n";
	}
	else {
		std::string& string = *data;
		std::cout << "unable to read file\n";
	}
}