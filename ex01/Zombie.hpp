#pragma once

#include <string>

class Zombie
{
private:
	std::string	name;
public:
	static Zombie* zombieHorde( int N, std::string name );
	Zombie(void);
	~Zombie();
	void announce(void);
	void set_name(std::string name);
};

