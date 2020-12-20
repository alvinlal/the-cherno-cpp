#include<iostream>
#include<thread>
static bool s_finished = false;

void doWork() {
	using namespace std::literals::chrono_literals;
	while (!s_finished) {
		std::cout << "Working ...\n";
		std::this_thread::sleep_for(1s);
	}
}
int main() {
	std::thread worker(doWork);
	std::cin.get();
	s_finished = true;
	worker.join();
	std::cout << "Finished." << std::endl;
	std::cin.get();
}