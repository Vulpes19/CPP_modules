/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:20:48 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/17 16:58:47 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string n) : ClapTrap( n ), ScavTrap( n ), FragTrap( n )
{
	std::cout << "DiamondTrap is created" << std::endl;
	name = n;
	ClapTrap::name = n.append("_clap_name");
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap is destroyed" << std::endl;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name: " << name << std::endl << "ClapTrap name: " << ClapTrap::name << std::endl;
}