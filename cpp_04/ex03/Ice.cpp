/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:34:39 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/12 19:06:32 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
    _type = "ice";
}

Ice::Ice(const Ice &other) : AMateria() {
    *this = other;
}

Ice &Ice::operator=(const Ice &other) {
    if(this != &other) {
        _type = other._type;
    }
    return(*this);
}

Ice::~Ice() {
    std::cout << "Ice default destructor is called" << std::endl;
}

AMateria *Ice::clone() const {
    AMateria *clone = new Ice();
    return(clone);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at  " << target.getName() << " *" << std::endl;
}