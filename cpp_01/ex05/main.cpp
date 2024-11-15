/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauranicoloff <lauranicoloff@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:19:04 by lauranicolo       #+#    #+#             */
/*   Updated: 2024/11/11 19:19:05 by lauranicolo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main() {
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("UNKNOWN"); // Test d'un niveau invalide

    return 0;
}
