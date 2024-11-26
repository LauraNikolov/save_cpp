/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:15:14 by lnicolof          #+#    #+#             */
/*   Updated: 2024/11/26 19:20:41 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ClapTrap(std::string name) : ScavTrap(std::string name) : _name(name), _hitpoint(100), _energyPoint(50), _attackDamage(20) {
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

void ScavTrap::guardgate(void) {
    std::cout << "ScavTrap is in GateKeeper mode" << std::endl;
}
