#include "Zombie.hpp"

int	main(void)
{
	Zombie *z;

	z = zombieHorde(5, "Coluche");
	for(int i = 0; i < 5; i++)
		z[i].announce();
	return (0);
}
