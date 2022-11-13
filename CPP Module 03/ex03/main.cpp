/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:07:23 by codespace         #+#    #+#             */
/*   Updated: 2022/11/13 17:25:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap D("Ayyy");

    D.attack("hmar");
    D.takeDamage(10);
    std::cout << D.getHitpoints() << std::endl;
    D.whoAmI();
}