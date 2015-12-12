#include <iostream>
#include <string>

int main() {

	std::cout << "What is your name? ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << std::endl << "And what is yours? ";
	std::cin >> name;
	std::cout << "Hello, " << name << "; nice 2 meet you 2" << std::endl;

	return 0;



}
