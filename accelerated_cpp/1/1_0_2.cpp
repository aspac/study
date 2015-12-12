#include <iostream>
#include <string>

/*
Please enter your first name
*******************
*                 *     
*  Hello, Eragon! *
*		  *
*******************
*/

int main() {

	std::cout << "Please enter your first name: " ;
	std::string name;

	std::cin >> name;
	//const as value must not be changed after initialization, until stacked scope finishes
	const std::string greeting = "Hello, "+name+"!";

	//build 2nd and 4th lines
        const std::string spaces(greeting.size(), ' ');
        const std::string second_line = "* "  + spaces + " *";

	//build 1st and 5th lines
	const std::string first_line(second_line.size(),'*');

	//redundant but for the sake of learning..
	const std::string fifth_line = first_line;

	std::cout << std::endl;
	std::cout << first_line << std::endl;
	std::cout << second_line << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second_line << std::endl;
	std::cout << first_line << std::endl;


}
