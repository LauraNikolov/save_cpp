/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:07:44 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/09 15:17:48 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main () {

    std::cout <<"Test for members functions and attributes" << std::endl;
    ScavTrap Henri("Henri");
    std::cout << "ScavTrap hit point "<< Henri.getHitPoint() << std::endl;
    std::cout << "ScavTrap energy point "<< Henri.getEnergyPoint() << std::endl;
    std::cout << "ScavTrap attack dammage "<< Henri.getAttackDamage() << std::endl;
    Henri.attack("Huguette");
    Henri.guardGate();


    std::cout << std::endl << std::endl << "Test for constructor and destructor" << std::endl;
    ScavTrap Huguette;
    std::cout << "this is " << Huguette.getName() << std::endl;
    ScavTrap Mauricette("Mauricette");
    ScavTrap Leon("Leon");
    Leon = Mauricette;
    std::cout << "New name of Leon is " << Leon.getName() << std::endl;
}
