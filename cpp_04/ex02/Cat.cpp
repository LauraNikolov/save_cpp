/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:01:20 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/11 15:14:20 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    std::cout << "Cat default constructor called" << std::endl;
    Ideas = new Brain();
    _type = "Cat";
}

Cat::Cat(const Cat &other) : Animal() {
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
    if(this != &other) {
        Ideas = other.Ideas;
        _type = other.getType();
    }

    return *this;
}

Cat::~Cat() {
    delete Ideas;
    std::cout << "Cat default destructor is called" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "MEOWWW MEOWW" << std::endl;
}