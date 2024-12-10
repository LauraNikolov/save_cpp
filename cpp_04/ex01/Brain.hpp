/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:00:37 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/10 19:07:13 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
    #define BRAIN_HPP

#include <iostream>

class Brain {
    public :
    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    ~Brain();
    // std::string *getIdeas(int index);
    // void setIdeas(int index, std::string new_ideas);
    std::string ideas[100];
} ;

#endif