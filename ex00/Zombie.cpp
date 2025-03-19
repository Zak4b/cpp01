#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
: name(name)
{
}

Zombie::~Zombie()
{
}

void Zombie::announce(void)
{
	std::cout
		<< this->name << ": "
		<< "BraiiiiiiinnnzzzZ..."
		<< std::endl;
}