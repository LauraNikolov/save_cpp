/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:45:12 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/11 15:36:09 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
    #define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"


/*  Une fonction virtuelle pure est une fonction membre déclarée dans  une classe de base qui n'a pas d'implémentation dans cette classe 
et doit être implémentée par les classes dérivées.  Elle est utilisée pour créer des classes abstraites, qui ne peuvent pas être instanciées directement et servent de modèles pour d'autres classes.

Une classe abstraite est une classe qui ne peut pas être instanciée. Elle est utilisée pour définir une interface pour les classes dérivées.
Elle se declare en ajoutant le mot-clé "virtual" à une méthode dans la classe de base et en la définissant comme une fonction pure en ajoutant "= 0" à la fin de la déclaration de la méthode.

*/


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