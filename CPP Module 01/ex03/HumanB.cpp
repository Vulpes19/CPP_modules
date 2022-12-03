/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:41:26 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/17 17:10:10 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string newName )
{
	Name = newName;
	weapon = NULL;
}

HumanB::~HumanB( void )
{
	std::cout << Name << " is dead :(" << std::endl;
}

void	HumanB::attack( void )
{
	if ( weapon == NULL )
		std::cout << Name << "attacks with his bare hands" << std::endl;
	else
		std::cout << Name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &newWeapon )
{
	weapon = &newWeapon;
}