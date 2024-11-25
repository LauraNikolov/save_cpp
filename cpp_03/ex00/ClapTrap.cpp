/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:30:48 by lnicolof          #+#    #+#             */
/*   Updated: 2024/11/25 19:14:01 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor is called for " << this->_name << " Clap Trap" << std::endl;
}

ClapTrap::ClapTrap(void) : _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
    std::cout << "Default constructor is called" << std::endl;
}


ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10),
                                       _energyPoint(10), _attackDamage(0)
{
    std::cout << "Name constructor is called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor is called from " << other.getName() << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other) {
		this->_name = other.getName();
        this->_hitPoint = other.getHitPoint();
		this->_energyPoint = other.getEnergyPoint();
		this->_attackDamage = other.getAttackDamage();
	}
	return (*this);
}

std::string ClapTrap::getName(void) const {
	return (this->_name);
}

int ClapTrap::getHitPoint(void) const {
	return (this->_hitPoint);
}

int ClapTrap::getEnergyPoint(void) const{
	return (this->_energyPoint);
}

int ClapTrap::getAttackDamage(void) const{
	return (this->_attackDamage);
}

void ClapTrap::setEnergyPoint(int nbr) {
	this->_energyPoint = nbr;
}

void ClapTrap::setHitPoint(int nbr) {
	this->_hitPoint = nbr;
}

void ClapTrap::setAttackDamage(int nbr) {
	this->_attackDamage = nbr;
}

void ClapTrap::setName(std::string new_name){
	this->_name = new_name;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoint > 0 && this->_energyPoint > 0)
	{
		std::cout << "Clap Trap " << this->_name << "attacks" << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
		_energyPoint--;
	}
	else
		std::cout << "Clap Trap " << this->_name << " can't attack" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint > 0 && this->_hitPoint > 0)
	{
		std::cout << "Clap Trap " << this->_name << " repairs itself and gets " << amount << " hit point back" << std::endl;
		this->_energyPoint--;
	}
	else
	{
		std::cout << "Clap Trap " << this->_name << " can't repairs itself" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_hitPoint <= 0) {
        std::cout << "Clap Trap" << this->_name << "can't do anything" << std::endl; }
	this->_energyPoint -= amount;
	if (this->_energyPoint <= 0) {
		std::cout << "Clap Trap" << this->_name << "can't do anything" << std::endl; }
}