/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:42:25 by codespace         #+#    #+#             */
/*   Updated: 2022/10/29 12:12:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string input )
{
    std::cout << "constructor is called" << std::endl;
    name = input;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &C)
{
    std::cout << "copy constructor is called" << std::endl;
    name = C.name;
    hitPoints = C.hitPoints;
    energyPoints = C.energyPoints;
    attackDamage = C.attackDamage;
}

ClapTrap    &ClapTrap::operator=( const ClapTrap &C)
{
    std::cout << "operator is called" << std::endl;
    if (this != &C)
    {
        name = C.name;
        hitPoints = C.hitPoints;
        energyPoints = C.energyPoints;
        attackDamage = C.attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "destructor called" << std::endl;
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