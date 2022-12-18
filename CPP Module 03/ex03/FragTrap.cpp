/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:32:09 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/18 13:44:37 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string n ) : ClapTrap( n )
{ 
    std::cout << "FragTrap is created" << std::endl;
    name = n;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap &F ) : ClapTrap( F )
{
    std::cout << "FragTrap copy constructor is called" << std::endl;
    name = F.name;
    hitPoints = F.hitPoints;
    energyPoints = F.energyPoints;
    attackDamage = F.attackDamage;
}

FragTrap &FragTrap::operator= ( const FragTrap &F )
{
    std::cout << "Fragtrap copy assignement operator is called" << std::endl;
    if ( this != &F )
    {
        name = F.name;
        hitPoints = F.hitPoints;
        energyPoints = F.energyPoints;
        attackDamage = F.attackDamage;
    }
    return (*this);
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap is destroyed" << std::endl;
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "HIGH FIVE" << std::endl;
}