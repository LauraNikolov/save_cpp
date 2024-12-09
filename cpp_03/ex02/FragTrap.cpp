/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:13:49 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/09 18:20:17 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"\

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
     _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << "FragTrap name constructor is called for " << _name << std::endl;
}

FragTrap::~FragTrap(void)  {
    std::cout << "FragTrap destructor is called for " << _name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    if(this != &other) {
		this->_name = other.getName();
		this->_hitPoint = other.getHitPoint();
		this->_energyPoint = other.getEnergyPoint();
		this->_attackDamage = other.getAttackDamage();
	}

	return(*this);
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other.getName()) {
    if(this != &other)
        *this = other;
    
}

void FragTrap::highFivesGuys(void) {
    std::cout << "High Five request by " << _name << std::endl;
}