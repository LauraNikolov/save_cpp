/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:45:21 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/10 19:07:45 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
    if(this != &other) {
        *this = other;
    }
}

Brain &Brain::operator=(const Brain &other) {
    if(this != &other) {
        //this->ideas = other.ideas;
    }

    return *this;
}

// std::string getIdeas(int index) {
//     if(index < 0)
//         return(NULL);
//     return(this->ideas[index]);
// }

// void setIdeas(int index, std::string new_ideas) {
//     this->ideas[index] = new_ideas;
// }

