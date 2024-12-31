#include <string>
#include <iostream>
#include <iomanip>

void Divider()
{
	for (int i = 0; i < 80; i++)
		std::cout << "-";
	std::cout << std::endl;
}

int main()
{
	std::string		str;
	std::string*	stringPTR;
	std::string&	stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	stringREF = str;

	std::cout << std::setw(15) << std::left << "str: " << str << std::endl;
	std::cout << std::setw(15) << std::left << "stringPTR: " << stringPTR << std::endl;
	std::cout << std::setw(15) << std::left << "stringREF: " << stringREF << std::endl;
	Divider(); 
	std::cout << std::setw(35) << std::left << "The memory address of str: " << &str << std::endl;
	std::cout << std::setw(35) << std::left << "The memory address of stringPTR:" << &str << std::endl;
	std::cout << std::setw(35) << std::left << "The memory address of stringREF:" << &str <<  std::endl;
	Divider();
	std::cout << std::setw(35) << std::left << "The value address of str: " << str << std::endl;
	std::cout << std::setw(35) << std::left << "The value address of stringPTR:" << str << std::endl;
	std::cout << std::setw(35) << std::left << "The value address of stringREF:" << str <<  std::endl;

	return (0);
}