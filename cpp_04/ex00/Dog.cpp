/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:31:58 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/10 16:58:25 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp" 

Dog::Dog(void) : Animal() {
    this->_type = "Dog";
    std::cout  << "Dog default constructor is called" << std::endl;
}


Dog::Dog(const Dog &other) : Animal() {
    std::cout << "Dog copy constructor is called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
    if(this != &other) {
        Animal::operator=(other);
        this->_type = other.getType();
    } 
    return *this;
}

Dog::~Dog(void) {
    std::cout << "Dog default destructor is called" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << "WOUAF WOUAF" << std::endl;
}