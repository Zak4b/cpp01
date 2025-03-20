#include <string>
#include <iostream>

int	main(void)
{
	std::string	str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout
		<< "string: " << &str << std::endl
		<< "stringPTR: " << stringPTR << std::endl
		<< "stringREF: " << &stringREF << std::endl;
	
	std::cout
		<< "string value: " << str << std::endl
		<< "stringPTR value: " << *stringPTR << std::endl
		<< "stringPTR value: " << stringREF << std::endl;
}