/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:07:44 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/09 18:14:41 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp" 
#include "ScavTrap.hpp"

int main () {
    FragTrap test("test");
    std::cout << "energy == " << test.getEnergyPoint() << "damage = " << test.getAttackDamage() << "hit = " << test.getHitPoint();
}
