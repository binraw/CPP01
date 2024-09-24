#include "HumainA.hpp"

HumainA::HumainA(std::string name, Weapon& weapon) : ref(weapon), name(name)
{
}

HumainA::~HumainA() {
}

void HumainA::attack()
{
    std::cout << name << " attacks with their " << ref.getType() << std::endl;
}

