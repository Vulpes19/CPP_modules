/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:27:11 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/18 13:45:11 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string n ) : ClapTrap( n)
{ 
    std::cout << "ScavTrap is created" << std::endl;
    name = n;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &S ) : ClapTrap( S )
{
    std::cout << "ScavTrap copy constructor is called" << std::endl;
    name = S.name;
    hitPoints = S.hitPoints;
    energyPoints = S.energyPoints;
    attackDamage = S.attackDamage;
}

ScavTrap &ScavTrap::operator= ( const ScavTrap &S )
{
    std::cout << "ScavTrap copy assignement operator is called" << std::endl;
    if ( this != &S )
    {
         name = S.name;
        hitPoints = S.hitPoints;
        energyPoints = S.energyPoints;
        attackDamage = S.attackDamage;
    }
    return (*this);
}

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