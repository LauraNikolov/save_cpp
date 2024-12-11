/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:28:50 by lnicolof          #+#    #+#             */
/*   Updated: 2024/12/11 17:37:43 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
    #define CURE_HPP

class Cure {
       private:
        std::string type;
    public:
        Cure();
        Cure(const Ice &other);
        Cure &operator=(const Cure &other);
        ~Cure();
        AMateria* clone() const;
        void use(ICharacter& target);
}

#endif