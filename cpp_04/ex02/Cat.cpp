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
    std::cout << "Cat copy constructor called" << std::endl;
    Ideas = new Brain(*other.Ideas);
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
    if(this != &other) {
        Animal::operator=(other);
        delete Ideas;
        Ideas = new Brain(*other.Ideas);
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

Brain* Cat::getBrain() const {
    return Ideas;
}