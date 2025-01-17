/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:28:50 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/12 17:42:17 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
    #define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
    private:
        std::string type;
    public:
        Ice();
        Ice(const Ice &other);
        Ice &operator=(const Ice &other);
        ~Ice();
        AMateria* clone() const;
        void use(ICharacter& target);
    
};

#endif