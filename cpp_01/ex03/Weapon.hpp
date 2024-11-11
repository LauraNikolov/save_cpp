/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:57:55 by lnicolof          #+#    #+#             */
/*   Updated: 2024/11/07 14:58:29 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon {

    public :
    Weapon(const std::string& name);
    const std::string& getType();
    void setType(std::string new_type);

    private : 
    std::string type;
};

#endif