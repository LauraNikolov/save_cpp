/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:44:02 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/12 19:00:37 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
    #define CHARACTER_HPP
    
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter {
    public:
    Character();
    Character(std::string name);
    Character(const Character &other);
    Character &operator=(const Character &other);
    ~Character();
    
    std::string const &getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

    private:
    std::string _name;
    AMateria *invent[4];
    int total_idx;
};

#endif