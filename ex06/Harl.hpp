#pragma once

#include <string>

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void print(std::string str);
public:
	Harl(void);
	~Harl();
	void complain( std::string level );
};
