/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:50:46 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/12 19:04:47 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string name) : _name(name), total_idx(0) {
    for (int i = 0; i < 4; ++i) {
        invent[i] = NULL;
    }
}

Character::~Character() {
    for(int i = 0; i < 4; i++) {
        if(invent[i])
            delete invent[i];
        else
            break;
    }
}

Character::Character(const Character &other) {
    *this = other;
}

Character &Character::operator=(const Character &other) {
    if(this != &other) {
        for(int i = 0; i < 3; i++) {
            if(invent[i]) {
                this->invent[i] = other.invent[i];
            }
        }
}
    return(*this);
}
                

/* La fonction membre use(int, ICharacter&) utilisera la Materia de l’emplacement[idx],
et passera la cible en paramètre à la fonction AMateria::use */

void Character::use(int idx, ICharacter &target) {
    if(idx > 3 || idx < 0)
        return ;
    AMateria *tmp = this->invent[idx];
    if(!tmp) 
        return ;
    tmp->use(target);
}

void Character::unequip(int idx) {
    if(total_idx == 0 || total_idx > 4)
        return ;
    invent[idx] = NULL;
    // ! ne pas oublier d'utiliser tmp et le delete!
}

void Character::equip(AMateria *m) {
    int idx;

    idx = 0;
    while(invent[idx] && idx < 4) 
        idx++;
    if(idx <= 3)
        invent[idx] = m;
    total_idx++;
}

std::string const &Character::getName() const {
    return(_name);
}