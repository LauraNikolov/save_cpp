/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:07:44 by lnicolof          #+#    #+#             */
/*   Updated: 2024/11/25 19:16:29 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    // Création de deux ClapTraps
    ClapTrap clap1("ClapOne");
    ClapTrap clap2("ClapTwo");

    std::cout << std::endl;

    // Test du constructeur par copie
    ClapTrap clapCopy(clap1);
    std::cout << std::endl;

    // Test de l'opérateur d'affectation
    clapCopy = clap2;
    std::cout << std::endl;

    // Test des attaques
    clap1.attack("TargetOne");
    clap2.attack("TargetTwo");

    std::cout << std::endl;

    // Test des dégâts
    clap1.takeDamage(3);
    clap2.takeDamage(15);

    std::cout << std::endl;

    // Test de la réparation
    clap1.beRepaired(5);
    clap2.beRepaired(10);

    std::cout << std::endl;

    // Test des cas limites
    ClapTrap clapDead("ClapDead");
    clapDead.takeDamage(20); // Réduit les points de vie à 0
    clapDead.attack("Target"); // Impossible d'attaquer
    clapDead.beRepaired(10); // Impossible de se réparer

    std::cout << std::endl;

    // Test des cas sans énergie
    ClapTrap clapTired("ClapTired");
    for (int i = 0; i < 12; i++) { // Épuise les points d'énergie
        clapTired.attack("Dummy");
    }
    clapTired.beRepaired(5); // Impossible de se réparer
    clapTired.attack("Another Dummy"); // Impossible d'attaquer

    std::cout << std::endl;

    return 0;
}
