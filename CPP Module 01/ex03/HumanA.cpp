/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:41:17 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/17 17:21:06 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string newName, Weapon &newWeapon ) : weapon(newWeapon)
{
	Name = newName;
}

HumanA::~HumanA( void )
{
	std::cout << Name << " is dead :(" << std::endl;
}

void	HumanA::attack( void )
{
	std::cout << Name << " attacks with their " << weapon.getType() << std::endl;
}
