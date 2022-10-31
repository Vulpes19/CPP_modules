/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:20:48 by codespace         #+#    #+#             */
/*   Updated: 2022/10/31 11:33:56 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
/*
DiamondTrap::DiamondTrap( std::string n )
{
	name = n;
	std::cout << "DiamondTrap is created" << std::endl;
}*/

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap is destroyed" << std::endl;
}

void	DiamondTrap::updateName( std::string n )
{
	std::cout << "DiamondTrap is created" << std::endl;
	name = n;
}

void	attack( std::string &target )
{
	if (ScavTrap::energyPoints == 0)
	{
		std::cout << name << " is exhausted :(" << std::endl;
		return ;
	}
	if (FragTrap::hitPoints == 0)
	{
		std::cout << name << " is wasted :(" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << FragTrap::attackDamage << " points of damage!" << std::endl;
	ScavTrap::energyPoints--;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << name << " " << ScavTrap::name << std::endl;
}