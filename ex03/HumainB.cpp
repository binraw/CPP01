#include "HumainB.hpp"

HumainB::HumainB(std::string name): name(name)
{
    this->weapon = new Weapon("no weapon");
}

HumainB::~HumainB() 
{
}

void HumainB::setWeapon(Weapon& w)
{
    delete weapon;

    this->weapon = &w;
   
}



void HumainB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

