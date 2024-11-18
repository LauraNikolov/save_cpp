/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:17:52 by lnicolof          #+#    #+#             */
/*   Updated: 2024/11/18 18:10:33 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
    #define FIXED_HPP

#include <iostream>


class Fixed {
    
    public:
        //constructuer de copie
        Fixed(); 
        //constructeur de recopie
        Fixed(const Fixed &); 
        //Operateur d'affectation
        Fixed& operator=(Fixed const &other);
        ~Fixed(); 
        // Retourne la valeur brute du nombre en virgule fixe
        int getRawBits() const;
        // Initialise la valeur brute du nombre en virgule fixe
        void setRawBits(int const raw);    
    
    private:
        int Value;
        static const int FractionnalBits = 8;
} ;



#endif