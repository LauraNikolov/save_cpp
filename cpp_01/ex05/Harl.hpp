/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauranicoloff <lauranicoloff@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:25:53 by lauranicolo       #+#    #+#             */
/*   Updated: 2024/11/11 19:04:19 by lauranicolo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
    # define HARL_HPP

#include <iostream>

class Harl {

    public :
        void complain( std::string level);
    
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
} ;

#endif