/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauranicoloff <lauranicoloff@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:19:11 by lauranicolo       #+#    #+#             */
/*   Updated: 2024/11/11 19:22:16 by lauranicolo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
        return(std::cout << "Error: invalid argument" << std::endl, 0);
    Harl harl;
    harl.complain(argv[1]);
    
}