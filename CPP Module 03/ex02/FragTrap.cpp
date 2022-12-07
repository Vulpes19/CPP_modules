/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vulpes <vulpes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:32:09 by codespace         #+#    #+#             */
/*   Updated: 2022/12/07 17:32:19 by vulpes           ###   ########.fr       */
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
    std::cout << "FragTrap is created !" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "HIGH FIVE" << std::endl;
}