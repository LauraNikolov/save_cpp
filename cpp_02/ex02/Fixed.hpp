/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:17:52 by lnicolof          #+#    #+#             */
/*   Updated: 2024/11/25 16:26:40 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
    #define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed {
    
    public:
        //constructuer de copie
        Fixed(); 
        //constructeur de recopie
        Fixed(const Fixed &); 
        Fixed(int const raw);
        Fixed(float const raw);
        //Operateur d'affectation
        Fixed& operator=(Fixed const &other);
        bool operator>(Fixed const &other) const;
        bool operator<(Fixed const &other) const;
        bool operator>=(Fixed const &other);
        bool operator<=(Fixed const &other);
        bool operator==(Fixed const &other);
        bool operator!=(Fixed const &other);
        Fixed operator+(Fixed const &other);
        Fixed operator-(Fixed const &other);
        Fixed operator*(Fixed const &other);
        Fixed operator/(Fixed const &other);
        Fixed operator++(void);
        Fixed operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);
        // Retourne la valeur brute du nombre en virgule fixe
        int getRawBits() const;
        // Initialise la valeur brute du nombre en virgule fixe
        void setRawBits(int const raw);    
        //convertit la valeur en virgule fixe en nombre entier
        int toInt(void) const ;
        //convertit la velur en virgule fixe en virgule flottante
        float toFloat(void) const ;
        static Fixed &min (Fixed &first, Fixed &second);
		const static Fixed &min ( const Fixed &first, const Fixed &second);
		static Fixed &max ( Fixed &first, Fixed &second);
		const static Fixed &max ( const Fixed &first, const Fixed &second);
    
    private:
        int _value; //valeur fixe
        static const int _fractionnalBits = 8; //nombre de bits pour la partie fractionnaire
} ;


// Surcharge de l'opérateur d'insertion (<<) pour afficher le Fixed
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif