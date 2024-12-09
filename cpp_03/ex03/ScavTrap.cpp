/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:15:14 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/09 18:19:02 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>


ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
    this->_energyPoint = 50;
}



ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other.getName()) {
	if(this != &other) {
		*this = other;
	}
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap name constructor is called for " << _name << std::endl;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
	this->_name = name;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	if(this != &other) {
		this->_name = other.getName();
		this->_hitPoint = other.getHitPoint();
		this->_energyPoint = other.getEnergyPoint();
		this->_attackDamage = other.getAttackDamage();
	}

	return(*this);
}


ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap destructor called for " << _name << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << _name << "  is in GateKeeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if(this->_hitPoint <= 0 && this->_energyPoint <= 0) {
		std::cout << "Scav Trap doesn't have hit points and energy point anymore. He can't atack" << std::endl;
		return;
	}
	if(this->_hitPoint <= 0) {
		std::cout << "Scav Trap doesn't have hit points anymore. He can't attack" << std::endl;
		return; }
	else if(this->_energyPoint <= 0) {
		std::cout << "Scav Trap doesn't have energy points anymore. He can't attack" << std::endl; 
		return ;}		
		this->_energyPoint--;
		std::cout << "Scav Trap " << this->_name << "  attacks " << target << " causing " << this->_attackDamage << " points of damage" << std::endl; 
}