#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "Diamond Trap default constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
    this->_name = name;
    this->_hitPoint = FragTrap::_hitPoint;
    this->_energyPoint = ScavTrap::_energyPoint;
    this->_attackDamage = FragTrap::_attackDamage;

    std::cout << "Diamond Trap name constructor is called for " << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    if(this != &other) {
		this->_name = other.getName();
		this->_hitPoint = other.getHitPoint();
		this->_energyPoint = other.getEnergyPoint();
		this->_attackDamage = other.getAttackDamage();
	}

	return(*this);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap default destructor is called for " << _name << std::endl;
}


void DiamondTrap::WhoAmI() {
    std::cout << "Diamond trap name is " << _name << std::endl;
    std::cout << "My clap trap name is " << ClapTrap::getName() << std::endl;
}
