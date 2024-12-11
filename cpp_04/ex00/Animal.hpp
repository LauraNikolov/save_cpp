/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:45:12 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/11 15:29:22 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
    #define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    public:
        Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        std::string getType(void) const;
        void setType(std::string new_type);
        ~Animal();
        virtual void makeSound(void) const;
    protected:
        std::string _type;
} ;

#endif