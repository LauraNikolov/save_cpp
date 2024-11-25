/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:25:57 by lnicolof          #+#    #+#             */
/*   Updated: 2024/11/25 16:48:02 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/* Constructeurs                                                              */
/* ************************************************************************** */

// Fixed::~Fixed(void){}
// }

/* ************************************************************************** */
/* Constructeurs                                                              */
/* ************************************************************************** */

// par defaut
Fixed::Fixed(void)
{
	setRawBits(0);
}

// de copie
Fixed::Fixed(const Fixed &other)
{
	this->_value = other.getRawBits();
}

// avec un int
Fixed::Fixed(const int Value)
{
	_value = Value << _fractionnalBits;
		// Décalage à gauche pour convertir en virgule fixe
}

// avec un float
Fixed::Fixed(const float Value)
{
	_value = static_cast<int>(roundf(Value * (1 << _fractionnalBits)));
}

/* ************************************************************************** */
/* Opérateur d'affectation                                                    */
/* ************************************************************************** */

Fixed &Fixed::operator=(Fixed const &other)
{
	if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	return (*this);
}

/*************************
 * SURCHARGE D'OPERATEUR *
 *************************/

bool Fixed::operator>(Fixed const &other) const
{
	if (this != &other)
	{
		if (this->_value > other._value)
			return (true);
		else
			return (false);
	}
	return (false);
}

bool Fixed::operator<(Fixed const &other) const
{
	if (this != &other)
	{
		if (this->_value < other._value)
			return (true);
		else
			return (false);
	}
	return (false);
}

bool Fixed::operator>=(Fixed const &other)
{
	if (this != &other)
	{
		if (this->_value >= other._value)
			return (true);
		else
			return (false);
	}
	return (true);
}

bool Fixed::operator<=(Fixed const &other)
{
	if (this != &other)
	{
		if (this->_value <= other._value)
			return (true);
		else
			return (false);
	}
	return (true);
}


bool Fixed::operator==(Fixed const &other)
{
    if (this != &other)
	{
		if (this->_value == other._value)
			return (true);
		else
			return (false);
	}
	return (true);
}

bool Fixed::operator!=(Fixed const &other)
{
    if (this != &other)
	{
		if (this->_value != other._value)
			return (true);
		else
			return (false);
	}
	return (false);
}

Fixed Fixed::operator+(Fixed const &other) {
    Fixed result;
    result.setRawBits(this->_value + other._value);
    return result;
}

Fixed Fixed::operator-(Fixed const &other)
{
    Fixed result;
    result.setRawBits(this->_value - other._value);
    return result;
}

Fixed Fixed::operator*(Fixed const &other) {
    Fixed result;
    result.setRawBits((this->_value * other._value) >> _fractionnalBits);
    return result;
}

Fixed Fixed::operator/(Fixed const &other)
{
    Fixed result;
    result.setRawBits((this->_value << _fractionnalBits) / other._value);
    return result;
}

/*********************************
 * INCREMENTATION/DECREMENTATION *
 *********************************/

/*
Résumé :

    Préfixe (++a) : Fixed &operator++(void);
    Postfixe (a++) : Fixed operator++(int);

Le paramètre int dans l'implémentation postfixe est une convention pour différencier l'opérateur postfixe du préfixe, 
car il ne sert qu'à indiquer au compilateur qu'il s'agit de la version postfixe.
*/

Fixed Fixed::operator++(void)
{
    int tmp;

    tmp = this->_value;
    ++tmp;
    setRawBits(tmp);
    return(*this);
}

Fixed Fixed::operator--(void)
{
    Fixed tmp;

    tmp = *this;
    --_value;
    return(tmp);
}

Fixed Fixed::operator++(int) {
	Fixed tmp;

    tmp = *this;
    ++_value;
    return(tmp);
}

Fixed Fixed::operator--(int) {
    int tmp;

    tmp = this->_value;
    --tmp;
    setRawBits(tmp);
    return(*this);
}


/* ************************************************************************** */
/* Méthodes membres                                                           */
/* ************************************************************************** */

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

/*
_value est divisé par 2^8 (ou 1≪8)
La division par 256 dans l'exemple est due au fait que la classe Fixed utilise 8 bits pour la partie fractionnaire.
 Cela signifie que chaque unité de la partie fractionnaire correspond à une fraction de 2^8
*/
float Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / (1 << _fractionnalBits));
}

// decacler de 8 a droite pour garder que l'entier
int Fixed::toInt(void) const
{
	return (_value >> _fractionnalBits);
}

// Fonction membre statique min (non-const)
Fixed &Fixed::min(Fixed &first, Fixed &second) {
    return (first.getRawBits() < second.getRawBits()) ? first : second;
}

// Fonction membre statique min (const)
const Fixed &Fixed::min(const Fixed &first, const Fixed &second) {
    return (first.getRawBits() < second.getRawBits()) ? first : second;
}

// Fonction membre statique max (non-const)
Fixed &Fixed::max(Fixed &first, Fixed &second) {
    return (first.getRawBits() > second.getRawBits()) ? first : second;
}

// Fonction membre statique max (const)
const Fixed &Fixed::max(const Fixed &first, const Fixed &second) {
    return (first.getRawBits() > second.getRawBits()) ? first : second;
}

/* ************************************************************************** */
/* Surcharge de l'opérateur <<                                                */
/* ************************************************************************** */

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

/********************************************************************************************************************************************************************************************************************

	* LA VIRGULE FIXE EST UNE MANIÈRE DE REPRÉSENTER DES NOMBRES AVEC UNE PARTIE ENTIÈRE ET UNE PARTIE FRACTIONNAIRE EN UTILISANT UN ENTIER POUR TOUT STOCKER.
 * PAR EXEMPLE, AVEC 8 BITS POUR LA PARTIE FRACTIONNAIRE : *

	*                               LE NOMBRE 5.25 SERAIT STOCKÉ COMME 5.25 × 2^8 = 1344.                                                                              
	*

	*                               LE NOMBRE ENTIER CORRESPONDANT À 1344 EST CE QUI EST ENREGISTRÉ DANS _VALUE.                                                                  
	*

	*                               LES CONVERSIONS CONSISTENT DONC À RÉCUPÉRER L'ÉQUIVALENT FLOTTANT OU ENTIER À PARTIR DE CETTE REPRÉSENTATION.                                                  
	*
 ********************************************************************************************************************************************************************************************************************/