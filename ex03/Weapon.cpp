#include "Weapon.hpp"

Weapon::Weapon(const std::string& name) : type(name) {}

const std::string &Weapon::getType()
{
    const std::string &ref = type;
    return(ref);
}

void Weapon::setType(std::string new_type)
{
    type = new_type;
}
