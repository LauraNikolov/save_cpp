/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:07:56 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/09 17:32:22 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
// #include "ScavTrap.hpp"

class ClapTrap
{
  public:
    ~ClapTrap(void); //Destructeur
    ClapTrap(void); //par defaut
	ClapTrap(std::string name);                                  
	ClapTrap(const ClapTrap &other);              // de copie
	ClapTrap &operator=(const ClapTrap &other); // operateur d'affectation
    //setter
	int getHitPoint(void) const;
    int getEnergyPoint(void) const;
    int getAttackDamage(void) const;
    std::string getName(void) const;
    //getter
    void setHitPoint(int nbr);
    void setEnergyPoint(int nbr);
    void setAttackDamage(int nbr);
    void setName(std::string new_name);
    virtual void attack(const std::string &target);
	void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    protected:
        std::string _name;
        int _hitPoint;
        int _energyPoint;
        int _attackDamage;
} ;

#endif