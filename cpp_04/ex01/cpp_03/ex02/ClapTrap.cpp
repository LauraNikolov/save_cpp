/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:30:48 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/09 18:07:14 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(void) {
	std::cout << "Clap Trap destructor is called for " << this->_name << " Clap Trap" << std::endl;
}

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor is called" << std::endl;
}


ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10),
                                       _energyPoint(10), _attackDamage(0)
{
    std::cout << "Clap Trap name constructor is called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Clap Trap copy constructor is called from " << other.getName() << std::endl;
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
	if(this->_hitPoint <= 0 && this->_energyPoint <= 0) {
		std::cout << "Clap Trap doesn't have hit points and energy point anymore. He can't atack" << std::endl;
		return;
	}
	if(this->_hitPoint <= 0) {
		std::cout << "Clap Trap doesn't have hit points anymore. He can't attack" << std::endl;
		return; }
	else if(this->_energyPoint <= 0) {
		std::cout << "Clap Trap doesn't have energy points anymore. He can't attack" << std::endl; 
		return ;}		
		this->_energyPoint--;
		std::cout << "Clap Trap " << this->_name << "  attacks " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_hitPoint <= 0 && this->_energyPoint <= 0) {
		std::cout << "Clap Trap doesn't have hit points and energy point anymore. He can't be repaired" << std::endl;
		return;
	}
	if(this->_hitPoint <= 0) {
		std::cout << "Clap Trap doesn't have hit points anymore. He can't be repaired" << std::endl;
		return; }
	else if(this->_energyPoint <= 0) {
		std::cout << "Clap Trap doesn't have energy points anymore. He can't be repaired" << std::endl; 
		return ;}
	this->_energyPoint--;
	std::cout << "Clap Trap " << this->_name << " repairs itself and gets " << amount << " hit point back" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->_hitPoint <= 0 && this->_energyPoint <= 0) {
		std::cout << "Clap Trap " << this->_name << " can't do anything cause of not enough hit point and energy point." << std::endl; 
		return ;}
    if(this->_hitPoint <= 0) {
        std::cout << "Clap Trap " << this->_name << " can't do anything cause of not enough hit point." << std::endl; 
		return; }
	else if (this->_energyPoint <= 0) {
		std::cout << "Clap Trap " << this->_name << "can't do anything cause of not enough energy point" << std::endl; 
		return; }
	else {
		this->_hitPoint -= amount;
		std::cout << "Clap Trap " << this->_name << " take " << amount << " damage point" << std::endl; }
}