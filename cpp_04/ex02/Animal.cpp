/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:48:54 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/11 15:10:54 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
    
}

Animal &Animal::operator=(const Animal &other) {
    if(this != &other) {
        this->_type = other.getType();
    }

    return *this;
}

Animal::~Animal(void) {
    std::cout << "Animal default destructor called" << std::endl;
}


void Animal::makeSound(void) const {
    std::cout << "Animaaaaaaaal" << std::endl;
}

void Animal::setType(std::string new_type) {
    _type = new_type;
}

std::string Animal::getType(void) const {
    return _type;
}