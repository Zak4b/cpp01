#include "Zombie.hpp"

int	main(void)
{
	Zombie z1("Pierre");
	z1.announce();

	Zombie *z2 = Zombie::newZombie("Fred");
	z2->announce();
	delete z2;
	Zombie::randomChump("Brbr");
}