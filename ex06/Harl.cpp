#include "Harl.hpp"
#include <iostream>

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void Harl::print(std::string str)
{
	std::cout << str << std::endl;
}

void Harl::debug( void )
{
	this->print("[ DEBUG ]");
	this->print("I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!");
}
void Harl::info( void )
{
	this->print("[ INFO ]");
	this->print("I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!");
}
void Harl::warning( void )
{
	this->print("[ WARNING ]");
	this->print("I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.");
}
void Harl::error( void )
{
	this->print("[ ERROR ]");
	this->print("This is unacceptable! I want to speak to the manager now.");
}

void Harl::complain( std::string level )
{
	
	unsigned int	i = 0;
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	while (i < sizeof(levels) / sizeof(levels[0]))
	{
		if (level == levels[i])
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			this->debug();
			 [[fallthrough]];
		case 1:
			this->info();
			 [[fallthrough]];
		case 2:
			this->warning();
			 [[fallthrough]];
		case 3:
			this->error();
			break;
		default:
			this->print("[ Probably complaining about insignificant problems ]");
	}
}