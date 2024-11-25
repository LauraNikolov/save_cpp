/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:07:56 by lnicolof          #+#    #+#             */
/*   Updated: 2024/11/25 18:56:29 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
  public:
	ClapTrap(std::string name);                                   // par defaut
	ClapTrap(const ClapTrap &other);              // de copie
	ClapTrap &operator=(const ClapTrap &other); // operateur d'affectation
    //setter
	int getHitPoint(void);
    int getEnergyPoint(void);
    int getAttackDamage(void);
    std::string getName(void);
    //getter
    void setHitPoint(int nbr);
    void setEnergyPoint(int nbr);
    void setAttackDamage(int nbr);
    void setName(std::string new_name);
    void attack(const std::string &target);
	void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    private:
        std::string _name;
        int _hitPoint;
        int _energyPoint;
        int _attackDamage;
} ;

#endif