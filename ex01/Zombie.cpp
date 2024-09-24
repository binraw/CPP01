#include "Zombie.hpp"


void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void) : name("Zombie")
{
}

Zombie::Zombie(std::string name) : name(name) 
{
	this->name = name;
	std::cout << this->name << " created" << std::endl;
}
Zombie::~Zombie() 
{
	std::cout << this->name << " destroyed" << std::endl;

}


void	Zombie::setName(std::string name)
{
	this->name = name;
}
