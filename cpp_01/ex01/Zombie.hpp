/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolof <lnicolof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:53:39 by lnicolof          #+#    #+#             */
/*   Updated: 2024/10/14 18:08:27 by lnicolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP



# include <iostream>

class Zombie
{
  public:
	~Zombie();
	//utilise default en absence de nom
	Zombie(std::string new_name = "default");
	void setName(std::string new_name);
	void annonce(void);

  private:
	std::string name;
};

Zombie	*newZombie(std::string name);
// Crée un zombie,
	//lui donne un nom et le retourne afin qu’il puisse être utilisé en
// dehors de la portée de la fonction.

void	randomChump(std::string name);
// Crée un zombie, lui donne un nom et le fait se présenter.

Zombie	*zombieHorde(int N, std::string name);

#endif