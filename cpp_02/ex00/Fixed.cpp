/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:25:57 by lnicolof          #+#    #+#             */
/*   Updated: 2024/11/19 14:11:23 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl; 
} 

/*
COnstructuer par defaut
Description : Un constructeur qui peut être appelé sans arguments, soit avec des valeurs par défaut, soit vide.
Intérêt :

    Permet de créer un objet sans lui passer immédiatement des arguments.
    Nécessaire si la classe est utilisée dans des conteneurs STL (comme std::vector) ou si des objets doivent être initialisés avant d’être configurés.
*/

Fixed::Fixed(void) {
    setRawBits(0);
     std::cout << "Default constructor called" << std::endl;
}

/*

2. Constructeur de recopie

Description : Un constructeur qui prend une référence constante à un autre objet de la même classe pour copier ses données.
Intérêt :

    Définit comment copier un objet, utile pour passer des objets par valeur ou les insérer dans des conteneurs.
    Nécessaire lorsque la classe utilise des ressources dynamiques (comme des pointeurs) pour éviter des copies superficielles (shallow copy).
*/
Fixed::Fixed(const Fixed&) {
    std::cout << "Copy constructor called" << std::endl;
}

/* Opérateur d’affectation (operator=)

Description : Définit ce qu’il faut faire lorsqu’un objet existant est affecté à un autre (a = b).
Intérêt :

    Gère la logique pour copier correctement les ressources (comme des pointeurs) d’un objet à un autre.
    Évite des problèmes de double libération de mémoire si des pointeurs sont mal gérés.
*/

Fixed& Fixed::operator=(Fixed const &other) {
    if (this != &other) {
        std::cout << "Copy assignment operator called" << std::endl;
        this->Value = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const {
    // Cette méthode ne peut pas modifier les membres de l'objet
    std::cout << "getRawBits member function called" << std::endl;
    return(this->Value);
}


void Fixed::setRawBits(int const raw) {
    this->Value = raw;
}

