/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:38:52 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/12 19:05:24 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include <iostream>


Cure::Cure(void) {
    _type = "cure";
}

Cure::Cure(const Cure &other) : AMateria() {
    if(this != &other) {
        *this = other;
    }
}

Cure &Cure::operator=(const Cure &other) {
    if(this != &other) {
        _type = other._type;
    }
    return(*this);
}

Cure::~Cure() {
    std::cout << "Cure destrcutor called" << std::endl;
}

AMateria* Cure::clone() const {
    AMateria *clone = new Cure();
    return clone;
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
