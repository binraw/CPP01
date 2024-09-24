#include "Zombie.hpp"

int main(void)
{
std::cout << "============= stackZombies =============" << std::endl;
	Zombie	zombie1("Zombie1");
	Zombie	zombie2("Zombie2");

	zombie1.announce();
	zombie2.announce();
	randomChump("randomChumpZ");

	std::cout << std::endl;

std::cout << "============= heapZombies ==============" << std::endl;
	Zombie *first;
	first = newZombie("first");
	first->announce();
	delete(first);
	return (0);
}
