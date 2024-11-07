#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon(NULL), name(name) {}

void HumanB::attack(void)
{
    std::cout << name << " attack with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon_ref)
{
    this->weapon = &weapon_ref;
}