/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:26:55 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/09 15:19:02 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap(); //constructeur par defaut
    ScavTrap(std::string name);
    ScavTrap &operator=(const ScavTrap &other);
    ScavTrap(ScavTrap const &other);
    ~ScavTrap();               

    void guardGate(void);
    void attack(const std::string &target) ;
};

#endif
