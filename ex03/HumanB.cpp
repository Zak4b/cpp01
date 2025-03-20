#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
: name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void) const
{
	std::cout << this->name;
	if (!this->weapon)
	{
		std::cout << " has no weapon" << std::endl;
		return ;
	}
	std::cout
		<< " attacks with their "
		<< this->weapon->getType()
		<< std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}