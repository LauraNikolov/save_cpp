/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:47:54 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/10 17:48:47 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    *this = other;
    
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if(this != &other) {
        this->_type = other.getType();
    }

    return *this;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}


void WrongAnimal::makeSound(void) const {
    std::cout << "i am the wrong animal" << std::endl;
}

void WrongAnimal::setType(std::string new_type) {
    _type = new_type;
}

std::string WrongAnimal::getType(void) const {
    return _type;
}