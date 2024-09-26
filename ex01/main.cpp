#include "Zombie.hpp"

int	main(void)
{
	Zombie *z;

	z = zombieHorde(50, "Coluche");
	for(int i = 0; i < 50; i++)
		z[i].announce();
	delete[] z;
	
	return (0);
}
