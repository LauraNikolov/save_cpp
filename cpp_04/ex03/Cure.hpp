/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:28:50 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/12 19:07:42 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
    #define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
    public :
    Cure();
    Cure(const Cure &other);
    Cure &operator=(const Cure &other);
    ~Cure(); 
    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif