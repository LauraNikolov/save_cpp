/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:03:27 by lnicolof          #+#    #+#             */
/*   Updated: 2024/10/14 18:00:04 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//setter de name

void Zombie::setName(std::string new_name)
{
    name = new_name;
}

//constructeur de la classe
Zombie::Zombie(std::string new_name) {
    name = new_name;
}

void Zombie::annonce(void) {
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}


//destructeur de la classe
Zombie::~Zombie(void) {
    std::cout << "Zombie " << name << " destroyed" << std::endl;
}
