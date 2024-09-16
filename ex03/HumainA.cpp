#include "HumainA.hpp"

HumainA::HumainA(std::string name, Weapon& weapon) : name(name), ref(weapon){
}

HumainA::~HumainA() {
}

void HumainA::attack()
{
    std::cout << name << " attacks with their " << ref.getType() << std::endl;
}

// void HumainA::display_name()
// {
    
// }