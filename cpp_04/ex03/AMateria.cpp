/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:23:30 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/12 18:53:22 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << "Default Amateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->_type = type;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}