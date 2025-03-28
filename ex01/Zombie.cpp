#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	this->name = std::string();
}

Zombie::~Zombie()
{
	std::cout << "delete " << this->name << std::endl;
}

void Zombie::announce(void)
{
	std::cout
		<< this->name << ": "
		<< "BraiiiiiiinnnzzzZ..."
		<< std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}