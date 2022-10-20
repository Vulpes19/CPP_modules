/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:41:17 by codespace         #+#    #+#             */
/*   Updated: 2022/10/17 17:21:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string newName, Weapon newWeapon)
{
	Name = newName;
	Weapon = newWeapon.getType();
}

HumanA::~HumanA( void )
{
	std::cout << Name << " is dead :(" << std::endl;
}

void	HumanA::attack( void )
{
	std::cout << Name << " attacks with their " << Weapon << std::endl;
}
