/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:01:20 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/10 16:58:20 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    _type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal() {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
    if(this != &other) {
        Animal::operator=(other);
        _type = other.getType();
    }

    return *this;
}

Cat::~Cat() {
    std::cout << "Cat default destructor is called" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "MEOWWW MEOWW" << std::endl;
}