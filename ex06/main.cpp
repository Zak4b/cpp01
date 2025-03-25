#include "Harl.hpp"
#include <string>
#include <iostream>

int	main(int argc, char ** argv)
{
	Harl	test;

	if (argc != 2)
	{
		std::cout << "Usage : " << argv[0] << " <LEVEL>" << std::endl;
		return (1);
	}
	test.complain(argv[1]);
	return (0);
}
