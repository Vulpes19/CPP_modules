/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:42:25 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/17 19:20:17 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string input )
{
    std::cout << "ClapTrap is created" << std::endl;
    name = input;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &C )
{
	std::cout << "copy constructor called" << std::endl;
	name = C.name;
    hitPoints = C.hitPoints;
    energyPoints = C.energyPoints;
    attackDamage = C.attackDamage;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap is destoryed" << std::endl;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &C )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &C)
	{
		name = C.name;
        hitPoints = C.hitPoints;
        energyPoints = C.energyPoints;
        attackDamage = C.attackDamage;
	}
	return (*this);
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
    hitPoints += amount;
    energyPoints--;
}