/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:17:52 by lnicolof          #+#    #+#             */
/*   Updated: 2024/11/25 13:14:29 by lnicolof         ###   ########.fr       */
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
        Fixed(const Fixed &other); 
        Fixed(int const raw);
        Fixed(float const raw);
        //Operateur d'affectation
        Fixed& operator=(Fixed const &other);
        ~Fixed(); 
        // Retourne la valeur brute du nombre en virgule fixe
        int getRawBits() const;
        // Initialise la valeur brute du nombre en virgule fixe
        void setRawBits(int const raw);    
        //convertit la valeur en virgule fixe en nombre entier
        int toInt(void) const ;
        //convertit la velur en virgule fixe en virgule flottante
        float toFloat(void) const ;
    
    private:
        int _value; //valeur fixe
        static const int _fractionnalBits = 8; //nombre de bits pour la partie fractionnaire
} ;


// Surcharge de l'opérateur d'insertion (<<) pour afficher le Fixed
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif