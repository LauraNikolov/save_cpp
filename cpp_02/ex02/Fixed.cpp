/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:25:57 by lnicolof          #+#    #+#             */
/*   Updated: 2024/11/19 19:16:01 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/* Constructeurs                                                              */
/* ************************************************************************** */


Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl; 
} 

/* ************************************************************************** */
/* Constructeurs                                                              */
/* ************************************************************************** */

//par defaut
Fixed::Fixed(void) {
    setRawBits(0);
     std::cout << "Default constructor called" << std::endl;
}

//de copie
Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    this->_value = other.getRawBits();
}

//avec un int
Fixed::Fixed(const int Value) {
    std::cout << "Int constructor called" << std::endl;
    _value = Value << _fractionnalBits; // Décalage à gauche pour convertir en virgule fixe
}


//avec un float
Fixed::Fixed(const float Value) {
    std::cout << "Float constructor called" << std::endl;
    _value = static_cast<int>(std::roundf(Value * (1 << _fractionnalBits)));
}


/* ************************************************************************** */
/* Opérateur d'affectation                                                    */
/* ************************************************************************** */


Fixed& Fixed::operator=(Fixed const &other) {
    if (this != &other) {
        std::cout << "Copy assignment operator called" << std::endl;
        this->_value = other.getRawBits();
    }
    return *this;
}


/*************************
 * SURCHARGE D'OPERATEUR *
 *************************/



Fixed& Fixed::operator>(Fixed const &other) {
    
}


Fixed& Fixed::operator<()

Fixed& Fixed::operator>=

Fixed& Fixed::operator<=

Fixed& Fixed::operator==

Fixed& Fixed::operator!=

Fixed& Fixed::operator+

Fixed& Fixed::operator-

Fixed& Fixed::operator*

Fixed& Fixed::operator/



/* ************************************************************************** */
/* Méthodes membres                                                           */
/* ************************************************************************** */

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_value);
}


void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}


/*
_value est divisé par 2^8 (ou 1≪8)
La division par 256 dans l'exemple est due au fait que la classe Fixed utilise 8 bits pour la partie fractionnaire.
 Cela signifie que chaque unité de la partie fractionnaire correspond à une fraction de 2^8
*/
float Fixed::toFloat(void) const {
    return static_cast<float>(_value) / (1 << _fractionnalBits);
}

//decacler de 8 a droite pour garder que l'entier
int Fixed::toInt(void) const {
    return _value >> _fractionnalBits;
}

/* ************************************************************************** */
/* Surcharge de l'opérateur <<                                                */
/* ************************************************************************** */


std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

/********************************************************************************************************************************************************************************************************************
 * LA VIRGULE FIXE EST UNE MANIÈRE DE REPRÉSENTER DES NOMBRES AVEC UNE PARTIE ENTIÈRE ET UNE PARTIE FRACTIONNAIRE EN UTILISANT UN ENTIER POUR TOUT STOCKER. 
 * PAR EXEMPLE, AVEC 8 BITS POUR LA PARTIE FRACTIONNAIRE : *
 *                               LE NOMBRE 5.25 SERAIT STOCKÉ COMME 5.25 × 2^8 = 1344.                                                                               *
 *                               LE NOMBRE ENTIER CORRESPONDANT À 1344 EST CE QUI EST ENREGISTRÉ DANS _VALUE.                                                                   *
 *                               LES CONVERSIONS CONSISTENT DONC À RÉCUPÉRER L'ÉQUIVALENT FLOTTANT OU ENTIER À PARTIR DE CETTE REPRÉSENTATION.                                                   *
 ********************************************************************************************************************************************************************************************************************/