#include <iostream>
#include <string>

int main () {

	std::string name;
	

	//asks for the person's name
	std::cout << "Please enter your first name : ";
	
	/*
	condition of buffer flushing:
	(1) automatic flush due to buffer full
	(2) library is asked to read from input stream
	(3) explisit request
	*/
	std::cin >> name;
	
	//display greeting
	std::cout << "Hello, " << name <<  "!" << std::endl;
	return 0;
	

}
