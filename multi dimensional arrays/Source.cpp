#include<iostream>
#include<chrono>

struct Timer {
	std::chrono::steady_clock::time_point start, end;
	std::chrono::duration<float> duration;
	const char* name;
	Timer(const char* name) :name(name) {
		start = std::chrono::high_resolution_clock::now();
	}
	~Timer() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		float ms = duration.count() * 1000.0f;
		std::cout << name << " timer took " << ms << " ms\n";
	}

};


int** a2d = new int* [25];




void singleDArray() {
	Timer timer("1d");
	int* a1d = new int[5 * 5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			a1d[j + i * 5] = 2;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			std::cout << a1d[j + i * 5] << "\n";
		}
	}
}
void multiDArray() {
	Timer timer("2d");
	int** a2d = new int* [5];
	for (int i = 0; i < 5; i++) {
		a2d[i] = new int[5];
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			a2d[i][j] = 2;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			std::cout << a2d[i][j] << "\n";
		}
	}
}
int main() {
	singleDArray();
	multiDArray();
}