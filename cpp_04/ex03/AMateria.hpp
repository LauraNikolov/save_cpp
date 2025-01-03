/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:09:17 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/12 18:57:43 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
    #define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"


class AMateria {
protected:
    std::string _type;
public:
    AMateria(void);
    AMateria(std::string const & type);
    virtual ~AMateria();
    AMateria &operator=(const AMateria &other);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};


#endif