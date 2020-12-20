#include<iostream>


// l values are variables that can hold data;
// the data can be called a r value;
// rvalues are temperory values,like 10, "apple" etc;
// you cant assign a value to a rvalue;
// you cant have an lvalue reference to an rvalue, you can only have an lvalue
// reference to an lvalue, for eg:- int&value =10 is not possible while int& value = r ,
// where r is a variable of type int, is possible
// you can have a const lvalue reference to an rvalue, for eg:-const int& a =10 is possible,
// In this case what happens behind the scenes is that the compiler will create a temporary variable like int temp =10,
// and assign that temperory variable to the lvalue;
// An r value reference is implemented by using two & instead of one, for eg:-std::string&& name,
// and an r value reference can only take an r value

int& getValue() {
	static int value = 10;
	return value;
}

void setValue(const int& value) {

}

void printName(std::string& name) {

}

void printName(std::string&& name) {

}

int main() {
	int i = 10;
	getValue() = i;
	setValue(i);
	setValue(10);

	std::string firstname = "yan";
	std::string lastname = "chernikov";

	std::string fullname = firstname + lastname; // here firstname + lastname is an rvalue

	printName(firstname);
	printName(firstname + lastname);

}