/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:20:48 by codespace         #+#    #+#             */
/*   Updated: 2022/11/01 11:08:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string n) : ClapTrap( n ), ScavTrap( n ), FragTrap( n )
{
	name = n;
	ClapTrap::name = n.append("_clap_name");
	hitPoints = getHitpoints();
	energyPoints = getEnergyPoints();
	attackDamage = getAttackDamage();
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap is destroyed" << std::endl;
}

void	DiamondTrap::updateName( std::string n )
{
	std::cout << "DiamondTrap is created" << std::endl;
	name = n;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << name << " " << ClapTrap::name << std::endl;
}