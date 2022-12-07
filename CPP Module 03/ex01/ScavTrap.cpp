/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vulpes <vulpes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:27:11 by codespace         #+#    #+#             */
/*   Updated: 2022/12/07 17:29:45 by vulpes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string n ) : ClapTrap( n )
{ 
    updateAtt(n);
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "ScavTrap is destroyed" << std::endl;
}

void    ScavTrap::updateAtt( std::string n )
{
    std::cout << "ScavTrap is created" << std::endl;
    name = n;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
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