/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:31:58 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/11 15:14:34 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp" 

Dog::Dog(void) : Animal() {
    std::cout  << "Dog default constructor is called" << std::endl;
    this->ideas = new Brain();
    this->_type = "Dog";
}


Dog::Dog(const Dog &other) : Animal() {
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
    if(this != &other) {
        this->ideas = other.ideas;
        this->_type = other.getType();
    } 
    return *this;
}

Dog::~Dog(void) {
    delete ideas;
    std::cout << "Dog default destructor is called" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << "WOUAF WOUAF" << std::endl;
}