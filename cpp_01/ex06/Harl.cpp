/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:33:29 by lauranicolo       #+#    #+#             */
/*   Updated: 2024/11/25 15:49:39 by lnicolof         ###   ########.fr       */
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
    int index;
    if (level == "DEBUG") index = 0;
    else if (level == "INFO") index = 1;
    else if (level == "WARNING") index = 2;
    else if (level == "ERROR") index = 3;
    else {
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        return;
    }

    switch(index) {
        case 0 : debug();
            //fallthrough
        case 1 : info();
            //fallthrough
        case 2 : warning();
            //fallthrough
        case 3 : error(); 
        }
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