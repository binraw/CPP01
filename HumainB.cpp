#include "HumainB.hpp"

HumainB::HumainB(std::string name): name(name)
{
    weapon = new Weapon("default weapon");
}

HumainB::~HumainB() 
{
   
}

void HumainB::setWeapon( Weapon& w)
{
    delete weapon;

    weapon = &w;
   
}

void HumainB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

