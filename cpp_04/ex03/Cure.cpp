/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:38:52 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/11 17:41:28 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"


Cure::Cure(void) {
    type = "cure";
}

Cure::Cure(const Cure &other) {
    *this = other;
}

Cure &Cure::operator=(const Cure &other) {
    if(this != &other) {
        type = other.type;
    }
    return(*this);
}

