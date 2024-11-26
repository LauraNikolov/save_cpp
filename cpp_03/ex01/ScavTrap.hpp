/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:26:55 by lnicolof          #+#    #+#             */
/*   Updated: 2024/11/26 19:14:51 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
    #define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap :: public ClapTrap { 
    public : 
    ClapTrap(std::string name) : ScavTrap(std::string name); //constructeur herite
    void guardGate(void);
}


/* 
ScavTrap herite du constrcuteur et du destructeur de ClapTrap
mais il va imprimer des messages differents pour constructeur, son destrcuteur et sa fonction attack()
quand un scavtrap est cree, le programme commence par construire un claptrap, et pour la destruction c'est dans le sens inverse
nom= passe en parametre au constructeur,
point de vie = 100
point d'energie = 50
degats d'attaque = 20
il aura aussi sa propre capacite speciale, void guardGate(); -> cette fonction affiche que scavTrap est en mode GateKeeper


 */\

#endif