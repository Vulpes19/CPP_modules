/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:27:11 by codespace         #+#    #+#             */
/*   Updated: 2022/10/29 13:20:00 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap( void )
{
    std::cout << "ScavTrap is destroyed" << std::endl;
}

void    ScavTrap::attack( const std::string &target )
{
     if (ClapTrap::energyPoints == 0)
    {
        std::cout << name << " is exhausted :(" << std::endl;
        return ;
    }
    if (hitPoints == 0)
    {
        std::cout << name << " is wasted :(" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
}

void    ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap is in Gate keeper mode" << std::endl;
}