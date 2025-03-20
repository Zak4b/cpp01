#pragma once

#include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string type);
	~Weapon();
	const std::string	getType(void);
	void	setType(std::string new_type);
};

