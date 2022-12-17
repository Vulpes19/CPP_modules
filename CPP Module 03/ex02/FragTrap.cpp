/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:32:09 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/17 16:57:07 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string n ) : ClapTrap( n )
{ 
    updateAttFrag( n ); 
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap is destroyed" << std::endl;
}

void    FragTrap::updateAttFrag( std::string n )
{
    std::cout << "FragTrap is created" << std::endl;
    name = n;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "HIGH FIVE" << std::endl;
}