#include<iostream>
#include<memory>
#include<chrono>

struct Timer {
	std::chrono::steady_clock::time_point start, end;
	std::chrono::duration<float> duration;
	Timer() {
		start = std::chrono::high_resolution_clock::now();
	}
	~Timer() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		float ms = duration.count() * 1000.0f;
		std::cout << "Timer took " << ms << " ms\n";
	}
};

int main() {
	int value = 0;
	{
		Timer timer;
		for (int i = 0; i < 1000000; i++)
			value += 2;
	}
	std::cout << value << std::endl;
}