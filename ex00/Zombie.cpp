/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:03:27 by lnicolof          #+#    #+#             */
/*   Updated: 2024/10/10 15:24:58 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
