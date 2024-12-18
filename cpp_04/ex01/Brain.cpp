/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:45:21 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/11 15:11:29 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain copy constructor called" << std::endl;
        *this = other;
}

Brain &Brain::operator=(const Brain &other) {
    if(this != &other) {
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain default destructor is called" << std::endl;
}

void Brain::set_ideas(int index, std::string new_ideas) {
    if(index < 0 || index > 100)
        return ;
    ideas[index] = new_ideas;
}

std::string Brain::get_ideas(int index) {
    if(index > 100 || index < 0)
        return NULL;
    else
        return ideas[index];
}



