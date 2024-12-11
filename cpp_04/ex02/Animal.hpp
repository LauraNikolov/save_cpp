/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:45:12 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/11 16:20:21 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
    #define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
    public:
        Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        std::string getType(void) const;
        void setType(std::string new_type);
        virtual ~Animal();
        virtual void makeSound() const = 0;
    protected:
        std::string _type;
} ;

#endif