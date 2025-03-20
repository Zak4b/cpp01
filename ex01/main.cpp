#include "Zombie.hpp"

int	main(void)
{
	const int nb = 12;
	Zombie *horde = Zombie::zombieHorde(nb, "B");
	for (size_t i = 0; i < nb; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}