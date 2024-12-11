/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:00:37 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/11 13:07:27 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
    #define BRAIN_HPP

#include <iostream>

class Brain {
    public :
    ~Brain();
    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    // std::string *get_ideas(void);
    void set_ideas(int index, std::string new_ideas);
    std::string get_ideas(int index);
    private:
    std::string ideas[100];
} ;

#endif