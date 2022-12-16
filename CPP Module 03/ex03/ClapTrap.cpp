/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:42:25 by codespace         #+#    #+#             */
/*   Updated: 2022/12/16 14:53:43 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string n ) : name(n)
{
    std::cout << "ClapTrap is created" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "ClapTrap is destroyed" << std::endl;
}

void    ClapTrap::attack( const std::string &target )
{
    if (energyPoints == 0)
    {
        std::cout << name << " is tired :(" << std::endl;
        return ;
    }
    if (hitPoints == 0)
    {
        std::cout << name << " is dead :(" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    hitPoints -= amount;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    hitPoints += amount;
}