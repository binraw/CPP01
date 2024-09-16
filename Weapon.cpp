#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : name(type)
{

}

Weapon::~Weapon()
{

}

const std::string& Weapon::getType() const
{
    return name;
}


void Weapon::setType(const std::string& type)
{
    name = type;
}