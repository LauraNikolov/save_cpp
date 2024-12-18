/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:01:20 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/10 17:50:02 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    _type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal() {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    if(this != &other) {
        _type = other.getType();
    }

    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat default destructor is called" << std::endl;
}

// void WrongCat::makeSound(void) const {
//     std::cout << "MEOWWW MEOWW" << std::endl;
// }