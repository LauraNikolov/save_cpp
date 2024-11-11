/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauranicoloff <lauranicoloff@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:33:29 by lauranicolo       #+#    #+#             */
/*   Updated: 2024/11/11 18:59:57 by lauranicolo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    //tableau de pointeur vers les fonctions membres
    void (Harl::*tablevel[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

    std::string level_str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for(int i = 0; i < 4; i++) {
        if(level_str[i] == level)
        {
            (this->*tablevel[i])();
            return ;
        }
    }
    
    std::cerr << "Unknow level" <<std::endl;
}

/*
void (Harl::*tablevel[])(void) :
void indique que les fonctions pointées par ces pointeurs retournent void.
(Harl::*) signifie que ce sont des pointeurs vers des fonctions membres de la classe Harl.
tablevel[] est le nom du tableau de pointeurs.
(void) indique que chaque fonction dans le tableau ne prend pas de paramètres.
= { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error }; :
Cette initialisation remplit le tableau tablevel avec les adresses des fonctions membres debug, info, warning, et error de la classe Harl.
*/