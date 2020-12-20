#include<iostream>


#define WAIT std::cin.get();

#define LOG(x) std::cout<<x<<std::endl;

#ifdef PR_DEBUG
#define LOG(x) std::cout<<x<<std::endl;
#else 
#define LOG(x)
#endif

int main() {
	LOG("hello")
		WAIT
}