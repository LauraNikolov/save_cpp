/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:00:37 by lnicolof          #+#    #+#             */
/*   Updated: 2024/11/07 15:12:54 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {

public: 
    HumanA(std::string name, Weapon& weapon);
    void attack();

private:
    Weapon& weapon;  // Declare weapon as a reference to Weapon
    std::string name;
};

