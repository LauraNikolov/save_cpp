/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:13:19 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/12 19:17:49 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
    #define MATERIASOURCE_HPP

#include "IMateriaSource.cpp"

class MateriaSource : public IMateriaSource {
    MateriaSource();
    MateriaSource(const MateriaSource &other);
    MateriaSource &operator=(const MateriaSource &other);
    virtual ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* CreateMateria(std::string const & type);
}
#endif